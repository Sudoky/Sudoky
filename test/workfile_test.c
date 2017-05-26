#include <iostream>

#include "../library/ctest.h"
#include "../src/workfile.cpp"

CTEST(file111, file111_test)
{
    int n=111;
	int expected = 43;
	int result = workfile(n);
	ASSERT_EQUAL (expected, result);
}


CTEST(file112, file112_test)
{
    int n=112;
	int expected = 52;
	int result = workfile(n);
	ASSERT_EQUAL (expected, result);
}


CTEST(file113, file113_test)
{
    int n=113;
	int expected = 49;
	int result = workfile(n);
	ASSERT_EQUAL (expected, result);
}


CTEST(file121, file121_test)
{
    int n=121;
	int expected = 55;
	int result = workfile(n);
	ASSERT_EQUAL (expected, result);
}

CTEST(file122, file122_test)
{
    int n=122;
	int expected = 57;
	int result = workfile(n);
	ASSERT_EQUAL (expected, result);
}
