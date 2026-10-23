/* sub_605617DC
 * address: 0x605617DC   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605617DC(_DWORD *a1)
{
  char v1; // r12
  __int64 v3; // r2
  _DWORD *v4; // r5
  int i; // r9
  char v6; // r12
  void (__fastcall *v7)(_DWORD *, int *, int *); // r3
  _DWORD *v8; // r5
  char v9; // r12
  void (__fastcall *v10)(_DWORD *, int *, int *); // r3
  int result; // r0
  char v12; // r12
  int (__fastcall *v13)(_DWORD *, int *, int *); // r3
  int v14; // [sp+28h] [bp-30h] BYREF
  int v15; // [sp+2Ch] [bp-2Ch] BYREF
  int v16; // [sp+30h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CAE200[1] & ~(1616254972 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE200[1]) )
  {
    dword_60CAE218 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE21C = (int)"Common";
    _cxa_guard_release(&dword_60CAE200[1]);
  }
  if ( ((unsigned int)&dword_60CAE200[2] & ~(1616255064 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE200[2]) )
  {
    LODWORD(v3) = &sead__SafeStringBase__vtable;
    dword_60CAE2A0[0] = (int)&sead__SafeStringBase__vtable;
    HIDWORD(v3) = "WipeCircle.bflyt";
    dword_60CAE2A4 = (int)"WipeCircle.bflyt";
    dword_60CAE2A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE2AC = (int)"WipeKinoko.bflyt";
    dword_60CAE2B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE2B4 = (int)"WipeKuppa.bflyt";
    dword_60CAE2B8 = (int)&sead__SafeStringBase__vtable;
    unk_60CAE2BC = "WipeMario.bflyt";
    unk_60CAE2C0 = &sead__SafeStringBase__vtable;
    unk_60CAE2C4 = "WipeCircle.bflyt";
    dword_60CAE2C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE2CC = (int)"WipeLuigi.bflyt";
    dword_60CAE2D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE2D4 = (int)"Fade.bflyt";
    dword_60CAE2D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE2DC = (int)"WipeWave.bflyt";
    unk_60CAE2E0 = v3;
    sub_60000288();
    _cxa_guard_release(&dword_60CAE200[2]);
  }
  v4 = a1 + 4;
  for ( i = 0; i != 12; i += 2 )
  {
    sub_604734E4(v4, 0);
    sub_60475C8C((int)v4);
    if ( message_ref(v4, &dword_60CAE2A0[i], 0, 0, 0) == 1 )
    {
      if ( ((unsigned int)&dword_60CAE200[3] & ~(1616255500 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE200[3]) )
      {
        dword_60CAE220 = (int)&sead__SafeStringBase__vtable;
        dword_60CAE224 = dword_60CAE1C4;
        dword_60CAE228 = (int)&sead__SafeStringBase__vtable;
        dword_60CAE22C = dword_60CAE1CC;
        sub_60000288();
        _cxa_guard_release(&dword_60CAE200[3]);
      }
      v7 = *(void (__fastcall **)(_DWORD *, int *, int *))(*v4 + 8);
      v16 = 2;
      v7(v4, &dword_60CAE220, &v16);
    }
    v4 += 887;
  }
  v8 = a1 + 5326;
  sub_604734E4(a1 + 5326, 0);
  sub_60475C8C((int)(a1 + 5326));
  if ( message_ref(a1 + 5326, &dword_60CAE2D0, 0, 0, 0) )
  {
    if ( ((unsigned int)&dword_60CAE200[4] & ~(1616255740 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE200[4]) )
    {
      dword_60CAE230 = (int)&sead__SafeStringBase__vtable;
      dword_60CAE234 = dword_60CAE1F4;
      dword_60CAE238 = (int)&sead__SafeStringBase__vtable;
      dword_60CAE23C = dword_60CAE1FC;
      sub_60000288();
      _cxa_guard_release(&dword_60CAE200[4]);
    }
    v10 = *(void (__fastcall **)(_DWORD *, int *, int *))(*v8 + 8);
    v15 = 2;
    v10(v8, &dword_60CAE230, &v15);
  }
  sub_604734E4(a1 + 6213, 0);
  sub_60475C8C((int)(a1 + 6213));
  result = message_ref(a1 + 6213, &dword_60CAE2D8, 0, 0, 0);
  if ( result == 1 )
  {
    if ( ((unsigned int)&dword_60CAE200[5] & ~(1616256004 << v12) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60CAE200[5]) )
      {
        dword_60CAE240 = (int)&sead__SafeStringBase__vtable;
        dword_60CAE244 = dword_60CAE1D4;
        dword_60CAE248 = (int)&sead__SafeStringBase__vtable;
        dword_60CAE24C = dword_60CAE1DC;
        dword_60CAE250 = (int)&sead__SafeStringBase__vtable;
        dword_60CAE254 = dword_60CAE1E4;
        dword_60CAE258 = (int)&sead__SafeStringBase__vtable;
        dword_60CAE25C = dword_60CAE1EC;
        sub_60000288();
        _cxa_guard_release(&dword_60CAE200[5]);
      }
    }
    v13 = *(int (__fastcall **)(_DWORD *, int *, int *))(a1[6213] + 8);
    v14 = 4;
    return v13(a1 + 6213, &dword_60CAE240, &v14);
  }
  return result;
}
