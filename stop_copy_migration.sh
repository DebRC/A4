#!/bin/bash

# bash pre_copy.sh &

current_time=$(date +"%s%3N")
echo "Migration Started At $current_time"

virsh migrate-setmaxdowntime cs695 5000
virsh migrate-setspeed cs695 --bandwidth 10


time virsh migrate --unsafe --verbose cs695 qemu+ssh://pranab@10.96.28.99/system qemu+ssh://debrc@10.130.157.181/system --xml cs695.xml
