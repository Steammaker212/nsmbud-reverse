/* sub_60175294
 * address: 0x60175294   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60175294(StateMethodExecuter *result)
{
  unsigned int v1; // r1
  float v2; // s0
  int v3; // r1

  v1 = (unsigned int)result[49].vtable + 0x2000000;
  result[49].vtable = (void *)v1;
  v2 = (float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
             + (float)((float)((float)(v1 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 12.0;
  *(float *)&result[49].owner = v2;
  *(float *)&result[7].vtable = *(float *)&result[42].owner + v2;
  v3 = result[51].currentState - 1;
  result[51].currentState = v3;
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&dword_60C88CD8);
  return result;
}
