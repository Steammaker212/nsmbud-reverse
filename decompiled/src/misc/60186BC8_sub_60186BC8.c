/* sub_60186BC8
 * address: 0x60186BC8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60186BC8(float *a1)
{
  float v1; // s0
  float v2; // s8
  float v3; // s2
  float v4; // s10
  Vec3 v6; // [sp+4h] [bp-14h] BYREF

  v1 = a1[21];
  v2 = a1[86];
  v3 = a1[22];
  v4 = a1[87];
  v6.x = a1[20] + a1[85];
  v6.y = v1 + v2;
  v6.z = v3 + v4;
  return EffectData_create(903, &v6, 0, 0);
}
