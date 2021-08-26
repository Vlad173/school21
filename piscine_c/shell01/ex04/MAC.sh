#! /bin/sh
ifconfig | grep "ether " | cut -b 1-24 |  sed 's/ether//' | awk '{$1=$1;print}'

