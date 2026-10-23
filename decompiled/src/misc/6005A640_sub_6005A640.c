/* sub_6005A640
 * address: 0x6005A640   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005A640(int a1, float a2)
{
  float v2; // s2
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_F32(a1, 112);
  v4.x = FIELD_F32(a1, 108);
  v4.y = v2 + a2;
  v4.z = 4500.0;
  return EffectData_create(1202, &v4, 0, 0);
}
