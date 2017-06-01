#include <iostream>

#include "../library/ctest.h"
#include "../src/proverka1.cpp"
#include "../src/provdiag.cpp"

//int prov(int j, int i, char test[9][10])
CTEST(file111, file111_test)
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


CTEST(file112, file112_test)
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


CTEST(file113, file113_test)
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
