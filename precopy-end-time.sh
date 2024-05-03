#!/bin/bash

while true; do
    # Run the virsh domstate command and capture the output
    output=$(virsh domstate cs695)

    # Check if the output is not "running"
    if [ "$output" != "running" ]; then
        # If output is not "running", print the current time
        current_time=$(date +"%s%3N")
        echo "Pre-Running Stop: $current_time"
        exit 1
    fi
done

