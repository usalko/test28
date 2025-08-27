#include <CUnit/Basic.h>
#include "exercises.h"

/**
2. Get the C version in use

Write a C program to get the C version you are using.
Expected Output:

We are using C18!

 */

void test_exercise002(void)
{

    char version[50];

    // Call the function under test
    exercise002(version);

    // Assert the captured output
    char expected[100];
    sprintf(expected, "We are using %ld", __STDC_VERSION__);
    CU_ASSERT_STRING_EQUAL(version, expected);
}

CU_TestInfo exercise002_tests[] = {
    {"Get the C version in use #1", test_exercise002},
    CU_TEST_INFO_NULL};
