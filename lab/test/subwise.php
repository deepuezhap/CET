<?php
include 'connect.php' ;
?>

<form action="" method="POST">
Search bar : <input type="text" name="val" ><br><br><br>
<input type= "submit">
</form>

<?php

if($_POST)
{

    $sub=$_POST['val'];
    $sql=" select * from mark m,reginfo r where m.ktu_id = r.ktu_id and subject= '$sub' ";

$result =mysqli_query($cn,$sql);
?>

<br>
<table border="1">
<tr>
    <td>Name</td>
    <td>ktu id</td>
    <td>subject</td>
    <td>series 1</td>
    <td>series 2 </td>
    <td>Assignment 1 </td>
    <td>Assignment 2 </td>
    <td>Attendence </td>
    <td>series </td>
    <td>assignment total</td>
    <td>Total</td>

</tr>

<?php    
while($row=mysqli_fetch_assoc($result))
{
    $st = (( $row['series1'] + $row['series2'] ) / 100) * 20 ;
    $ass = (( $row['series1'] + $row['series2'] ) / 2)  ;
    $att=$row['attendance'];
    if($att>=90)
    {
        $atmark=9 ;
    }else if ($att>=85 && $att<90)
    {
        $atmark=8 ;

    }
    else if ($att>=75 && $att <85)
    {
        $atmark=7;
    }
    else{
        $atmark=0;
    }

    
    $total=$st + $ass + $atmark ;


    echo "<tr>
    <td>".$row['name']."</td>
    <td>".$row['ktu_id']."</td>
    <td>".$row['subject']."</td>
    <td>".$row['series1']."</td>
    <td>".$row['series2']."</td>
    <td>".$row['ass1']."</td>
    <td>".$row['ass2']."</td>
    <td>".$row['attendance']." %</td>
    <td>".$st."</td>
    <td>".$ass."</td>
    <td>".$total."</td>
    </tr>
    ";

}

?>
</table>
<?php
}


?>

