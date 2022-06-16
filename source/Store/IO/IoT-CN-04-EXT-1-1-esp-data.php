<!DOCTYPE html>
<html><body>
   <head>
    <title>Data Table</title>
    <meta http-equiv="refresh" content="5">
    <h2>IoT Data Cloud: Live data collection to the Server.</h2>
    <h3> <a href="https://iiit-h.talentsprint.com/iot/">©2022 IIITH & NSE TalentSprint</a></h3>
    </head> 
    
<?php
/*
  comment
*/

$servername = "localhost";

// REPLACE with your Database name
$dbname = "id18323401_bme280_sensor";
// REPLACE with Database user
$username = "id18323401_sensor_readings";
// REPLACE with Database user password
$password = "Omz?jW$+@LOT11FC";
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$sql = "SELECT id, sensor,reading_time , location, Temp, Humi, Pres FROM SensorData ORDER BY id DESC";

echo '<table cellspacing="5" cellpadding="5">
      <tr> 
        <td>ID</td> 
        <td>Sensor</td> 
        <td>Timestamp</td>
        <td>Location</td> 
        <td>Temp</td> 
        <td>Hum</td>
        <td>Pressure</td> 
         
      </tr>';
 
if ($result = $conn->query($sql)) {
    while ($row = $result->fetch_assoc()) {
        $row_id = $row["id"];
        $row_sensor = $row["sensor"];
        $row_reading_time = $row["reading_time"];
        $row_location = $row["location"];
        $row_Temp = $row["Temp"];
        $row_Hum = $row["Humi"]; 
        $row_Pres = $row["Pres"]; 
        
        
        // Uncomment to set timezone to + h hours (you can change 4 to any number)
        $row_reading_time = date("Y-m-d H:i:s", strtotime("$row_reading_time + 330 minutes"));
       
        echo '<tr> 
                <td>' . $row_id . '</td> 
                <td>' . $row_sensor . '</td> 
                <td>' . $row_reading_time . '</td> 
                <td>' . $row_location . '</td> 
                <td>' . $row_Temp . '</td> 
                <td>' . $row_Hum . '</td>
                <td>' . $row_Pres . '</td> 
                
              </tr>';
    }
    $result->free();
}
echo "</table>";
$conn->close();

?> 

</body>
</html>