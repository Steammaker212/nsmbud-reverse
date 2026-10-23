/* sub_60390824
 * address: 0x60390824   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60390824(int a1)
{
  float v1; // r1
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 6332);
  v3.x = FIELD_F32(a1, 6328);
  v3.y = v1;
  v3.z = 4500.0;
  return EffectData_create(878, &v3, 0, 0);
}
