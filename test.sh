clear
project_folder=$(pwd)
test_folder=$(dirname $0)
echo "Start Testing"

project=$(basename "$project_folder")
exercises=$1

echo "Project: " $project

 
if [ -z "$exercises" ]
then
	exercises=$(ls $project_folder)
fi

echo "Exercise: " $exercises
echo


for exercise in $exercises
do
	echo "-------------------------"
	echo -n "Running Test #$exercise - "

	if ! [[ -d $test_folder/$project/$exercise ]]
	then
		echo "No Test Folder Found! Maybe you need to create tests for this exercise."
		continue
	fi

	#Searching files
	test_files=$(find "$test_folder/$project/$exercise" -type f -name "*.c")
	project_files=$(find "$project_folder/$exercise" -type f -name "*.c")

	if [ -z $test_files ]
	then
		echo "No Test Files Found"
		continue
	fi

	if [ -z $project_files ]
	then
		echo "No Project Files Found"
		continue
	fi
	
	#Compiling
	compiled=$(cc -Wall -Wextra -Werror -o main $test_files $project_files)
	if [ $? -ne 0 ]
	then
		echo "Not Compiling"
		echo "$compiled"
		continue
	fi
	test_number=$(./main)
	for ((c=0; c<test_number; c++))
	do
		
		errors="$(./main $c 2>&1 > /dev/null)"
		exit_code=$?
		case $exit_code in
			0)
				echo -n "OK "
			;;
			130)
				echo -n "[SEGFAULT] "
			;;
		esac

	done
	echo
	
	rm ./main
done
