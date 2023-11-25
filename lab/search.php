<?php
include 'connect.php' ;

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Search bar</title>
</head>
<body>
    <form action="" method="POST">
Search bar : <input type="text" name="val" ><br><br><br>
<input type= "submit">
</form>
</body>
</html>

<?php
if($_POST)
{
    $roll=$_POST['val'];

    $sq="select * from stud where roll_no = $roll ";
    $result = mysqli_query($cn,$sq);

    $num=mysqli_num_rows($result);
    if(!$num)


    {
        echo "<script>
    
    alert(' invalid roll no');
    </script>";


    }

    while($row=mysqli_fetch_assoc($result))
    {
        echo "Name :".$row['name']."<br>";
        echo "Roll no :".$row['roll_no']."<br>";
        echo "Mark : "."<input type = 'text' value='".$row['mark']."' name='mark1'>";
        
    

    }





    {
        echo "<script>
    
    alert(' invalid roll no');
    </script>";


    }

}

?>