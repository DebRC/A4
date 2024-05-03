#!/bin/bash

prev_time=$(date +"%s%3N")
while true; do
    current_time=$(date +"%s%3N")
    # echo $current_time
    time_diff=$((10#$current_time - 10#$prev_time))  # Specify base 10 explicitly
    
    if [ $time_diff -gt 15 ]; then
    	echo "Time gap detected: $prev_time ->  $current_time (Gap: $time_diff milliseconds)"
    fi
    # echo "$time_diff"
    prev_time=$current_time  # Update the previous time
    sleep 0.001
done

