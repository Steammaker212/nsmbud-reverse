/* sub_60105960
 * address: 0x60105960   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60105960(StateMethodExecuter *result)
{
  unsigned int v1; // r1
  unsigned int v2; // r1
  char *owner; // r2
  char *v4; // r2

  v1 = result[556].currentState + dword_60C86250;
  result[556].currentState = v1;
  *(float *)&FIELD_U32(result + (9) * 12, 0x0) = *(float *)&FIELD_U32(result + (9) * 12, 0x0)
                              + (float)((float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
                                              + (float)((float)((float)(v1 & 0xFFFFFF)
                                                              * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                                                      * 0.000000059605))
                                      * 1.5);
  v2 = (unsigned int)result[557].vtable + dword_60C86254;
  result[557].vtable = (void *)v2;
  FIELD_U32(result + (13) * 12, 0x8) = (int)(float)((float)(int)result[557].owner
                                       * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                               + (float)((float)((float)(v2 & 0xFFFFFF)
                                                               * *(float *)((char *)&sinLutTable[1]
                                                                          + ((v2 >> 20) & 0xFF0)))
                                                       * 0.000000059605)));
  owner = (char *)result[556].owner;
  if ( !owner )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C86210);
  v4 = owner - 1;
  result[556].owner = v4;
  if ( !v4 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C86210);
  return result;
}
