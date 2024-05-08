#!/bin/bash

virsh domdirtyrate-calc cs695 $1

sleep $1

virsh domstats cs695 --dirtyrate
