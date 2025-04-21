#include <R.h>

void invoke_r_exit(int code) {
    Rf_error("Exited from Cuba.");
}

