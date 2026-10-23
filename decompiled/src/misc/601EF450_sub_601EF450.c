/* sub_601EF450
 * address: 0x601EF450   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EF450(int a1)
{
  float *v2; // r5
  float v3; // r0
  Vec3 v5; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v6; // [sp+10h] [bp-20h] BYREF

  v2 = (float *)(a1 + 80);
  FIELD_U32(a1, 316) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 320) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 324) = FIELD_U32(a1, 88);
  FIELD_U32(a1, 412) = sub_608332B0(a1 + 80, a1 + 328);
  v3 = FIELD_F32(a1, 84);
  v6.z = FIELD_F32(a1, 88);
  v6.y = v3;
  v6.x = *v2;
  v5.x = 1.0;
  v5.y = 1.0;
  v5.z = 1.0;
  sub_602375C4((EffectData *)(a1 + 432), 883, &v6, 0, &v5);
  return sub_601ECD14(a1, 2);
}
