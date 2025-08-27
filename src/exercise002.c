#include "exercises.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Get the C version
char* exercise002() {
    char dest[50] = "We are using ";
    char version[6];

    sprintf(version, "%ld", __STDC_VERSION__);
    strcat(dest, version);
    return &dest[0];
}
