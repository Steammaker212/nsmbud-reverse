/* sub_60048594
 * address: 0x60048594   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60048594(int a1)
{
  int v1; // r0
  float v2; // r1
  Vec3 v4; // [sp+0h] [bp-18h] BYREF

  v1 = sub_600D1798(a1);
  v2 = *(float *)v1;
  v4.y = FIELD_F32(v1, 4);
  v4.x = v2;
  v4.z = 4500.0;
  return EffectData_create(1076, &v4, 0, 0);
}
