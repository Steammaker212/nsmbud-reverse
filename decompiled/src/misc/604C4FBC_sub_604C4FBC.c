/* sub_604C4FBC
 * address: 0x604C4FBC   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C4FBC(_DWORD *a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  _DWORD v5[2]; // [sp+8h] [bp-28h] BYREF
  int v6; // [sp+10h] [bp-20h] BYREF
  const char *v7; // [sp+14h] [bp-1Ch]

  v2 = a1 + 12;
  sub_604734E4(a1 + 12, 0);
  sub_60475C8C((int)v2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "CourseSelectScene.bflyt";
  message_ref(v2, &v6, (int)(a1 + 1024), 0, 0);
  v6 = (int)&sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v7 = "Pa_Return_00";
  v5[1] = "Pa_Icon_00";
  sub_6050A704(a1 + 1635, v2, &v6, v5, 1, 0);
  a1[1645] = 2;
  a1[1644] |= 1u;
  Pa_Zanki_ref(a1);
  if ( ((unsigned int)dword_60CA2EF4 & ~(1615614124 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA2EF4) )
  {
    dword_60CA3018 = (int)&sead__SafeStringBase__vtable;
    dword_60CA301C = dword_60CA2AD8;
    dword_60CA3020 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3024 = dword_60CA2AE0;
    dword_60CA3028 = (int)&sead__SafeStringBase__vtable;
    dword_60CA302C = dword_60CA2AE8;
    dword_60CA3030 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3034 = dword_60CA2AF0;
    dword_60CA3038 = (int)&sead__SafeStringBase__vtable;
    dword_60CA303C = dword_60CA2AF8;
    dword_60CA3040 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3044 = dword_60CA2B00;
    sub_60000288();
    _cxa_guard_release(dword_60CA2EF4);
  }
  v6 = 6;
  return sub_60476030((int)v2, &dword_60CA3018, &v6);
}
