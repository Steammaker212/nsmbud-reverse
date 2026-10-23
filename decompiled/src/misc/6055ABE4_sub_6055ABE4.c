/* sub_6055ABE4
 * address: 0x6055ABE4   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055ABE4(_DWORD *a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  int *v4; // r1
  char v5; // r12
  char v6; // r12
  int v7; // r5
  int v9; // [sp+8h] [bp-28h] BYREF
  const char *v10; // [sp+Ch] [bp-24h]

  v2 = a1 + 10;
  sub_604734E4(a1 + 10, 0);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = "Title";
  sub_60475C8C((int)v2);
  if ( FIELD_U8(dword_60CC6D8C, 16) )
  {
    v9 = (int)&sead__SafeStringBase__vtable;
    v10 = "TitleMarioPlusLuigi.bflyt";
    message_ref(v2, &v9, 0, 0, 0);
    if ( ((unsigned int)dword_60CADB90 & ~(1616227468 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CADB90) )
    {
      dword_60CADBB4 = (int)&sead__SafeStringBase__vtable;
      dword_60CADBB8 = dword_60CADA50;
      dword_60CADBBC = (int)&sead__SafeStringBase__vtable;
      dword_60CADBC0 = dword_60CADA58;
      dword_60CADBC4 = (int)&sead__SafeStringBase__vtable;
      dword_60CADBC8 = dword_60CADA60;
      dword_60CADBCC = (int)&sead__SafeStringBase__vtable;
      dword_60CADBD0 = dword_60CADA68;
      sub_60000288();
      _cxa_guard_release(dword_60CADB90);
    }
    v9 = 4;
    v4 = &dword_60CADBB4;
  }
  else
  {
    v9 = (int)&sead__SafeStringBase__vtable;
    v10 = "Title.bflyt";
    message_ref(v2, &v9, 0, 0, 0);
    if ( ((unsigned int)&dword_60CADB90[1] & ~(1616227720 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CADB90[1]) )
    {
      dword_60CADBD4 = (int)&sead__SafeStringBase__vtable;
      dword_60CADBD8 = dword_60CADA50;
      dword_60CADBDC = (int)&sead__SafeStringBase__vtable;
      dword_60CADBE0 = dword_60CADA58;
      dword_60CADBE4 = (int)&sead__SafeStringBase__vtable;
      dword_60CADBE8 = dword_60CADA60;
      dword_60CADBEC = (int)&sead__SafeStringBase__vtable;
      dword_60CADBF0 = dword_60CADA68;
      sub_60000288();
      _cxa_guard_release(&dword_60CADB90[1]);
    }
    v9 = 4;
    v4 = &dword_60CADBD4;
  }
  sub_60476030((int)v2, v4, &v9);
  if ( ((unsigned int)&dword_60CADB90[2] & ~(1616227932 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CADB90[2]) )
  {
    dword_60CADB9C = (int)&sead__SafeStringBase__vtable;
    dword_60CADBA0 = (int)"T_TitleSh_00";
    dword_60CADBA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CADBA8 = (int)"T_Title_00";
    dword_60CADBAC = (int)&sead__SafeStringBase__vtable;
    dword_60CADBB0 = (int)"T_Ver_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CADB90[2]);
  }
  v9 = 3;
  sub_60475334((int)v2, (int)(a1 + 1003), &dword_60CADB9C, &v9);
  v7 = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 20) = 1;
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = "Title_Title_00";
  sub_6047E0EC(&v9, a1[1003], 0);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = "Title_Title_00";
  sub_6047E0EC(&v9, a1[1004], 0);
  FIELD_U8(v7, 20) = 1;
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = "Title_Ver_00";
  sub_6047E0EC(&v9, a1[1005], 3, 1, 0, 0);
  *(_BYTE *)(a1[1005] + 64) &= ~1u;
  return sub_6045BF58((int)(a1 + 902), 0);
}
