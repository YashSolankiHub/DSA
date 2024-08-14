<?php
function linearSearch($array, $key) {
    $index = [];
    // Loop through each element in the array
    for ($i = 0; $i < count($array); $i++) {
        // If the current element matches the key, return the index
        if ($array[$i] == $key) {
            $index[] = $i;
        }
    }
    // If the key is not found, return -1
  if(count($index) == 0)
  {
    return -1;
  }
  else
  {
    return $index;
  }
}

// Example usage
$array = [10, 23,15, 45, 70, 11, 15];
$key = 15;
$result = linearSearch($array, $key);

if($result == -1)
{
  echo "Value not found";
}
else
  {
    echo "The value found at index: ";
    foreach($result as $x ){
      echo $x." ";
    }
    
  }




?>
