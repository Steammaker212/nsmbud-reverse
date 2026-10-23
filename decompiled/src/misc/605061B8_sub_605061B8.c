/* sub_605061B8
 * address: 0x605061B8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605061B8(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  char v4; // r12
  unsigned int v8; // r0
  char *v9; // r6
  int v10; // t1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // [sp+0h] [bp-58h] BYREF
  int v16; // [sp+4h] [bp-54h]
  int (**v17)(); // [sp+8h] [bp-50h] BYREF
  char **v18; // [sp+Ch] [bp-4Ch]
  int v19; // [sp+10h] [bp-48h] BYREF
  char *v20; // [sp+14h] [bp-44h] BYREF
  _DWORD v21[2]; // [sp+18h] [bp-40h] BYREF
  _DWORD v22[5]; // [sp+20h] [bp-38h] BYREF
  unsigned int v23; // [sp+34h] [bp-24h]

  v23 = a3;
  if ( ((unsigned int)dword_60CA7A10 & ~(1615880672 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CA7A10) )
  {
    dword_60CA7A30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7A34 = (int)"Pa_BtnTime_0";
    dword_60CA7A38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7A3C = (int)"Pa_BtnCoin_0";
    dword_60CA7A40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7A44 = (int)"Pa_Btn1UP_0";
    dword_60CA7A48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7A4C = (int)"Pa_BtnSpecial_0";
    sub_60000288();
    _cxa_guard_release(dword_60CA7A10);
  }
  sub_604734E4(a1, 0);
  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BD4C20;
  v8 = v23;
  if ( v23 >= 4 )
    v8 = 0;
  v9 = (char *)&dword_60CA7A10[2 * v8];
  v10 = *((_DWORD *)v9 + 8);
  v9 += 32;
  (*(void (__fastcall **)(char *))(v10 + 12))(v9);
  sub_608FDDF4((int)&v17, "%s%d", *((const char **)v9 + 1), a4);
  sub_60476388(a1, a2, &v17);
  v17 = &sead__SafeStringBase__vtable;
  v18 = (char **)&byte_60B3BA34;
  v19 = (int)&sead__SafeStringBase__vtable;
  v20 = &byte_60B3BA34;
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = &byte_60B3BA34;
  v22[0] = &sead__SafeStringBase__vtable;
  v22[1] = &byte_60B3BA34;
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = sub_605067A0(0);
  sead__SafeStringBase__operator_assign((int)&v17, (int)&v15);
  v11 = sub_605067A0(1);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = v11;
  (*(void (__fastcall **)(int *, int *))(v19 + 8))(&v19, &v15);
  v12 = sub_605067A0(2);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = v12;
  (*(void (__fastcall **)(_DWORD *, int *))(v21[0] + 8))(v21, &v15);
  v13 = sub_605067A0(3);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = v13;
  (*(void (__fastcall **)(_DWORD *, int *))(v22[0] + 8))(v22, &v15);
  v15 = 4;
  return sub_60474848((int)a1, &v17, &v15);
}
