/* sub_60033EA4
 * address: 0x60033EA4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60033EA4(int a1)
{
  float v2; // r1
  Vec3 v4; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v4.x = FIELD_F32(a1, 108);
  v4.y = v2;
  v4.z = 4500.0;
  EffectData_create(37, &v4, 0, 0);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
