/* sub_607ADB50
 * address: 0x607ADB50   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ADB50(int a1)
{
  int result; // r0
  int *v3; // r6
  float v4; // r1
  bool v5; // zf
  float v6; // r1
  int v7; // r0
  bool v8; // zf
  Vec3 v9; // [sp+8h] [bp-30h] BYREF
  Vec3 v10[3]; // [sp+14h] [bp-24h] BYREF

  v3 = (int *)(a1 + 14760);
  result = FIELD_U32(a1, 14760);
  if ( result == 2 )
  {
    v4 = FIELD_F32(a1, 112);
    v10[0].x = FIELD_F32(a1, 108);
    v10[0].y = v4;
    v10[0].z = 3300.0;
    v9.x = FIELD_F32(a1, 12028);
    v9.y = v9.x;
    v9.z = v9.x;
    if ( !sub_60237208(a1 + 14764, v10, 0, &v9) )
    {
      sub_60237560(a1 + 14764);
      *v3 = 0;
    }
    goto LABEL_7;
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
LABEL_7:
    result = sub_607BB53C(a1);
    v5 = result == 1;
    if ( result == 1 )
    {
      result = FIELD_U32(a1, 1320);
      v5 = result == 8;
    }
    if ( v5 )
    {
      result = FIELD_U32(a1, 1208);
      if ( result < 0 )
      {
        result = 1;
LABEL_19:
        *v3 = result;
        return result;
      }
    }
    return result;
  }
  v6 = FIELD_F32(a1, 112);
  v10[0].x = FIELD_F32(a1, 108);
  v10[0].y = v6;
  v10[0].z = 3300.0;
  v9.x = FIELD_F32(a1, 12028);
  v9.y = v9.x;
  v9.z = v9.x;
  sub_60236EC4(FIELD_S8(a1, 84), (EffectWrapper *)(a1 + 14764), 928, v10, 0, &v9);
  v7 = sub_607BB53C(a1);
  v8 = v7 == 1;
  if ( v7 == 1 )
    v8 = FIELD_U32(a1, 1320) == 8;
  if ( !v8 || (result = FIELD_U32(a1, 1208), result >= 0) )
  {
    sub_60236074(a1 + 14780);
    result = 2;
    goto LABEL_19;
  }
  return result;
}
