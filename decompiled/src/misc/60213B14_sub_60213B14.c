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

  v1 = FIELD_U32(result + (35) * 12, 0x8) + 0x2000000;
  FIELD_U32(result + (35) * 12, 0x8) = v1;
  v2 = (float)(*(float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0))
             + (float)((float)((float)(v1 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v1 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 12.0;
  *(float *)&FIELD_U32(result + (36) * 12, 0x0) = v2;
  *(float *)&FIELD_U32(result + (7) * 12, 0x0) = *(float *)&FIELD_U32(result + (33) * 12, 0x8) + v2;
  v3 = FIELD_U32(result + (38) * 12, 0x8) - 1;
  FIELD_U32(result + (38) * 12, 0x8) = v3;
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (23) * 12, 0x8), &stru_60C8D0A4);
  return result;
}
