#include <iostream>

#include "../library/ctest.h"
#include "../src/proverka1.cpp"
#include "../src/provdiag.cpp"

CTEST(for4e4, for4e4_test)
{
    int i=4, j=4;
    char test[9][10]{
            {1,2,3,4,5,6,7,8,9},
            {0,3,0,0,0,0,0,0,0},
            {0,0,2,0,0,0,0,0,0},
            {0,0,0,5,0,4,0,0,0},
            {0,0,0,0,4,0,0,0,0},
            {0,0,0,0,0,1,0,0,0},
            {0,0,0,0,0,0,6,0,0},
            {0,0,0,0,0,0,0,7,0},
            {0,0,0,0,0,0,0,0,0}};
	int expected = 4;
	int result = provdiag (i,j,test)
	ASSERT_EQUAL (expected, result);
}


CTEST(for1e1, for1e1_test)
{
    int i=1, j=1;
        char test[9][10]{
            {1,2,3,4,5,6,7,8,9},
            {0,3,0,0,0,0,0,0,0},
            {0,0,2,0,0,0,0,0,0},
            {0,0,0,5,0,0,0,0,0},
            {0,0,0,0,4,0,0,0,0},
            {0,0,0,0,0,3,0,0,0},
            {0,0,0,0,0,0,6,0,0},
            {0,0,0,0,0,0,0,7,0},
            {0,0,0,0,0,0,0,0,0}};
	int expected = 4;
	int result = provdiag (i,j,test);
	ASSERT_EQUAL (expected, result);
}


CTEST(for2e2, for2e2_test)
{
    int i=2, j=2;
    char test[9][10]{
            {1,2,3,4,5,6,7,8,9},
            {0,3,0,0,0,0,0,0,0},
            {0,0,2,0,0,0,0,0,0},
            {0,0,0,5,0,0,0,0,0},
            {0,0,0,0,4,0,0,0,0},
            {0,0,0,0,0,1,0,0,0},
            {0,0,5,0,0,0,6,0,0},
            {0,2,0,0,0,0,0,7,0},
            {0,0,0,0,0,0,0,0,3}};
	int expected = 15;
	int result = provdiag (i,j,test);
	ASSERT_EQUAL (expected, result);
}

CTEST(for3e5, for3e5_test)
{
    int i=3, j=5;
    char test[9][10]{
            {1,2,3,4,5,6,7,8,9},
            {0,3,0,0,0,2,0,0,0},
            {0,0,2,0,0,0,0,0,0},
            {0,0,0,5,1,8,0,0,0},
            {0,0,0,3,2,7,0,0,0},
            {0,0,0,2,6,1,0,0,0},
            {0,0,5,0,0,0,6,0,0},
            {0,2,0,0,0,0,0,7,0},
            {0,0,0,0,0,0,0,0,3}};
	int expected = 4;
	int result = prov(j,i,test);
	ASSERT_EQUAL (expected, result);
}
CTEST(for8e3, for8e3_test)
{
    int i=8, j=3;
    char test[9][10]{
            {4,6,2,5,9,1,3,8,7},
            {1,3,9,6,8,7,4,2,5},
            {7,5,8,3,4,2,1,9,6},
            {6,9,1,7,3,8,2,5,4},
            {5,2,3,9,6,4,7,1,8},
            {8,7,4,2,1,5,9,6,3},
            {9,8,7,4,2,6,5,3,1},
            {3,1,5,8,7,9,6,4,2},
            {2,4,6,1,5,3,8,7,9}};
	int expected = 15;
	int result = prov(j,i,test);
	ASSERT_EQUAL (expected, result);
}
CTEST(for4e5, for4e5_test)
{
    int i=4, j=5;
    char test[9][10]{
            {1,2,3,4,5,6,7,8,9},
            {0,3,0,5,0,2,0,0,0},
            {0,0,2,3,0,0,0,0,0},
            {0,0,0,5,1,8,0,0,0},
            {0,0,0,3,2,7,0,0,0},
            {0,0,0,2,6,1,0,0,0},
            {0,0,5,0,0,0,6,0,0},
            {0,2,0,0,0,0,0,7,0},
            {0,0,0,0,6,0,0,0,3}};
	int expected = 4;
	int result = prov(j,i,test);
	ASSERT_EQUAL (expected, result);
}
CTEST(for3e6, for3e6_test)
{
    int i=3, j=6;
    char test[9][10]{
            {1,2,3,4,5,6,7,8,9},
            {0,3,0,0,0,2,0,0,0},
            {0,0,2,0,0,0,0,0,0},
            {0,0,0,5,1,8,0,0,0},
            {0,3,0,3,2,7,0,0,0},
            {0,0,9,2,6,1,5,9,0},
            {0,0,5,1,0,0,6,0,1},
            {0,2,0,0,0,0,0,7,0},
            {0,0,0,0,0,0,0,0,3}};
	int expected = 4;
	int result = prov(j,i,test);
	ASSERT_EQUAL (expected, result);
}
