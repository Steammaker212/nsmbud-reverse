/* Pa_Cancel_00_ref
 * address: 0x604F1004   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_Cancel_00_ref(_DWORD *a1)
{
  _DWORD *v2; // r4
  const char *v3; // r0
  char v4; // r12
  _DWORD v6[2]; // [sp+8h] [bp-20h] BYREF
  int v7; // [sp+10h] [bp-18h] BYREF
  const char *v8; // [sp+14h] [bp-14h]

  v2 = a1 + 10630;
  sub_604734E4(a1 + 10630, 0);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = "CourseSelect";
  sub_60475C8C((int)v2);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v7 = (int)&sead__SafeStringBase__vtable;
    v3 = "ItemListDL.bflyt";
  }
  else
  {
    v7 = (int)&sead__SafeStringBase__vtable;
    v3 = "ItemList.bflyt";
  }
  v8 = v3;
  message_ref(v2, &v7, (int)(a1 + 11532), (int)(a1 + 12042), 0);
  v7 = (int)&sead__SafeStringBase__vtable;
  v6[0] = &sead__SafeStringBase__vtable;
  v8 = "Pa_Cancel_00";
  v6[1] = "Pa_Icon_00";
  sub_6050A704(a1 + 12227, a1 + 10630, &v7, v6, 1, 0);
  a1[12237] = 2;
  a1[12236] |= 1u;
  if ( ((unsigned int)dword_60CA6580 & ~(1615794504 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CA6580) )
  {
    dword_60CA65E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65E4 = dword_60CA62E8;
    dword_60CA65E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65EC = dword_60CA62F0;
    dword_60CA65F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65F4 = dword_60CA62F8;
    dword_60CA65F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65FC = dword_60CA6300;
    dword_60CA6600 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6604 = dword_60CA6308;
    sub_60000288();
    _cxa_guard_release(dword_60CA6580);
  }
  v7 = 5;
  return sub_60476030((int)v2, &dword_60CA65E0, &v7);
}
