#!/bin/bash
# Compile the C++ program and run the executable
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <lab_id> <source_file.cpp>"
    exit 1
fi

lab_id=$1
filename=$2

# Define the path for each lab using a case statement
case $lab_id in
  lab1)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session1/lab1"
    ;;
  lab2)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session2/lab2"
    ;;
  lab3)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session3/lab3"
    ;;
  lab4)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session4/lab4"
    ;;
  lab5)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session5/lab5"
    ;;
  lab6)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session6/lab6"
    ;;   
  lab7)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session7/lab7"
    ;;
  lab8)
    path="/home/ornelas/Desktop/Ornelas/mc_ppo/classes/session8/lab8"
    ;;
  *)
    echo "Invalid lab ID provided."
    exit 1
    ;;
esac

# Full path to the source file
full_path="${path}/${filename}"

# Check if the file exists
if [ ! -f "$full_path" ]; then
    echo "File not found: $full_path"
    exit 1
fi

# Extract the filename without the extension
base="${filename%.*}"

# Compile the program and create an executable with the same name
g++ "$full_path" -o "${path}/${base}.out"

# Execute the compiled program
"${path}/${base}.out"

