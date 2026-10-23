/* sub_60116388
 * address: 0x60116388   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60116388(int *a1, int a2)
{
  char v4; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int (__fastcall *v6)(int, const char *, int, _DWORD, _DWORD); // r6

  if ( (*(int (__fastcall **)(int *))(*a1 + 728))(a1) != 1 )
    return (*(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40))(
             Global_BasicSoundActor1,
             "SE_BOSS_CMN_DAMAGE_FIRE",
             a2,
             0,
             0);
  v5 = (int (__fastcall ***)(_DWORD, int *))a1[1811];
  if ( ((unsigned int)&dword_60C86B30 & ~(1611752392 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v5 && (**v5)(v5, &dword_60C86B2C) == 1 )
    sub_60120AF8(v5, a2);
  v6 = *(int (__fastcall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40);
  if ( a1[1575] < 1 )
    return v6(Global_BasicSoundActor1, "SE_BOSS_CMN_DAMAGE_FIRE_LAST", a2, 0, 0);
  else
    return v6(Global_BasicSoundActor1, "SE_BOSS_CMN_DAMAGE_FIRE_DEF", a2, 0, 0);
}
