/* sub_601077A4
 * address: 0x601077A4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601077A4(StateMethodExecuter *result)
{
  unsigned int v1; // r1
  unsigned int v2; // r1
  int owner; // r2
  void *v4; // r2

  v1 = result[557].currentState + dword_60C8632C;
  result[557].currentState = v1;
  *(float *)&result[9].vtable = *(float *)&result[9].vtable
                              + (float)((float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
                                              + (float)((float)((float)(v1 & 0xFFFFFF)
                                                              * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                                                      * 0.000000059605))
                                      * 1.5);
  v2 = (unsigned int)result[558].vtable + dword_60C86330;
  result[558].vtable = (void *)v2;
  result[13].currentState = (int)(float)((float)(int)result[558].owner
                                       * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                               + (float)((float)((float)(v2 & 0xFFFFFF)
                                                               * *(float *)((char *)&sinLutTable[1]
                                                                          + ((v2 >> 20) & 0xFF0)))
                                                       * 0.000000059605)));
  owner = (int)result[557].owner;
  if ( owner >= 1 )
  {
    v4 = (void *)(owner - 1);
    result[557].owner = v4;
    if ( !v4 )
      return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C86304);
  }
  return result;
}
