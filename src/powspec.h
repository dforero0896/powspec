#ifndef _POWSPEC_H_
#define _POWSPEC_H_


#include "read_cata.h"
#include "multipole.h"

void free_pk_array(double *pk_array);
PK *compute_pk(CATA *cata, bool has_randoms, int argc, char *argv[], bool is_cross, bool* is_auto, int inum);

#endif