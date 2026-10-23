/* sub_6005A32C
 * address: 0x6005A32C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005A32C(float *a1)
{
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  v2.x = a1[27] + a1[143];
  v2.y = a1[28] + a1[144];
  v2.z = 4500.0;
  return EffectData_create(1200, &v2, 0, 0);
}
