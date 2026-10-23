/* BossBase__vf3C4
 * address: 0x60026AB0   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600C789C : Bowser
int __fastcall BossBase__vf3C4(__int16 *a1)
{
  __int16 *v2; // r4
  const char *v3; // r1

  v2 = a1 + 3166;
  if ( (*(int (__fastcall **)(__int16 *))(*(_DWORD *)a1 + 728))(a1) == 1 )
    v3 = "SE_BOSS_CMN_DAMAGE_FIRE_DEF";
  else
    v3 = "SE_BOSS_CMN_DAMAGE_FIRE";
  return sub_608134CC(v2, v3, a1[3320], 0);
}
