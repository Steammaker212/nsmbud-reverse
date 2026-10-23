/* sub_6062EF48
 * address: 0x6062EF48   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6062EF48(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5
  int v6; // r1
  void (__fastcall *v7)(int, const char *, int, int, _DWORD); // r5

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60CB3FC8 & ~(1617096552 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CB3FC8) )
  {
    dword_60CB3FC4 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CB3FC8);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB3FC4) == 1 )
  {
    v6 = FIELD_U32(v4, 6240);
    v7 = *(void (__fastcall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 40);
    if ( v6 < 3 )
      v7(Global_BasicSoundActor2, "SE_BOSS_KOOPA_FIRE_DISAPP2", a3, 1, 0);
    else
      v7(Global_BasicSoundActor2, "SE_BOSS_KOOPA_L_FIRE_DISAPP2", a3, 1, 0);
  }
}
