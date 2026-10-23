/* sub_604BB6B8
 * address: 0x604BB6B8   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BB6B8(int a1)
{
  int v2; // r0
  bool v3; // zf
  char v4; // r12
  char v5; // r12
  char v6; // r12
  int v8[8]; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U32(dword_60C99DD4, 764);
  v3 = v2 == 2;
  if ( v2 != 2 )
    v3 = v2 == 0;
  if ( v3 )
  {
    FIELD_U8(a1, 3640) = 0;
    sub_604734E4((_DWORD *)(a1 + 84), 0);
    sub_60475C8C(a1 + 84);
    v8[0] = (int)&sead__SafeStringBase__vtable;
    v8[1] = (int)"CountDownStart.bflyt";
    message_ref((_DWORD *)(a1 + 84), v8, 0, 0, 0);
    if ( ((unsigned int)dword_60CA26D0 & ~(1615574876 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CA26D0) )
    {
      dword_60CA26DC = (int)&sead__SafeStringBase__vtable;
      dword_60CA26E0 = dword_60CA26BC;
      dword_60CA26E4 = (int)&sead__SafeStringBase__vtable;
      dword_60CA26E8 = dword_60CA26C4;
      sub_60000288();
      _cxa_guard_release(dword_60CA26D0);
    }
    v8[0] = 2;
    sub_60476030(a1 + 84, &dword_60CA26DC, v8);
    if ( ((unsigned int)&dword_60CA26D0[1] & ~(1615575036 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA26D0[1]) )
    {
      dword_60CA26FC = (int)&sead__SafeStringBase__vtable;
      dword_60CA2700 = (int)"N_Text_00";
      dword_60CA2704 = (int)&sead__SafeStringBase__vtable;
      dword_60CA2708 = (int)"N_Count_00";
      dword_60CA270C = (int)&sead__SafeStringBase__vtable;
      dword_60CA2710 = (int)"N_Start_00";
      dword_60CA2714 = (int)&sead__SafeStringBase__vtable;
      dword_60CA2718 = (int)"N_VS_00";
      dword_60CA271C = (int)&sead__SafeStringBase__vtable;
      dword_60CA2720 = (int)"N_MiniGame_00";
      dword_60CA2724 = (int)&sead__SafeStringBase__vtable;
      dword_60CA2728 = (int)"N_Shadow_00";
      sub_60000288();
      _cxa_guard_release(&dword_60CA26D0[1]);
    }
    v8[0] = 6;
    sub_6047518C(a1 + 84, a1 + 24, &dword_60CA26FC, v8);
    if ( ((unsigned int)&dword_60CA26D0[2] & ~(1615575260 << v6) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60CA26D0[2]) )
      {
        dword_60CA26EC = (int)&sead__SafeStringBase__vtable;
        dword_60CA26F0 = (int)"T_Count_00";
        dword_60CA26F4 = (int)&sead__SafeStringBase__vtable;
        dword_60CA26F8 = (int)"T_Start_00";
        sub_60000288();
        _cxa_guard_release(&dword_60CA26D0[2]);
      }
    }
    v8[0] = 2;
    return sub_60475334(a1 + 84, a1 + 16, &dword_60CA26EC, v8);
  }
  else
  {
    FIELD_U8(a1, 3640) = 1;
    return 1;
  }
}
