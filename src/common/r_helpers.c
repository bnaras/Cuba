#include <R.h>

void invoke_r_exit(void) {
    Rf_error("Error invoked from Cuba library");
}

