/* sub_600C6474
 * address: 0x600C6474   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_600C6474(_DWORD *a1, float *a2)
{
  int *result; // r0
  int v5; // r1
  int v6; // t1
  float v7; // r1
  float v8; // r1
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  v6 = a1[1777];
  result = a1 + 1777;
  v5 = v6;
  if ( (v6 & 4) == 0 )
  {
    *result = v5 | 4;
    a1[1934] = *(_DWORD *)a2;
    a1[1935] = *((_DWORD *)a2 + 1);
    v7 = a2[1];
    position.x = *a2;
    position.y = v7;
    position.z = 0.0;
    koopa_damage_ice_ref_2((int)a1, &position.x, 1, 24);
    a1[1792] = 15;
    sub_602F31A0(a1 + 1793, a2, 0);
    sub_602F322C(a1 + 1793, a2, 0, 0);
    v8 = a2[1];
    position.x = *a2;
    position.y = v8;
    mapPositionToScreen(&out, &position);
    return (int *)sub_60813570(a1 + 1583, "SE_OBJ_PNGN_ICE_FREEZE", &out, 0);
  }
  return result;
}
