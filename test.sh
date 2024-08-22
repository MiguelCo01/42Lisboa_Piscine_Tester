project_folder="$HOME/Documents/42lisboa/Piscine"
test_folder="$HOME/Documents/42lisboa/Piscine_test"
echo "Start Testing"

read -p "Select Project: "  project
read -p "Select Exercise: " exercise


echo "Test Folder: $test_folder/$project/$exercise"
echo "Project Folder: $project_folder/$project/$exercise"

test_files=$(find "$test_folder/$project/$exercise" -type f -name "*.c")
project_files=$(find "$project_folder/$project/$exercise" -type f -name "*.c")
echo "Found Test files: $test_files"
echo "Found Exercise Files: $project_files"
cc -Wall -Wextra -Werror -o main $test_files $project_files
./main

rm ./main