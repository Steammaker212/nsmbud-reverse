/* SumoBrosBoss__vf3C0
 * address: 0x600321C0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026A64
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf3C0(__int16 *a1)
{
  sub_608134CC(a1 + 3166, "SE_BOSS_CMN_DAMAGE_LAST_F_MODE", a1[3320], 0);
  return (*(int (__fastcall **)(__int16 *))(*(_DWORD *)a1 + 980))(a1);
}
