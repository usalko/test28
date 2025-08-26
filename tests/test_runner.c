#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

// Объявления тестовых наборов
extern CU_TestInfo exercise001_tests[];
extern CU_TestInfo exercise002_tests[];

int main() {
    // Инициализация CUnit
    if (CU_initialize_registry() != CUE_SUCCESS) {
        return CU_get_error();
    }

    // Регистрация тестовых наборов
    CU_register_suites((CU_SuiteInfo[]){
        {
            .pName = "exercise001",
            .pInitFunc = NULL,
            .pCleanupFunc = NULL,
            .pTests = exercise001_tests
        },
        CU_SUITE_INFO_NULL
    });

    // Запуск тестов
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    
    // Очистка
    CU_cleanup_registry();
    return 0;
}