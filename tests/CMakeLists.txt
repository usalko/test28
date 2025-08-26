# Поиск CUnit
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
find_package(CUnit REQUIRED)

# Создаем исполняемый файл для тестов
file(GLOB TEST_SOURCES "*.c")
add_executable(test_runner ${TEST_SOURCES})

# Линкуем с нашей библиотекой и CUnit
target_link_libraries(test_runner exercises ${CUNIT_LIBRARIES})

# Указываем include директории
target_include_directories(test_runner PRIVATE 
    ${CMAKE_SOURCE_DIR}/include
    ${CUNIT_INCLUDE_DIRS}
)

# Устанавливаем выходной каталог
set_target_properties(test_runner PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Добавляем цель для запуска тестов
add_custom_target(run_tests
    COMMAND ${CMAKE_BINARY_DIR}/bin/test_runner
    DEPENDS test_runner
    COMMENT "Running tests..."
)
