/* sub_6008C314
 * address: 0x6008C314   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008C314(int a1)
{
  char v2; // r12
  int v3; // r5
  int v5; // r0
  const char *v6; // r1
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  int v9; // r1
  int (**v10)(); // [sp+0h] [bp-18h] BYREF
  const char *v11; // [sp+4h] [bp-14h]

  FIELD_U32(a1, 6300) = 18;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  sub_600CEBC0(a1);
  FIELD_U32(a1, 160) = 0;
  v3 = FIELD_U32(a1, 7244);
  if ( v3 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611187052 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81100) == 1 && FIELD_U8(a1, 7248) )
    {
      if ( sub_60090A40(v3) )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81A6C);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C82060);
    }
  }
  v5 = FIELD_U32(a1, 7100);
  if ( FIELD_U8(a1, 7248) )
  {
    v10 = &sead__SafeStringBase__vtable;
    v6 = "lkpjc_damage_s";
  }
  else
  {
    v10 = &sead__SafeStringBase__vtable;
    v6 = "lkp_damage_s";
  }
  v11 = v6;
  sub_60421AE4(v5, &v10, 1);
  v7 = **(_DWORD ***)(FIELD_U32(a1, 7100) + 28);
  FIELD_U32(a1, 7104) = v7;
  v8 = (_DWORD *)(a1 + 7104);
  v9 = *(v8 - 2);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "damage_s";
  ShuAnim_play(v7, v9, (int)&v10);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v8 + 4), 1);
  *(_DWORD *)(*v8 + 24) = 1065353216;
  *(v8 - 1740) = 1068708659;
  *(v8 - 1739) = 1061997773;
  *(v8 - 1738) = 1065353216;
  v8[131] = -1119040312;
  v8[132] = 1036831950;
  v8[133] = 1028443344;
  *((_WORD *)v8 - 414) = 30;
  return -828;
}
