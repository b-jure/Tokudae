#include "tokudae.h"

/* function from lib1.c */
int lib1_export (toku_State *T);

TOKUMOD_API int tokuopen_lib11(toku_State *T) {
    return lib1_export(T);
}
