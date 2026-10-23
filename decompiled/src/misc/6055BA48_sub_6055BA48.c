/* sub_6055BA48
 * address: 0x6055BA48   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055BA48(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r0
  int (**v6)(); // [sp+8h] [bp-30h] BYREF
  char *v7; // [sp+Ch] [bp-2Ch]
  _DWORD v8[2]; // [sp+10h] [bp-28h] BYREF
  int v9; // [sp+18h] [bp-20h] BYREF
  const char *v10; // [sp+1Ch] [bp-1Ch]

  v2 = a1 + 9;
  sub_604734E4(a1 + 9, 0);
  sub_60475C8C((int)v2);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "VSModeSelect.bflyt";
  message_ref(v2, &v6, (int)(a1 + 912), 0, 0);
  v6 = &sead__SafeStringBase__vtable;
  v9 = (int)&sead__SafeStringBase__vtable;
  v7 = "Pa_ReturnBtn_00";
  v10 = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 1523), (int)v2, &v6, &v9, 1, 0);
  a1[1533] = 2;
  a1[1532] |= 1u;
  v6 = &sead__SafeStringBase__vtable;
  v7 = &byte_60B3BA34;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v3 = InOutR_InOutL_ref(0);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = (const char *)v3;
  sead__SafeStringBase__operator_assign((int)&v6, (int)&v9);
  v4 = InOutR_InOutL_ref(1);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = (const char *)v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v8[0] + 8))(v8, &v9);
  v9 = 2;
  return sub_60476030((int)v2, &v6, &v9);
}
