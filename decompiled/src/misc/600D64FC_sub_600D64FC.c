/* sub_600D64FC
 * address: 0x600D64FC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600D64FC(StateMethodExecuter *result)
{
  float v1; // s2
  float v2; // s0

  *(float *)&FIELD_U32(result + (9) * 12, 0x0) = *(float *)&FIELD_U32(result + (9) * 12, 0x0) + *(float *)&FIELD_U32(result + (10) * 12, 0x0);
  v1 = *(float *)&FIELD_U32(result + (9) * 12, 0x4) + *(float *)&FIELD_U32(result + (10) * 12, 0x4);
  *(float *)&FIELD_U32(result + (9) * 12, 0x4) = v1;
  *(float *)&FIELD_U32(result + (9) * 12, 0x8) = *(float *)&FIELD_U32(result + (9) * 12, 0x8) + *(float *)&FIELD_U32(result + (10) * 12, 0x8);
  v2 = *(float *)&FIELD_U32(result + (54) * 12, 0x4);
  if ( v1 >= v2 )
  {
    *(float *)&FIELD_U32(result + (9) * 12, 0x4) = v2;
    return StateMgr__changeState((StateMgr *)&result[557].currentState, (StateBase *)&dword_60C843B8);
  }
  return result;
}
