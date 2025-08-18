#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

// Объявления тестовых наборов из разных файлов
extern CU_TestInfo exercise001_tests[];
extern CU_TestInfo exercise002_tests[];

int main() {
    CU_initialize_registry();
    
    // Регистрация тестовых наборов
    CU_register_suites((CU_SuiteInfo[]){
        {"exercise001", NULL, NULL, exercise001_tests},
        {"exercise002", NULL, NULL, exercise002_tests},
        CU_SUITE_INFO_NULL
    });
    
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
