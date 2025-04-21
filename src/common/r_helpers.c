#include <R.h>

void invoke_r_exit(const char *str) {
    Rf_error(str);
}

