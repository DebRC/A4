#!/bin/bash

# bash pre_copy.sh &

current_time=$(date +"%s%3N")
echo "Migration Started At $current_time"

virsh migrate-setmaxdowntime cs695 3000
virsh migrate-setspeed cs695 --bandwidth 100

bash pre_copy_end_time.sh & 

time virsh migrate --live --unsafe --verbose cs695 qemu+ssh://abhishekjagushte@10.130.171.146/system
