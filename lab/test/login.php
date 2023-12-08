<?php
include 'connect.php';
if($_POST)
{
    $uname=$_POST['uname'];
    $pwd=$_POST['pwd'];
    $sql="select * from info where username='$uname' and password='$pwd'";
    $r1=mysqli_query($cn,$sql);
    if(mysqli_num_rows($r1))
    {
        // $_SESSION['uname']=$uname;
        header("Location:frame.php");
    }
    else
    {
        echo "<script>
        alert('invalid user or password');
        </script>
        " ;
    }
}
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login page</title>

    <center>
    <form action="" method="POST">
        Username : <input type="text" name="uname" required><br><br>
        Password : <input type="password" name="pwd" required><br><br>   
        <input type="submit" name="Login"> 
        <a href="signup.php">not a user</a>
    </form>
</center>



</head>
<body>
    
</body>
</html>
