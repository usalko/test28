# Создаем статическую библиотеку из всех исходных файлов
file(GLOB SOURCES "*.c")
add_library(exercises STATIC ${SOURCES})

# Указываем include директории
target_include_directories(exercises PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Устанавливаем выходной каталог
set_target_properties(exercises PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)
