/* sub_60193DC4
 * address: 0x60193DC4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60193DC4(int a1)
{
  int v2; // r6
  int v3; // r5
  float v4; // r1
  float v5; // r2
  int result; // r0
  int v7; // [sp+0h] [bp-30h]
  _DWORD v8[3]; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v9; // [sp+10h] [bp-20h] BYREF

  v2 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  v3 = dword_60C8996C;
  v7 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v3, 1384) )
  {
    if ( v7 == 82 )
    {
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4), 0);
      FIELD_U32(v2, 24) = -1082130432;
      sub_6041838C((ModelAnimation *)(v2 + 4));
      sub_601E4C88(dword_60C8B13C, 51, a1 + 80, 1);
      v4 = FIELD_F32(a1, 84);
      v5 = FIELD_F32(a1, 88);
      v9.x = FIELD_F32(a1, 80);
      v9.y = v4;
      v9.z = v5;
      v8[0] = 1065353216;
      v8[1] = 1065353216;
      v8[2] = 1065353216;
      EffectData_create(898, &v9, 0, (int)v8);
    }
  }
  if ( v7 == 82 )
  {
    result = FIELD_U8(v2, 28);
    if ( (result & 0x10) == 0 )
      return result;
    FIELD_U8(dword_60CC6D78, 109056) = 1;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
