/* BowserJrBase__vf354
 * address: 0x600CF6B4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026884
// 
// Overridden by: None
int __fastcall BowserJrBase__vf354(int a1)
{
  int v2; // r5

  v2 = a1 + 6332;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  sub_600228F4(dword_60C7F52C, a1 + 108, 6);
  (*(void (__fastcall **)(_DWORD, bool, _DWORD))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    0);
  sub_60813430(v2, "SE_BOSS_CMN_DAMAGE_LAST_F_MODE", 0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
