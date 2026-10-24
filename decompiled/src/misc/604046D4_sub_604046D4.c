/* sub_604046D4
 * address: 0x604046D4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604046D4(StateMethodExecuter *result)
{
  float v1; // s0
  float v2; // s2
  float v3; // s4
  float v4; // s0

  FIELD_U32(result + (40) * 12, 0x0) = (char *)FIELD_U32(result + (40) * 12, 0x0) + (unsigned int)FIELD_U32(result + (223) * 12, 0x4);
  FIELD_U32(result + (36) * 12, 0x8) = 0;
  v1 = *(float *)&FIELD_U32(result + (37) * 12, 0x0) + *(float *)&result[215].owner;
  *(float *)&FIELD_U32(result + (37) * 12, 0x0) = v1;
  v2 = *(float *)&FIELD_U32(result + (214) * 12, 0x8);
  if ( v1 < v2 )
    *(float *)&FIELD_U32(result + (37) * 12, 0x0) = v2;
  FIELD_U32(result + (37) * 12, 0x4) = 0;
  if ( v1 < v2 )
    v1 = v2;
  *(float *)&FIELD_U32(result + (31) * 12, 0x8) = *(float *)&FIELD_U32(result + (31) * 12, 0x8) + 0.0;
  v3 = *(float *)&FIELD_U32(result + (32) * 12, 0x0) + v1;
  *(float *)&FIELD_U32(result + (32) * 12, 0x0) = v3;
  *(float *)&FIELD_U32(result + (32) * 12, 0x4) = *(float *)&FIELD_U32(result + (32) * 12, 0x4) + 0.0;
  v4 = *(float *)&result[213].currentState;
  if ( v3 < v4 )
  {
    *(float *)&FIELD_U32(result + (32) * 12, 0x0) = v4;
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (3) * 12, 0x4), (StateBase *)&dword_60C99F5C);
  }
  return result;
}
