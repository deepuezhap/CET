<?php
include 'connect.php';
if($_POST)
{
    
    $fname=$_POST['fname'];
    $lname=$_POST['lname'];
    $email=$_POST['email'];
    $uname=$_POST['uname'];
    $pwd=$_POST['pwd'];
    
    $sql2="select * from info where username='$uname'";
    $r=mysqli_query($cn,$sql2);
    if(mysqli_num_rows($r))
    {
        echo "<script>
        alert('Username already exists');
        </script>
        " ;


    }
    else{
        $sq ="insert into info values('$fname','$lname','$email','$uname','$pwd')";
        $p=mysqli_query($cn,$sq);

    

    if($p)
     {
        echo "<script>
        alert('insertion successfull');
        </script>
        " ;
     }

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
        First Name :  <input type="text" name="fname" required><br><br>
        Last Name :  <input type="text" name="lname" required><br><br>
        email :  <input type="email" name="email" required><br><br>
        Username : <input type="text" name="uname" required><br><br>
        Password : <input type="password" name="pwd" required><br><br>  
        <input type="submit" value="Signup"> <a href="login.php">Login</a>

    </form>
</center>



</head>
<body>
    
</body>
</html>
