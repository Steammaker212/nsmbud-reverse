/* sub_60346740
 * address: 0x60346740   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60346740(float *a1)
{
  float v1; // s0
  float v2; // s4
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v4.x = a1[27] + a1[143];
  v1 = a1[28];
  v2 = a1[144];
  v4.z = a1[29] + a1[145];
  v4.y = a1[1770] + (float)(v1 + v2);
  return EffectData_create(641, &v4, 0, 0);
}
