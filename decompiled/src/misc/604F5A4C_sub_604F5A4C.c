/* sub_604F5A4C
 * address: 0x604F5A4C   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F5A4C(int a1)
{
  char v1; // r12
  int v3; // r6
  char v4; // r12
  int v6[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CA6C60[2] & ~(1615813228 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[2]) )
  {
    dword_60CA6CF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CF4 = (int)"ItemStock.bflyt";
    dword_60CA6CF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CFC = (int)"ItemStockDL.bflyt";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[2]);
  }
  v3 = FIELD_U8(dword_60CC6D8C, 17);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  v6[1] = (int)&sead__SafeStringBase__vtable;
  v6[2] = (int)"CourseSelect";
  sub_60475C8C(a1 + 40);
  message_ref((_DWORD *)(a1 + 40), &dword_60CA6CE0[2 * v3 + 4], a1 + 7588, 0, 0);
  if ( ((unsigned int)&dword_60CA6C60[3] & ~(1615813488 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[3]) )
  {
    dword_60CA6D90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D94 = dword_60CA67A8;
    dword_60CA6D98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D9C = dword_60CA67B0;
    dword_60CA6DA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DA4 = dword_60CA67B8;
    dword_60CA6DA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DAC = dword_60CA67C0;
    dword_60CA6DB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DB4 = dword_60CA67C8;
    dword_60CA6DB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DBC = dword_60CA67D0;
    dword_60CA6DC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DC4 = dword_60CA67D8;
    dword_60CA6DC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6DCC = dword_60CA67E0;
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[3]);
  }
  v6[0] = 8;
  return sub_60476030(a1 + 40, &dword_60CA6D90, v6);
}
