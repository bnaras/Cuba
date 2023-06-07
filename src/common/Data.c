/*
	Data.c
		initialized data for Cuba
		by Thomas Hahn
		last modified 30 Oct 20 th
*/


#include "stddecl.h"

/* Commented out for gcc 10.0 -fno-common default */
/* coreinit cubafun_; */

int cubaverb_ = uninitialized;

#ifdef HAVE_FORK
corespec cubaworkers_ = {
  uninitialized, uninitialized, 
  uninitialized, uninitialized };
#endif

