/* sub_604FF028
 * address: 0x604FF028   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FF028(_DWORD *a1)
{
  _DWORD *v2; // r4
  const char *v3; // r7
  char v4; // r12
  int (**v6)(); // [sp+Ch] [bp-84h] BYREF
  int *v7; // [sp+10h] [bp-80h]
  int v8; // [sp+14h] [bp-7Ch]
  int v9; // [sp+18h] [bp-78h] BYREF
  _DWORD v10[2]; // [sp+60h] [bp-30h] BYREF
  int v11[10]; // [sp+68h] [bp-28h] BYREF

  v2 = a1 + 535;
  sub_604734E4(a1 + 535, 0);
  sub_60475C8C((int)v2);
  v7 = &v9;
  v6 = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
  *(_BYTE *)v7 = 0;
  v6 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA7408 + 12))(&dword_60CA7408);
  v3 = (const char *)dword_60CA740C;
  (*(void (__fastcall **)(int *))(dword_60CA7410 + 12))(&dword_60CA7410);
  sub_608FDDF4((int)&v6, "%s.%s", v3, (const char *)dword_60CA7414);
  message_ref(v2, &v6, (int)(a1 + 24), 0, 0);
  v11[0] = (int)&sead__SafeStringBase__vtable;
  v10[0] = &sead__SafeStringBase__vtable;
  v11[1] = (int)"Pa_Close_00";
  v10[1] = "Pa_Icon_00";
  sub_6050A704(a1 + 1930, v2, v11, v10, 1, 0);
  a1[1940] = 2;
  a1[1939] |= 1u;
  if ( ((unsigned int)dword_60CA73F4 & ~(1615851904 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CA73F4) )
  {
    dword_60CA7448 = (int)&sead__SafeStringBase__vtable;
    dword_60CA744C = dword_60CA741C;
    dword_60CA7450 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7454 = dword_60CA7424;
    sub_60000288();
    _cxa_guard_release(dword_60CA73F4);
  }
  v11[0] = 2;
  return sub_60476030((int)v2, &dword_60CA7448, v11);
}
