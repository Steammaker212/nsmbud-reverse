/* sub_603BF7A4
 * address: 0x603BF7A4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BF7A4(int a1)
{
  float v1; // r1
  float v2; // r0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 108);
  v2 = FIELD_F32(a1, 112);
  v4.x = v1;
  v4.y = v2;
  v4.z = 4500.0;
  return EffectData_create(15, &v4, 0, 0);
}
