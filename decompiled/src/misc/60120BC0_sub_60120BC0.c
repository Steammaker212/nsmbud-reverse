/* sub_60120BC0
 * address: 0x60120BC0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60120BC0(_DWORD *a1)
{
  float *v1; // r0
  float v2; // r1
  Vec3 v4; // [sp+0h] [bp-18h] BYREF

  v1 = (float *)sub_600D1798(a1);
  v2 = *v1;
  v4.y = v1[1];
  v4.x = v2;
  v4.z = 4500.0;
  return EffectData_create(1070, &v4, 0, 0);
}
