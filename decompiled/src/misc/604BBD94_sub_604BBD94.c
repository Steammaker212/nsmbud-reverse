/* sub_604BBD94
 * address: 0x604BBD94   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BBD94(int a1)
{
  float *v2; // r0
  float v3; // r1
  float v4; // r2
  float v5; // r0
  Vec3 v7; // [sp+4h] [bp-1Ch] BYREF

  v2 = (float *)sub_60473B4C(a1 + 3340);
  v3 = v2[23];
  v4 = v2[27];
  v5 = v2[31];
  v7.x = v3;
  v7.y = v4;
  v7.z = v5;
  EffectData_create(654, &v7, 0, 0);
  FIELD_U32(a1, 10484) = 0;
  return 10484;
}
