/* sub_60102730
 * address: 0x60102730   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60102730(int *a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int result; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 1576;
  (*(void (__fastcall **)(int *, int))(*a1 + 780))(a1, 3);
  v3 = *v2;
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "jc_damage_up";
  sub_60421AE4(v3, v7, 0);
  v4 = (*(int (__fastcall **)(int *))(*a1 + 628))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611671472 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81764) == 1 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)v4 + 192))(v4, &unk_60C841B4);
  result = sub_60813430(a1 + 1752, "SE_BOSS_JR_CROWN_FUKKATSU", 0);
  a1[39] = 0;
  a1[40] = 0;
  a1[41] = 0;
  return result;
}
