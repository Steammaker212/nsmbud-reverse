/* sub_607ADA14
 * address: 0x607ADA14   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ADA14(int a1)
{
  int result; // r0
  int *v3; // r6
  float v4; // r1
  bool v5; // zf
  float v6; // r1
  bool v7; // zf
  Vec3 v8; // [sp+8h] [bp-30h] BYREF
  Vec3 v9[3]; // [sp+14h] [bp-24h] BYREF

  v3 = (int *)(a1 + 14652);
  result = FIELD_U32(a1, 14652);
  if ( result == 2 )
  {
    v6 = FIELD_F32(a1, 112);
    v9[0].x = FIELD_F32(a1, 108);
    v9[0].y = v6;
    v9[0].z = 3300.0;
    v8.x = FIELD_F32(a1, 12028);
    v8.y = v8.x;
    v8.z = v8.x;
    if ( !sub_60237208(a1 + 14656, v9, 0, &v8) )
    {
      sub_60237560(a1 + 14656);
      *v3 = 0;
    }
LABEL_11:
    result = sub_607BB53C(a1);
    v7 = result == 1;
    if ( result == 1 )
    {
      result = FIELD_U32(a1, 1320);
      v7 = result == 8;
    }
    if ( !v7 )
      return result;
    result = 1;
LABEL_16:
    *v3 = result;
    return result;
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
    goto LABEL_11;
  }
  v4 = FIELD_F32(a1, 112);
  v9[0].x = FIELD_F32(a1, 108);
  v9[0].y = v4;
  v9[0].z = 3300.0;
  v8.x = FIELD_F32(a1, 12028);
  v8.y = v8.x;
  v8.z = v8.x;
  sub_60236EC4(FIELD_S8(a1, 84), (EffectWrapper *)(a1 + 14656), 927, v9, 0, &v8);
  result = sub_607BB53C(a1);
  v5 = result == 1;
  if ( result == 1 )
  {
    result = FIELD_U32(a1, 1320);
    v5 = result == 8;
  }
  if ( !v5 )
  {
    sub_60236074(a1 + 14672);
    result = 2;
    goto LABEL_16;
  }
  return result;
}
