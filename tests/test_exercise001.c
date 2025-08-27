#include <CUnit/Basic.h>
#include "exercises.h"

/**
1. Print name, DOB, and mobile number

Write a C program to print your name, date of birth, and mobile number.
Expected Output:

Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999

 */

void test_exercise001(void)
{
    FILE *temp_stdout;
    char buffer[256]; // Buffer to store captured output

    // Redirect stdout to a temporary file
    temp_stdout = freopen("temp_output.txt", "w+", stdout);
    if (temp_stdout == NULL)
    {
        CU_FAIL("Failed to redirect stdout");
        return;
    }

    // Call the function under test
    exercise001("Vanya", "15.10.1975", "+79531630925");

    // Seek to the beginning of the file and read the content
    fseek(temp_stdout, 0, SEEK_SET);
    fgets(buffer, sizeof(buffer), temp_stdout);

    // Restore stdout
    freopen("/dev/tty", "w", stdout); // Or whatever the original stdout was

    // Assert the captured output
    CU_ASSERT_STRING_EQUAL(buffer, "The value is: 10\n");

    // Clean up the temporary file
    fclose(temp_stdout);
    remove("temp_output.txt");
}

CU_TestInfo exercise001_tests[] = {
    {"Print name, DOB, and mobile number #1", test_exercise001},
    CU_TEST_INFO_NULL};
