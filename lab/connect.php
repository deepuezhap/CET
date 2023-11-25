<?php

$cn = mysqli_connect('localhost','root','','student');

if($cn)
{

    echo "<script>s
    
    alert('successfull conection');
    </script>";
}
else{

    echo "conenction failed";

}


?>