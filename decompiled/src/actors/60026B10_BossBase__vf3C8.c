/* BossBase__vf3C8
 * address: 0x60026B10   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600C78A0 : Bowser
int __fastcall BossBase__vf3C8(int a1)
{
  __int16 *v1; // r4
  int v2; // r5

  v1 = (__int16 *)(a1 + 6640);
  v2 = a1 + 6332;
  sub_608134CC(a1 + 6332, "SE_BOSS_CMN_DAMAGE_LAST_F_MODE", FIELD_S16(a1, 6640), 0);
  return sub_608134CC(v2, "SE_BOSS_CMN_DAMAGE_FIRE_LAST", *v1, 0);
}
