/* sub_604AB640
 * address: 0x604AB640   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AB640(_DWORD *a1)
{
  _DWORD *v2; // r4
  const char *v3; // r6
  int (**v5)(); // [sp+Ch] [bp-84h] BYREF
  int *v6; // [sp+10h] [bp-80h]
  int v7; // [sp+14h] [bp-7Ch]
  int v8; // [sp+18h] [bp-78h] BYREF
  _DWORD v9[2]; // [sp+60h] [bp-30h] BYREF
  int v10[10]; // [sp+68h] [bp-28h] BYREF

  v2 = a1 + 16;
  sub_604734E4(a1 + 16, 0);
  sub_60475C8C((int)v2);
  v6 = &v8;
  v5 = &BufferedSafeStringBase_char_vtable_probably;
  v7 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v5);
  *(_BYTE *)v6 = 0;
  v5 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA16C0 + 12))(&dword_60CA16C0);
  v3 = (const char *)dword_60CA16C4;
  (*(void (__fastcall **)(int *))(dword_60CA16C8 + 12))(&dword_60CA16C8);
  sub_608FDDF4((int)&v5, "%s.%s", v3, (const char *)dword_60CA16CC);
  message_ref(v2, &v5, (int)(a1 + 21499), 0, 0);
  sub_604A435C((int)(a1 + 933), 0, (int)(a1 + 69417), (int)(a1 + 69925));
  sub_604A435C((int)(a1 + 6072), 1, (int)(a1 + 69417), (int)(a1 + 69925));
  sub_604A435C((int)(a1 + 11211), 2, (int)(a1 + 69417), (int)(a1 + 69925));
  sub_604A435C((int)(a1 + 16350), 3, (int)(a1 + 69417), (int)(a1 + 69925));
  v10[0] = (int)&sead__SafeStringBase__vtable;
  v9[0] = &sead__SafeStringBase__vtable;
  v10[1] = (int)"Pa_Return_00";
  v9[1] = "Pa_Icon_00";
  sub_6050A704(a1 + 22009, v2, v10, v9, 1, 0);
  a1[22019] = 2;
  a1[22018] |= 1u;
  v10[0] = 8;
  return sub_60476030((int)v2, &dword_60CA1768, v10);
}
