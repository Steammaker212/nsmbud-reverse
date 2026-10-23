/* sub_601753B4
 * address: 0x601753B4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601753B4(int a1)
{
  float v1; // r1
  float v2; // r2
  Vec3 v4; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 587) = 0;
  v1 = FIELD_F32(a1, 80);
  v2 = FIELD_F32(a1, 84);
  v4.z = FIELD_F32(a1, 88);
  v4.x = v1;
  v4.y = v2;
  return EffectData_create(1138, &v4, 0, 0);
}
