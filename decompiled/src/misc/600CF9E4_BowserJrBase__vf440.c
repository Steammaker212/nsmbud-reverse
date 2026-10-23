/* BowserJrBase__vf440
 * address: 0x600CF9E4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BowserJrBase__vf440(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  (*(void (__fastcall **)(_DWORD, bool, int))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 7244) + 816))(FIELD_U32(a1, 7244));
  sub_60813430(a1 + 6332, "SE_BOSS_CMN_DAMAGE_LAST_F_MODE", 0);
  (*(void (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
    Global_BasicSoundActor1,
    "SE_BOSS_CMN_DAMAGE_FIRE_LAST",
    a2,
    0,
    0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
