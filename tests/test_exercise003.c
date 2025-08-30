#include <CUnit/Basic.h>
#include "exercises.h"

/**
3. Print block 'F' and a large 'C'

Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
Expected Output:

######
#
#
#####
#
#
#
    ######
  ##      ##
 #
 #
 #
 #
 #
  ##      ##
    ######

 */

void test_exercise003(void)
{

    char version[50];

    // Call the function under test
    exercise003();

}

CU_TestInfo exercise003_tests[] = {
    {"Print block 'F' and a large 'C' #1", test_exercise003},
    CU_TEST_INFO_NULL};
