#!/bin/bash
echo Executing three second camea snapshots. Cheese!!
DATE=$(date +"%Y-%m-%d_%H%M")
echo $DATE
raspistill -tl 2000 -t 10000 -o ../resource/pictures/$DATE%04d.jpg