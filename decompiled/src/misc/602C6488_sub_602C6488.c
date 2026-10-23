/* sub_602C6488
 * address: 0x602C6488   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C6488(int a1)
{
  float v1; // s0
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 112);
  v3.x = FIELD_F32(a1, 108);
  v3.y = v1 + -16.0;
  v3.z = 4500.0;
  return EffectData_create(873, &v3, 0, a1 + 144);
}
