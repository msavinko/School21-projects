#!/bin/bash

wall "
	#Architecture: $(uname -a)
	#CPU physical: $(grep 'physical id' /proc/cpuinfo | grep -c 'physical id')
	#vCPU: $(nproc --all)
	#Memory Usage: $(free --mega | awk 'NR==2{printf("%d/%dMB (%.2f%%)"), $3, $2, $3*100/$2}')
	#Disk Usage: $(df --total -m | awk 'NR==14{printf("%d/%.fGb (%d%%)"), $3, $4/1024, $5}')
	#CPU load: $(top -bn1 | grep '^%Cpu' | awk '{printf("%.1f%%"), $1 + $2}')
	#Last boot: $(who -b | awk '{print $3 " " $4 }')
	#LVM use: $(lsblk | grep -c lvm | awk '{if ($1) {print "yes"} else {print "no"}}' )
	#Connextions TCP: $(netstat -an | grep ESTABLISHED | wc -l ) ESTABLISHED
	#User log: $(users | wc -w)
	#Network: IP $(hostname -I)($(ip link | awk 'NR==4{print $2}'))
	#Sudo: $(journalctl _COMM=sudo -q | grep "COMMAND" | wc -l) cmd

"
