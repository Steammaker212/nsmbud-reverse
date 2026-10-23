/* sub_60012FA4
 * address: 0x60012FA4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60012FA4(int a1, float *a2, int a3)
{
  unsigned int v6; // r0
  unsigned int v7; // r7
  float v8; // s0
  StateMethodExecuter *result; // r0
  float v10; // [sp+8h] [bp-28h] BYREF
  float v11; // [sp+Ch] [bp-24h]

  v6 = sub_607160F4(TileMgr_instance, (int)*a2, (unsigned __int16)(int)(float)-a2[1], FIELD_U8(a1, 141), 1);
  v7 = 33;
  if ( (unsigned __int16)v6 == 1 )
    v7 = BYTE2(v6);
  v8 = *a2;
  v11 = a2[1];
  v10 = v8 + -16.0;
  result = (StateMethodExecuter *)sub_60012280(a1, v7, &v10, a3);
  if ( !result )
  {
    v11 = a2[1] + -16.0;
    result = (StateMethodExecuter *)sub_60012810(a1, v7, &v10, a3);
    if ( !result )
    {
      v10 = *a2;
      result = (StateMethodExecuter *)sub_60011DD4(a1, v7, &v10, a3 ^ 1);
      if ( !result )
        return StateMgr__changeState((StateMgr *)(a1 + 20), &LineFollower_StateID_Fall._);
    }
  }
  return result;
}
