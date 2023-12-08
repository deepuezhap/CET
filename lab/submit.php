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
    
    Name : <input type="text" name="val1" ><br><br>
    ROll : <input type="text" name="val2" ><br><br>
    Mark : <input type="text" name="val3" ><br><br>
    <input type="submit" >

</form>
<?php
if($_POST)
{
    $sq = "insert into stud values('$_POST[val1]','$_POST[val2]','$_POST[val3]')";

    
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


