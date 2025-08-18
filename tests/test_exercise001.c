#include <CUnit/Basic.h>
#include "../include/exercises.h"

void test_add_numbers(void) {
    CU_ASSERT_EQUAL(add_numbers(2, 3), 5);
    CU_ASSERT_EQUAL(add_numbers(-1, 1), 0);
}

CU_TestInfo exercise001_tests[] = {
    {"test_add_numbers", test_add_numbers},
    CU_TEST_INFO_NULL
};
