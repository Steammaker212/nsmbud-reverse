/* sub_60520F5C
 * address: 0x60520F5C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60520F5C(_DWORD *a1)
{
  _DWORD *v2; // r9
  int v3; // r4
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r1
  int v10; // [sp+4h] [bp-ACh] BYREF
  int v11; // [sp+8h] [bp-A8h]
  unsigned int v12; // [sp+Ch] [bp-A4h]
  int (**v13)(); // [sp+10h] [bp-A0h] BYREF
  char *v14; // [sp+14h] [bp-9Ch]
  int (**v15)(); // [sp+18h] [bp-98h]
  char *v16; // [sp+1Ch] [bp-94h]
  int (**v17)(); // [sp+20h] [bp-90h]
  char *v18; // [sp+24h] [bp-8Ch]
  int (**v19)(); // [sp+28h] [bp-88h]
  char *v20; // [sp+2Ch] [bp-84h]
  int (**v21)(); // [sp+30h] [bp-80h]
  char *v22; // [sp+34h] [bp-7Ch]
  int (**v23)(); // [sp+38h] [bp-78h]
  char *v24; // [sp+3Ch] [bp-74h]
  int (**v25)(); // [sp+40h] [bp-70h]
  char *v26; // [sp+44h] [bp-6Ch]
  int (**v27)(); // [sp+48h] [bp-68h]
  char *v28; // [sp+4Ch] [bp-64h]
  int (**v29)(); // [sp+50h] [bp-60h]
  char *v30; // [sp+54h] [bp-5Ch]
  int (**v31)(); // [sp+58h] [bp-58h]
  char *v32; // [sp+5Ch] [bp-54h]
  int (**v33)(); // [sp+60h] [bp-50h]
  char *v34; // [sp+64h] [bp-4Ch]
  int (**v35)(); // [sp+68h] [bp-48h]
  char *v36; // [sp+6Ch] [bp-44h]
  int (**v37)(); // [sp+70h] [bp-40h]
  char *v38; // [sp+74h] [bp-3Ch]
  int (**v39)(); // [sp+78h] [bp-38h]
  char *v40; // [sp+7Ch] [bp-34h]
  int (**v41)(); // [sp+80h] [bp-30h]
  char *v42; // [sp+84h] [bp-2Ch]
  int (**v43)(); // [sp+88h] [bp-28h]
  char *v44; // [sp+8Ch] [bp-24h]

  v2 = a1 + 9;
  sub_604734E4(a1 + 9, 0);
  sub_60475C8C((int)v2);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "ResultChallenge.bflyt";
  message_ref(v2, &v13, 0, 0, 0);
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60B3BA34;
  v15 = &sead__SafeStringBase__vtable;
  v16 = &byte_60B3BA34;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60B3BA34;
  v19 = &sead__SafeStringBase__vtable;
  v20 = &byte_60B3BA34;
  v21 = &sead__SafeStringBase__vtable;
  v22 = &byte_60B3BA34;
  v23 = &sead__SafeStringBase__vtable;
  v24 = &byte_60B3BA34;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60B3BA34;
  v27 = &sead__SafeStringBase__vtable;
  v28 = &byte_60B3BA34;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60B3BA34;
  v31 = &sead__SafeStringBase__vtable;
  v32 = &byte_60B3BA34;
  v33 = &sead__SafeStringBase__vtable;
  v34 = &byte_60B3BA34;
  v35 = &sead__SafeStringBase__vtable;
  v36 = &byte_60B3BA34;
  v37 = &sead__SafeStringBase__vtable;
  v38 = &byte_60B3BA34;
  v39 = &sead__SafeStringBase__vtable;
  v40 = &byte_60B3BA34;
  v41 = &sead__SafeStringBase__vtable;
  v42 = &byte_60B3BA34;
  v43 = &sead__SafeStringBase__vtable;
  v44 = &byte_60B3BA34;
  v3 = 0;
  do
  {
    v12 = v3;
    v4 = sub_6052283C(v3);
    v10 = (int)&sead__SafeStringBase__vtable;
    v11 = v4;
    v5 = v12;
    if ( v12 >= 0x10 )
      v5 = 0;
    ((void (__fastcall *)(int (***)(), int *))(&v13)[2 * v5][2])(&(&v13)[2 * v5], &v10);
    v6 = v3 + 1;
    if ( v3 > 15 )
      v6 = 16;
    v3 = v6;
  }
  while ( v6 != 16 );
  v10 = 16;
  sub_60476030((int)v2, &v13, &v10);
  v7 = sub_6052283C(2);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v7;
  sub_60473DE4(v2, 2u, &v10, 0);
  v8 = (_DWORD *)a1[887];
  if ( a1[886] > 2u )
    v8 += 10;
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 104))(*v8);
}
