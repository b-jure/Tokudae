/*
** ttrate.h
** Functions for low-level bytecode debugging and tracing
** See Copyright Notice in tokudae.h
*/

#ifndef ttrace_h
#define ttrace_h

#include "tobject.h"

TOKUI_FUNC void tokuTR_tracepc(toku_State *T, SPtr sp, const Proto *fn,
                               const Instruction *pc, int tolevel);
TOKUI_FUNC void tokuTR_disassemble(toku_State *T, const Proto *fn);
TOKUI_FUNC void tokuTR_dumpstack(toku_State *T, int level,
                                 const char *fmt, ...);

#endif
