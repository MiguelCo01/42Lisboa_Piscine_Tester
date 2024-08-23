 clear
project_folder="$HOME/Documents/42lisboa/Piscine"
test_folder="$HOME/Documents/42lisboa/Piscine_test"
echo "Start Testing"

exercise=$1
echo
echo "Test Folder: $test_folder/$exercise"
echo "Project Folder: $project_folder/$exercise"
echo

test_files=$(find "$test_folder/$exercise" -type f -name "*.c")
project_files=$(find "$project_folder/$exercise" -type f -name "*.c")

echo "Found Test files: $test_files"
echo "Found Exercise Files: $project_files"
echo 
echo "Compilling.."
echo "cc -Wall -Wextra -Werror -o main $test_files $project_files"
cc -Wall -Wextra -Werror -o main $test_files $project_files
echo "Done Compiling."
echo
echo

echo "Searching Test"
# run main without args
# after run main for each test found
test_number=$(./main)
echo "Found $test_number tests."
echo "-------------------------"
for ((c=0; c<test_number; c++))
do
	echo "Running Test #$c"
	
	result="$(./main $c 2>&1 )"
	exit_code=$?
	if [ $exit_code -eq 139 ];
	then
		echo  "Segmentation Fault"
	else 
		echo  -e "$result"
	fi
	echo
done

echo "---------------------------------------------------------------------"

rm ./main
