#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include "exercises.h"

// Объявления тестовых наборов
extern CU_TestInfo exercise001_tests[];
extern CU_TestInfo exercise002_tests[];

int main() {
    // Инициализация CUnit
    if (CU_initialize_registry() != CUE_SUCCESS) {
        return CU_get_error();
    }

    // Регистрация тестовых наборов
    CU_ErrorCode error = CU_register_suites((CU_SuiteInfo[]){
        {
            .pName = "1. Print name, DOB, and mobile number",
            .pInitFunc = NULL,
            .pCleanupFunc = NULL,
            .pTests = exercise001_tests
        },
        {
            .pName = "2. Get the C version in use",
            .pInitFunc = NULL,
            .pCleanupFunc = NULL,
            .pTests = exercise002_tests
        },
        CU_SUITE_INFO_NULL
    });

    if (error != CUE_SUCCESS) {
        printf("Ошибка регистрации: %s\n", CU_get_error_msg());
        CU_cleanup_registry();
        return error;
    }

    // Запуск тестов
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    
    // Очистка
    CU_cleanup_registry();
    return 0;
}