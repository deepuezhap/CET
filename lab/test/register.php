<?php
include 'connect.php' ;

?>


<!DOCTYPE html>
<html lang="en">
<head>
   
    <title>FORM</title>
</head>
<body>
    <center>
            <h1>Student Registration</h1>
<form action="" method="post">
    
    KTU ID : <input type="text" name="ktuid" required ><br><br>
    ROll : <input type="text" name="roll"  required><br><br>
    Semester:<select name="semester">
        <option value="s1">s1</option>
        <option value="s2">s2</option>
        <option value="s3">s3</option>
        <option value="s4">s4</option>
        
</select><br><br>
    Name : <input type="text" name="name" required ><br><br>
    Gender : Male<input type="radio" name="gender" value="m" required>
     Female <input type="radio" name="gender" value="f" required><br><br>
    Phone : <input type="text" name="phno" required><br><br>
    Age : <input type="text" name="age" required><br><br>
    <input type="submit" >

</form>
</center>
<?php
if($_POST)

{
    
    $sq = "insert into reginfo values('$_POST[ktuid]','$_POST[roll]','$_POST[semester]','$_POST[name]','$_POST[gender]','$_POST[phno]','$_POST[age]')";
    $p = mysqli_query($cn,$sq);

     if($p)
     {
        echo "<script>
        alert('Student registration successfull');
        </script>
        " ;
     }

}

?>

</body>
</html>


