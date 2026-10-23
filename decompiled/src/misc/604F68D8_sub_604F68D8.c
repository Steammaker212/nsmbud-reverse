/* sub_604F68D8
 * address: 0x604F68D8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F68D8(int a1)
{
  char v1; // r12
  _DWORD v4[2]; // [sp+4h] [bp-14h] BYREF
  int v5; // [sp+Ch] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA6C60[6] & ~(1615816952 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[6]) )
  {
    dword_60CA6E20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E24 = (int)"Pa_Item_00";
    dword_60CA6E28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E2C = (int)"Pa_Item_01";
    dword_60CA6E30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E34 = (int)"Pa_Item_02";
    dword_60CA6E38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E3C = (int)"Pa_Item_03";
    dword_60CA6E40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E44 = (int)"Pa_Item_04";
    dword_60CA6E48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E4C = (int)"Pa_Item_05";
    dword_60CA6E50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E54 = (int)"Pa_Item_06";
    dword_60CA6E58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E5C = (int)"Pa_Item_07";
    dword_60CA6E60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E64 = (int)"Pa_Item_08";
    dword_60CA6E68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E6C = (int)"Pa_Item_09";
    dword_60CA6E70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E74 = (int)"Pa_NewItem_00";
    dword_60CA6E78 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E7C = (int)"Pa_NewItem_01";
    dword_60CA6E80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E84 = (int)"Pa_NewItem_02";
    dword_60CA6E88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E8C = (int)"Pa_NewItem_03";
    dword_60CA6E90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6E94 = (int)"Pa_NewItem_04";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[6]);
  }
  v5 = 0;
  sub_60502210(a1 + 7548, &v5, 10);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "ItemStock";
  return sead__SafeStringBase__operator_assign(a1 + 8560, (int)v4);
}
