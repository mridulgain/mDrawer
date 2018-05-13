<!DOCTYPE html>
<html>

	<head>
		<meta charset="utf-8">
		<title>SwLab</title>
		<link rel="stylesheet" href="design.css">
	</head>
	
	<body>
		<!header>
		<div class = header>
			<h1>Software lab assignments</h1>
		</div>
		<!main>
		<div class = main>
		
			<div class = main-intro>
				<p>Hello world</p>
				<p>Let's code</p>
			</div>
			<div class = main-content>
				<a href="http://scis.uohyd.ac.in/~askcs"> Questions</a>
				<ul>
					<?php
					$files = scandir('./data');//listing dir content
					sort($files); // this does the sorting
					//show all folders & files
					foreach($files as $f){
    					if($f{0} != "."  && $f{-4} != "." )//except
        					echo'<li><a href="./'.$f.'">'.$f.'</a></li>';
					}
					?>
				</ul>
			</div>
		</div>
		<!footer>	
		<div class = footer>
			<div class=footer-intro>
				MCA
			</div>
			<div class=footer-content>
				<ul>
					<li>Author : <span>noBody</span></li>
					<li>all rights are not reserved</li>
					<li>contents are provided with absolutely no guarantee</li>
				</ul>
			</div>
		</div>
	</body> 
</html>
