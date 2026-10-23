/* sub_60213B14
 * address: 0x60213B14   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60213B14(StateMethodExecuter *result)
{
  unsigned int v1; // r1
  float v2; // s0
  int v3; // r1

  v1 = result[35].currentState + 0x2000000;
  result[35].currentState = v1;
  v2 = (float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
             + (float)((float)((float)(v1 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 12.0;
  *(float *)&result[36].vtable = v2;
  *(float *)&result[7].vtable = *(float *)&result[33].currentState + v2;
  v3 = result[38].currentState - 1;
  result[38].currentState = v3;
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, &stru_60C8D0A4);
  return result;
}
