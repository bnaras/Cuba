#include <R.h>

void invoke_r_exit(void) {
    Rf_error("Error invoked from Cuba library");
}

void R_print(char *x) {
  Rprintf("%s\n", x);
}

