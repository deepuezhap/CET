<?php
include 'connect.php' ;
$sql="select * from stud";

$result =mysqli_query($cn,$sql);
?>

<form action="" method="POST">
Search bar : <input type="text" name="val" ><br><br><br>
<input type= "submit">
</form>
<br>
<table border="1">
<tr>
    <td>Name</td>
    <td>Roll No</td>
    <td>Mark</td>
</tr>

<?php    
if(!$_POST)
{
while($row=mysqli_fetch_assoc($result))
{

    echo "<tr>
    <td>".$row['name']."</td>
    <td>".$row['roll_no']."</td>
    <td>".$row['mark']."</td>
    </tr>
    ";

}

}
if($_POST)
{
    $roll=$_POST['val'];

    $sq="select * from stud where roll_no = $roll ";
    $result = mysqli_query($cn,$sq);
    while($row=mysqli_fetch_assoc($result))
    {
        echo "<tr>
        <td>".$row['name']."</td>
        <td>".$row['roll_no']."</td>
        <td>".$row['mark']."</td>
        </tr>
        ";

    }

}



$sql2="update stud set mark = $mark where roll_no = $roll ";








?>
</table>


