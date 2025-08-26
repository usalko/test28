cmake_minimum_required(VERSION 3.12)
project(CExercises LANGUAGES C)

# Настройка компилятора
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Использование Ninja как генератора по умолчанию
if(NOT CMAKE_GENERATOR)
    set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "")
endif()

# Включение поддиректорий
add_subdirectory(src)
add_subdirectory(tests)

