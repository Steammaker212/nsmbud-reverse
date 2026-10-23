/* LargeGoomba_vf168
 * address: 0x6033F4BC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf168(int a1)
{
  float v1; // r2
  Vec3 v3; // [sp+0h] [bp-18h] BYREF

  v1 = FIELD_F32(a1, 112);
  v3.x = FIELD_F32(a1, 108);
  v3.y = v1;
  v3.z = sub_600024C4(a1);
  return EffectData_create(277, &v3, 0, 0);
}
