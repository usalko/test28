# FindCUnit.cmake
find_path(CUNIT_INCLUDE_DIR
    NAMES CUnit/CUnit.h
    PATHS /usr/include /usr/local/include
)

find_library(CUNIT_LIBRARY
    NAMES cunit
    PATHS /usr/lib /usr/local/lib /usr/lib/x86_64-linux-gnu
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(CUnit DEFAULT_MSG
    CUNIT_LIBRARY CUNIT_INCLUDE_DIR)

if(CUNIT_FOUND)
    set(CUNIT_LIBRARIES ${CUNIT_LIBRARY})
    set(CUNIT_INCLUDE_DIRS ${CUNIT_INCLUDE_DIR})
endif()

mark_as_advanced(CUNIT_INCLUDE_DIR CUNIT_LIBRARY)