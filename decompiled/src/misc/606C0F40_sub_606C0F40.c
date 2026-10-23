/* sub_606C0F40
 * address: 0x606C0F40   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C0F40(int a1)
{
  StateMethodExecuter *result; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s2
  float v7; // s4

  result = (StateMethodExecuter *)sub_606D4BD4(FIELD_U8(a1, 6118));
  if ( result )
  {
    FIELD_U32(a1, 6112) = FIELD_U32(result, 0x8);
    v3 = FIELD_F32(a1, 108) - *(float *)&result[508].owner;
    v4 = FIELD_F32(a1, 112) - *(float *)&result[508].currentState;
    v5 = FIELD_F32(a1, 116) - *(float *)&result[509].vtable;
    FIELD_F32(a1, 6100) = v3;
    FIELD_F32(a1, 6104) = v4;
    FIELD_F32(a1, 6108) = v5;
    v6 = v4 + *(float *)&result[9].owner;
    v7 = v5 + *(float *)&result[9].currentState;
    FIELD_F32(a1, 108) = v3 + *(float *)&result[9].vtable;
    FIELD_F32(a1, 112) = v6;
    FIELD_F32(a1, 116) = v7;
    FIELD_U8(a1, 6116) = BYTE2(result[520].owner);
    FIELD_U8(a1, 6117) = result[517].currentState;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBA92C);
  }
  return result;
}
