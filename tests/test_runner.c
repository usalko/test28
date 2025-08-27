#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include "exercises.h"

// Объявления тестовых наборов
extern CU_TestInfo exercise001_tests[];
extern CU_TestInfo exercise002_tests[];

int exercise001_tests_count = 1;
int exercise002_tests_count = 1;

int main() {
    // Инициализация CUnit
    if (CU_initialize_registry() != CUE_SUCCESS) {
        return CU_get_error();
    }

    // Регистрация тестовых наборов

    CU_pSuite p_suite1 = CU_add_suite("1. Print name, DOB, and mobile number", NULL, NULL);
    for (int i = 0; i < exercise001_tests_count; i++) {
        CU_add_test(p_suite1, exercise001_tests[i].pName, exercise001_tests[i].pTestFunc);
    }
        
    CU_pSuite p_suite2 = CU_add_suite("2. Get the C version in use", NULL, NULL);
    for (int i = 0; i < exercise002_tests_count; i++) {
        CU_add_test(p_suite2, exercise002_tests[i].pName, exercise002_tests[i].pTestFunc);
    }

    // CU_register_suites((CU_SuiteInfo[]){
    //     {
    //         .pName = "1. Print name, DOB, and mobile number",
    //         .pInitFunc = NULL,
    //         .pCleanupFunc = NULL,
    //         .pTests = exercise001_tests
    //     },
    //     {
    //         .pName = "2. Get the C version in use",
    //         .pInitFunc = NULL,
    //         .pCleanupFunc = NULL,
    //         .pTests = exercise002_tests
    //     },
    //     CU_SUITE_INFO_NULL
    // });

    // Запуск тестов
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    
    // Очистка
    CU_cleanup_registry();
    return 0;
}