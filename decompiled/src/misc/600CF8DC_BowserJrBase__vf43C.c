/* BowserJrBase__vf43C
 * address: 0x600CF8DC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BowserJrBase__vf43C(int a1, int a2)
{
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1) != 1 )
    return (*(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
             Global_BasicSoundActor1,
             "SE_BOSS_CMN_DAMAGE_FIRE",
             a2,
             0,
             0);
  StageActor__removeActiveColliders(a1);
  (*(void (__fastcall **)(_DWORD, bool, int))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 7244) + 812))(FIELD_U32(a1, 7244));
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
  return (*(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
           Global_BasicSoundActor1,
           "SE_BOSS_CMN_DAMAGE_FIRE_DEF",
           a2,
           0,
           0);
}
