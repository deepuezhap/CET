<!DOCTYPE html>
<html lang="en">
<head>
   
    <title>factorial</title>
</head>
<body>
<form action="" method="post">
    <input type="text" name="val" ><br><br>
    <input type="submit" >

</form>
<?php
if($_POST)
{
    $fact=1;
    $n = $_POST['val'];
    for($i =1;$i<=$n;$i++)
        $fact=$fact*$i;

    echo "factorial is :".$fact ;
    

}

?>

</body>
</html>