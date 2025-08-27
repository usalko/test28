#include "exercises.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Get the C version
void exercise002(char *result) {
    sprintf(result, "We are using %ld", __STDC_VERSION__);
}
