<?php
include 'connect.php' ;
?>
<!DOCTYPE html>
<html lang="en">
<head>
<title>FORM</title>
</head>
<body>
<form action="" method="post">
    
    <?php
    $sq="select distinct ktu_id,subject from mark";
    $r=mysqli_query($cn,$sq);
    echo "<select name='ktuid'>";
    while($row=mysqli_fetch_assoc($r))
        echo "<option value=".$row['ktu_id'].">".$row['ktu_id']."</option>";


    
    echo "</select><br><br>";



?>

<input type="submit" name="search" value="search" ><br><br>
<?php

if(isset($_POST['search']))
{

$id=$_POST['ktuid'];
$sub=$_POST['subject'];

$sql="select * from mark where ktu_id='$id' and subject=''";
$r=mysqli_query($cn,$sql);
$row=mysqli_fetch_assoc($r);

?>


Subject : <input type="text" name="val1" value="<?php echo $row['subject'] ?>" required><br><br>
Series 1 Mark : <input type="number" name="val2" value="<?php echo $row['series1'] ?>" required><br><br>
Series 2 Mark : <input type="number" name="val3" value="<?php echo $row['series2'] ?>" required><br><br>
Assignment 1 Mark : <input type="number" name="val4" value="<?php echo $row['ass1'] ?>" required><br><br>
Assignment 2 Mark : <input type="number" name="val5" value="<?php echo $row['ass2'] ?>" required><br><br>
Attendence percentage : <input type="number" name="val6" value="<?php echo $row['attendance'] ?>" required><br><br>

<input type="submit" name="submit" value="update">

<?php
}
?>


</form>
<?php
if(isset($_POST['update']))
{
    $sq = "update mark set subject ='$_POST[val1]',series1='$_POST[val2]',series2='$_POST[val3]',ass1='$_POST[val4]',ass2='$_POST[val5]',attendance='$_POST[val6]'";
    $p = mysqli_query($cn,$sq);

     if($p)
     {
        echo "<script>
        alert('updation successfull');
        </script>
        " ;
     }
}



?>

</body>
</html>


