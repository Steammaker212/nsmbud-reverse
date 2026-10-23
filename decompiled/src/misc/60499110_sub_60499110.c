/* sub_60499110
 * address: 0x60499110   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499110(int *a1)
{
  int *v1; // r5
  _DWORD *v2; // r8
  const char *v3; // r4
  int v4; // t1
  int (**v6)(); // [sp+8h] [bp-88h] BYREF
  int *v7; // [sp+Ch] [bp-84h]
  int v8; // [sp+10h] [bp-80h]
  int v9; // [sp+14h] [bp-7Ch] BYREF
  _DWORD v10[2]; // [sp+5Ch] [bp-34h] BYREF
  int v11; // [sp+64h] [bp-2Ch] BYREF
  const char *v12; // [sp+68h] [bp-28h]

  v1 = a1;
  v2 = a1 + 16;
  sub_604734E4(a1 + 16, 0);
  sub_60475C8C((int)v2);
  v7 = &v9;
  v6 = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
  *(_BYTE *)v7 = 0;
  v6 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA06E0 + 12))(&dword_60CA06E0);
  v3 = (const char *)dword_60CA06E4;
  (*(void (__fastcall **)(int *))(dword_60CA06E8 + 12))(&dword_60CA06E8);
  sub_608FDDF4((int)&v6, "%s.%s", v3, (const char *)dword_60CA06EC);
  message_ref(v2, &v6, (int)(v1 + 922), 0, 0);
  sub_604A435C(v1 + 1432, 0, v1 + 36719, v1 + 36717);
  sub_604A435C(v1 + 6571, 1, v1 + 36719, v1 + 36717);
  sub_604A435C(v1 + 11710, 2, v1 + 36719, v1 + 36717);
  sub_604A435C(v1 + 16849, 3, v1 + 36719, v1 + 36717);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = "Pa_Close_00";
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "Pa_Icon_00";
  sub_6050A704(v1 + 21988, v2, &v11, v10, 1, 0, v6, v7, v8, v9);
  v1[21998] = 2;
  v4 = v1[21997];
  v1 += 21997;
  *v1 = v4 | 1;
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = "Pa_Index_00";
  sub_6050B5E4(v1 + 1795, v2, &v11);
  v11 = 3;
  return sub_60476030((int)v2, &dword_60CA070C, &v11);
}
