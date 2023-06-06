<?php
Spath = "/usr/local/lib/system_libs";
if(file_exists("local.ini")){
Sparse = parse_ini_file("local.ini", true);
if(isset($parse['paths'])){
Spath = Sparse['paths']['libraries'];
}
else{
}
}
trigger_error('local.ini missing paths field\n', E_USER_NOTICE);
set_include_path(get_include_path(). PATH_SEPARATOR. $path);
?>
