/* sub_60012E98
 * address: 0x60012E98   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60012E98(int a1, float *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r6
  float v6; // s0
  StateMethodExecuter *result; // r0
  float v8; // [sp+8h] [bp-20h] BYREF
  float v9; // [sp+Ch] [bp-1Ch]

  v4 = sub_607160F4(TileMgr_instance, (int)*a2, (unsigned __int16)(int)(float)-a2[1], FIELD_U8(a1, 141), 1);
  v5 = 33;
  if ( (unsigned __int16)v4 == 1 )
    v5 = BYTE2(v4);
  v6 = *a2;
  v9 = a2[1];
  v8 = v6 + 16.0;
  result = (StateMethodExecuter *)sub_60011DD4(a1, v5, &v8, 0);
  if ( !result )
  {
    v9 = a2[1] + 16.0;
    result = (StateMethodExecuter *)sub_6001185C(a1, v5, &v8, 0);
    if ( !result )
    {
      v8 = *a2;
      result = (StateMethodExecuter *)sub_60012280(a1, v5, &v8, 1);
      if ( !result )
        return StateMgr__changeState((StateMgr *)(a1 + 20), &LineFollower_StateID_Fall._);
    }
  }
  return result;
}
