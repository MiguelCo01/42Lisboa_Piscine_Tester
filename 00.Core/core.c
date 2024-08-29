#ifndef _GNU_SOURCE
	#define _GNU_SOURCE 1
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>                           
#include <unistd.h>

#define TEST(x) { \
	if (mode == TesterMode_Counting)\
	{ \
		test_count++; \
	} \
	else if (test_count == 0) \
	{ \
		x; \
		test_count--; \
	} \
	else \
	{ \
		test_count--; \
	} \
}

#define TEST_ARGS int argc, char ** argv
#define BEGIN_TEST begin_test(argc, argv)
#define END_TEST end_test()

enum TesterMode {
	TesterMode_Unknown,
	TesterMode_Counting,
	TesterMode_Testing
};                 


int test_count = 0;
int test_number = 0;
enum TesterMode mode = TesterMode_Unknown;
int test_status = 0;

void begin_test(int argc, char **argv)
{
	if (argc == 1)
	{
		mode = TesterMode_Counting; // Test Counting Mode	
	}
	else {
		mode = TesterMode_Testing; // Test Run Mode
		test_count = atoi(argv[1]);
		test_number = test_count;
		test_status = 0;
	}
}

void end_test()
{
	if (mode == TesterMode_Counting)
	{
		printf("%d\n", test_count);
	}
	else 
	{
		exit(test_status);
	}
}


void assert_int(int actual, int expected, char *msg)
{
	if (expected != actual)
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "Expected %d. Actual %d\n", expected, actual);
		fflush(stderr);
		test_status = 1;
	}
}

void assert_uint(unsigned int actual, unsigned int expected, char *msg)
{
	if (expected != actual)
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "Expected %u. Actual %u\n", expected, actual);
		fflush(stderr);
		test_status = 1;
	}
}

void assert_str(char *actual, char * expected, char *msg)
{

	if ((actual == NULL && expected != NULL) || (actual != NULL && expected == NULL))
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "E: '%s'\nA: '%s'\n", expected, actual);
		fflush(stderr);
		test_status = 1;

	}
	if (strcmp(expected,  actual))
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "E: '%s'\nA: '%s'\n", expected, actual);
		fflush(stderr);
		test_status = 1;
	}
}


void clean_up(FILE *file, char *name)
{
	if (fclose(file))
	{
		fprintf(stderr, "Cannot close temp file\n");
		fflush(stderr);
		test_status = 2;
	}
	if (remove (name))
	{
		fprintf(stderr, "Cannot remove temp file\n");
		fflush(stderr);
		test_status = 2;
	}
}


void assert_stdout(int fd, char * expected, char *msg, char *filename)
{
	FILE *file;
	char actual[100];

	file = fdopen(fd, "r");
	rewind(file);
	fscanf(file, "%99[^\n]", actual);
	
	if (strcmp(actual, expected) != 0)
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "E: '%s'\nA: '%s'\n", expected, actual);
		fflush(stderr);
		test_status = 1;
	}

	clean_up(file, filename);

}
void redirect_stdout(int *temp, int *std, char *filename)
{
	*temp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0666);
	*std = dup(fileno(stdout));
	dup2(*temp, fileno(stdout));
}

void reset_stdout(int * std)
{
	// dup 2 redirect from std to stdout
	fflush(stdout);
	dup2(*std, fileno(stdout));
	close(*std);
}

#define ASSERT_STDOUT(x, y, z) \
{\
	int file_desc; \
	int copy_out; \
	char *filename; \
	asprintf(&filename, "temp_%d", test_number); \
	redirect_stdout(&file_desc, &copy_out, filename); \
	x; \
	reset_stdout(&copy_out); \
	assert_stdout(file_desc, y, z, filename); \
}

