#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
enum TesterMode mode = TesterMode_Unknown;


void begin_test(int argc, char **argv)
{
	if (argc == 1)
	{
		mode = TesterMode_Counting; // Test Counting Mode	
	}
	else {
		mode = TesterMode_Testing; // Test Run Mode
		test_count = atoi(argv[1]);
		printf("Tsting %d\n", test_count);
	}
}

void end_test()
{
	if (mode == TesterMode_Counting)
	{
		printf("%d\n", test_count);
	}
}


void assert_int(int actual, int expected, char *msg)
{
	if (expected != actual)
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "Expected %d. Actual %d\n", expected, actual);
		fflush(stderr);
		exit (1);
	}
}

void assert_uint(unsigned int actual, unsigned int expected, char *msg)
{
	if (expected != actual)
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "Expected %u. Actual %u\n", expected, actual);
		fflush(stderr);
		exit (1);
	}
}

void assert_str(char *actual, char * expected, char *msg)
{
	if (actual == NULL && expected == NULL)
	{
		exit(0);
	}

	if ((actual == NULL && expected != NULL) || (actual != NULL && expected == NULL))
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "E: '%s'\nA: '%s'\n", expected, actual);
		fflush(stderr);
		exit (1);

	}
	if (strcmp(expected,  actual))
	{
		fprintf(stderr, "Testing for: %s\n", msg);
		fprintf(stderr, "E: '%s'\nA: '%s'\n", expected, actual);
		fflush(stderr);
		exit (1);
	}
}
