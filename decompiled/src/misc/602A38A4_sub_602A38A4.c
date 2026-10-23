/* sub_602A38A4
 * address: 0x602A38A4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A38A4(int a1, float *a2)
{
  float v2; // r0
  float v3; // r1
  Vec3 v5; // [sp+0h] [bp-18h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v5.x = v2;
  v5.y = v3;
  v5.z = 4500.0;
  return EffectData_create(21, &v5, 0, 0);
}
