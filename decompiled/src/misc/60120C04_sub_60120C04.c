/* sub_60120C04
 * address: 0x60120C04   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60120C04(_DWORD *a1)
{
  float *v2; // r0
  float v3; // r1
  Vec3 v5; // [sp+0h] [bp-18h] BYREF

  v2 = (float *)sub_600D1798(a1);
  v3 = *v2;
  v5.y = v2[1];
  v5.x = v3;
  v5.z = 4500.0;
  EffectData_create(1071, &v5, 0, 0);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 812))(a1);
}
