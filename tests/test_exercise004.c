#include <CUnit/Basic.h>
#include "exercises.h"

/**
4. Reverse characters ('X', 'M', 'L')


Write a C program to print the following characters in reverse.

 - Test Characters: 'X', 'M', 'L'
 - Expected Output:
 - The reverse of XML is LMX

 */

void test_exercise004(void)
{
    // Call the function under test
    exercise004('X', 'M', 'L');

}

CU_TestInfo exercise004_tests[] = {
    {"Reverse characters ('X', 'M', 'L') #1", test_exercise004},
    CU_TEST_INFO_NULL};
