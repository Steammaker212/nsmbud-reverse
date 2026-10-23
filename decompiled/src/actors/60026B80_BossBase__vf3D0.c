/* BossBase__vf3D0
 * address: 0x60026B80   size: 32   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60079478 : FinalBowser
//   - 0x600C78A8 : Bowser
int __fastcall BossBase__vf3D0(int a1)
{
  return sub_608134CC(a1 + 6332, "SE_BOSS_CMN_DAMAGE_LAST_F_MODE", FIELD_S16(a1, 6640), 0);
}
