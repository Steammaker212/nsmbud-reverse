/* sub_60213F10
 * address: 0x60213F10   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213F10(int a1)
{
  float v2; // r1
  float v3; // r2
  Vec3 v5; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 424) = 0;
  v2 = FIELD_F32(a1, 84);
  v3 = FIELD_F32(a1, 88);
  v5.x = FIELD_F32(a1, 80);
  v5.y = v2;
  v5.z = v3;
  EffectData_create(1136, &v5, 0, 0);
  FIELD_U32(a1, 452) = 25;
  FIELD_U32(a1, 456) = 1065353216;
  FIELD_U32(a1, 460) = 1032805417;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  return 25;
}
