/* sub_60101ABC
 * address: 0x60101ABC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60101ABC(float *a1)
{
  float v1; // s16
  float v2; // r4
  float v3; // s0
  Vec3 v5; // [sp+4h] [bp-1Ch] BYREF

  v1 = a1[28];
  v2 = a1[27];
  v3 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 668))(a1);
  v5.x = v2;
  v5.y = v1 - v3;
  v5.z = 4500.0;
  return EffectData_create(1067, &v5, 0, 0);
}
