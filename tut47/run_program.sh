#!/bin/bash
make clean
echo "Removing any existing output executable file"
make all

echo "Hello user, running the output executable file from shell script"
echo ""
echo ""

./output