/* SumoBrosBoss__vf390
 * address: 0x60030590   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026918
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf390(int a1)
{
  float v1; // r1
  Vec3 v3; // [sp+0h] [bp-18h] BYREF

  v1 = FIELD_F32(a1, 108);
  v3.y = FIELD_F32(a1, 112);
  v3.x = v1;
  v3.z = 4500.0;
  v3.y = v3.y + 28.0;
  return EffectData_create(39, &v3, 0, 0);
}
