/* sub_606393C0
 * address: 0x606393C0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606393C0(StateMethodExecuter *result)
{
  __int16 vtable; // r3
  __int16 vtable_high; // r2
  int v3; // r1
  float v4; // s4
  char v5; // r1
  float v6; // s2
  float v7; // s0

  vtable = (__int16)result[585].vtable;
  vtable_high = HIWORD(result[585].vtable);
  if ( (vtable & 1) != 0 && (vtable_high & 1) == 0 && (v3 = FIELD_U32(PlayerMgr_instance, 48)) != 0
    || (vtable & 2) != 0 && (vtable_high & 2) == 0 && (v3 = FIELD_U32(PlayerMgr_instance, 52)) != 0
    || (vtable & 4) != 0 && (vtable_high & 4) == 0 && (v3 = FIELD_U32(PlayerMgr_instance, 56)) != 0
    || (vtable & 8) != 0 && (vtable_high & 8) == 0 && (v3 = FIELD_U32(PlayerMgr_instance, 60)) != 0 )
  {
    v4 = FIELD_F32(v3, 108);
    v5 = 0;
    v6 = *(float *)&result[584].currentState;
    v7 = v4 - *(float *)&FIELD_U32(result + (9) * 12, 0x0);
    if ( v7 >= v6 )
    {
      v5 = 1;
      if ( v7 >= (float)(v6 + v6) )
      {
        v5 = 2;
        if ( v7 >= (float)(v6 + (float)(v6 + v6)) )
          v5 = 3;
      }
    }
    BYTE1(result[585].owner) = v5;
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB54A0);
  }
  return result;
}
