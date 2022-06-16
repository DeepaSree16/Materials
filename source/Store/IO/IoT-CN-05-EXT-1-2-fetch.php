<?php
    $url1=$_SERVER['REQUEST_URI'];
    header("Refresh: 1; URL=$url1");
header("Access-Control-Allow-Origin: *");
header("Content-Type: application/json; charset=UTF-8");


//Creating Array for JSON response
$response = array();
 
// Include data base connect class
$filepath = realpath (dirname(__FILE__));
require_once($filepath."/db_connect.php");

 // Connecting to database 
$db = new DB_CONNECT();
$link = $db->link;	
 
 // Fire SQL query to get all data from led
$result = mysqli_query($link, "SELECT *FROM GPIO_STATUS") or die(mysqli_error($link));
 
// Check for succesfull execution of query and no results found
if (mysqli_num_rows($result) > 0) {
    
	// Storing the returned array in response
    $response["GPIO_STATUS"] = array();
 
	// While loop to store all the returned response in variable
    while ($row = mysqli_fetch_array($result)) {
        // temperoary user array
        $GPIO_STATUS = array();
        $GPIO_STATUS["id"] = $row["id"];
        $GPIO_STATUS["status"] = $row["status"];

		// Push all the items 
        array_push($response["GPIO_STATUS"], $GPIO_STATUS);
    }
    // On success
    $response["success"] = 1;
 
    // Show JSON response
    echo json_encode($response);
}	
else 
{
    // If no data is found
	$response["success"] = 0;
    $response["message"] = "No data on GPIO_STATUS found";
 
    // Show JSON response
    echo json_encode($response);
}
?>