<html>
    <title>
        SwLab sem 1
    </title>
    <head>
        <h1>Welcome</h1>
    </head>
</html>
<?php

echo '<a href="http://scis.uohyd.ac.in/~askcs"> Questions</a></br>';

$files = scandir('./');
sort($files); // this does the sorting
foreach($files as $f){
    if($f != "." && $f != ".." && $f != "index.php")
        echo'<a href="./'.$f.'">'.$f.'</a><br>';
}
?>
