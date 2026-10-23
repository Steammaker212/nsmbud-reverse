/* Pa_ReturnBtn_00_ref
 * address: 0x60514CD8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_ReturnBtn_00_ref(_DWORD *a1)
{
  _DWORD *v2; // r9
  const char *v3; // r4
  int (**v5)(); // [sp+Ch] [bp-84h] BYREF
  int *v6; // [sp+10h] [bp-80h]
  int v7; // [sp+14h] [bp-7Ch]
  int v8; // [sp+18h] [bp-78h] BYREF
  _DWORD v9[2]; // [sp+60h] [bp-30h] BYREF
  int v10[10]; // [sp+68h] [bp-28h] BYREF

  v2 = a1 + 12;
  sub_604734E4(a1 + 12, 0);
  sub_60475C8C((int)v2);
  v6 = &v8;
  v5 = &BufferedSafeStringBase_char_vtable_probably;
  v7 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v5);
  *(_BYTE *)v6 = 0;
  v5 = &off_60BFD5C8;
  v3 = (const char *)(*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  (*(void (__fastcall **)(int *))(dword_60CA8684 + 12))(&dword_60CA8684);
  sub_608FDDF4((int)&v5, "%s.%s", v3, (const char *)dword_60CA8688);
  message_ref(v2, &v5, (int)(a1 + 909), 0, 0);
  v10[0] = (int)&sead__SafeStringBase__vtable;
  v9[0] = &sead__SafeStringBase__vtable;
  v10[1] = (int)"Pa_ReturnBtn_00";
  v9[1] = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 1419), (int)v2, v10, v9, 1, 0);
  a1[1429] = 2;
  a1[1428] |= 1u;
  v10[0] = 2;
  return sub_60476030((int)v2, &dword_60CA8694, v10);
}
