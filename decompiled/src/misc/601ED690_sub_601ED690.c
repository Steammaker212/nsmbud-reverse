/* sub_601ED690
 * address: 0x601ED690   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ED690(int a1)
{
  float v2; // r1
  float v3; // r2
  Vec3 v5; // [sp+4h] [bp-24h] BYREF
  Vec3 v6; // [sp+10h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 84);
  v3 = FIELD_F32(a1, 88);
  v6.x = FIELD_F32(a1, 80);
  v6.y = v2;
  v6.z = v3;
  v5.x = 1.0;
  v5.y = 1.0;
  v5.z = 1.0;
  sub_602375C4((EffectData *)(a1 + 432), 883, &v6, 0, &v5);
  FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
  return sub_601ECD14(a1, 2);
}
