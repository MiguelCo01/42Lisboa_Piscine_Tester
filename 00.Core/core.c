#include <stdlib.h>

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
	}
}

void end_test()
{
	if (mode == TesterMode_Counting)
	{
		printf("%d\n", test_count);
	}
}
