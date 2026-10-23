/* FinalBowser__vf15C
 * address: 0x60072664   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600259B8
// 
// Overridden by: None
int __fastcall FinalBowser__vf15C(int a1)
{
  float v2; // r0
  float v3; // r0
  float v5[2]; // [sp+0h] [bp-20h] BYREF
  float v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 7436);
  v6[0] = FIELD_F32(a1, 7432);
  v6[1] = v2;
  koopa_damage_ice_ref(a1, v6, 0);
  v3 = FIELD_F32(a1, 7460);
  v5[0] = FIELD_F32(a1, 7456);
  v5[1] = v3;
  koopa_damage_ice_ref(a1, v5, 0);
  return BossBase__vf15C((BossBase *)a1);
}
