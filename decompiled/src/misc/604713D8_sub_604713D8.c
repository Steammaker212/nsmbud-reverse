/* sub_604713D8
 * address: 0x604713D8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604713D8(int a1)
{
  int result; // r0
  _DWORD *v3; // r1
  float v4; // s0
  float v5; // r0
  Vec3 v6[2]; // [sp+4h] [bp-1Ch] BYREF

  v3 = (_DWORD *)(a1 + 6116);
  result = FIELD_U32(a1, 6116);
  *v3 = result + 1;
  if ( result >= 4 )
  {
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_F32(a1, 116);
    v6[0].x = FIELD_F32(a1, 108);
    v6[0].y = v4 + 8.0;
    v6[0].z = v5;
    sub_60022540(dword_60C7F52C, (int)v6, 8u, FIELD_S8(a1, 84), 1);
    result = EffectData_create(573, v6, 0, a1 + 144);
    FIELD_U8(a1, 19) = 1;
  }
  return result;
}
