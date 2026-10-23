/* BowserJrBase__vf370
 * address: 0x600CEEB0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268D4
// 
// Overridden by: None
int __fastcall BowserJrBase__vf370(int a1)
{
  BossBase__vf2B8();
  sub_60813430(a1 + 6332, "SE_VOC_JR_DAMAGE_LAST", 0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 800))(a1);
}
