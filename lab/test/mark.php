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
    $sq="select  ktu_id from reginfo";
    $r=mysqli_query($cn,$sq);
    echo "<select name='ktuid'>";
    while($row=mysqli_fetch_assoc($r))
        echo "<option value=".$row['ktu_id'].">".$row['ktu_id']."</option>";
    echo "</select><br><br>";
?>

Subject : <input type="text" name="val1" required><br><br>
Series 1 Mark : <input type="number" name="val2" required><br><br>
Series 2 Mark : <input type="number" name="val3" required><br><br>
Assignment 1 Mark : <input type="number" name="val4" required><br><br>
Assignment 2 Mark : <input type="number" name="val5" required><br><br>
Attendence percentage : <input type="number" name="val6" required><br><br>

<input type="submit" >

</form>
<?php
if($_POST)
{
    $sq = "insert into mark values('$_POST[ktuid]','$_POST[val1]','$_POST[val2]','$_POST[val3]','$_POST[val4]','$_POST[val5]','$_POST[val6]')";
    $p = mysqli_query($cn,$sq);

     if($p)
     {
        echo "<script>
        alert('insertion successfull');
        </script>
        " ;
     }
}

?>

</body>
</html>


