/* sub_6089DDBC
 * address: 0x6089DDBC   size: 1216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089DDBC(int a1, int a2)
{
  int v3; // r0
  int v4; // r9
  int v5; // r0
  int v6; // r4
  const char *v7; // r5
  _QWORD *v8; // r7
  int v9; // r6
  int v10; // r11
  int v11; // r7
  int v12; // r10
  int i; // r4
  _QWORD *v14; // r5
  int v15; // r0
  int v16; // r6
  int v17; // r5
  _QWORD *v18; // r4
  int v19; // r5
  _QWORD *v20; // r4
  int v21; // r5
  _QWORD *v22; // r4
  int v23; // r5
  _QWORD *v24; // r4
  int v25; // r5
  int v26; // r7
  int v27; // r0
  int v28; // r0
  int v30; // [sp+4h] [bp-3ECh]
  int v32; // [sp+10h] [bp-3E0h]
  int v33; // [sp+14h] [bp-3DCh]
  _DWORD v34[12]; // [sp+18h] [bp-3D8h] BYREF
  _DWORD v35[64]; // [sp+48h] [bp-3A8h] BYREF
  _QWORD v36[85]; // [sp+148h] [bp-2A8h] BYREF

  v3 = FIELD_U32(a1, 584);
  if ( !v3 )
    return 0;
  v33 = FIELD_U32(v3, 4);
  memset(v36, 0, 640);
  v4 = 0;
  v5 = 0;
  if ( FIELD_U32(a1, 76) )
  {
    v6 = 0;
    v4 = 0;
    do
    {
      v7 = off_60C5AAF0[v6];
      if ( sub_6083BDB8(v33, 0, 0, v7) != -1 )
      {
        v8 = &v36[5 * v4];
        sub_6083D774((int)v8);
        *((_DWORD *)v8 + 4) = v7;
        *((_WORD *)v8 + 2) = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 76) + 28))(
                               FIELD_U32(a1, 76),
                               v6);
        *((_DWORD *)v8 + 3) = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 76) + 32))(
                                FIELD_U32(a1, 76),
                                v6);
        ++v4;
        *((_DWORD *)v8 + 2) = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 76) + 40))(
                                FIELD_U32(a1, 76),
                                v6);
      }
      ++v6;
    }
    while ( v6 != 5 );
    v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 76) + 24))(FIELD_U32(a1, 76));
  }
  v30 = a1;
  v9 = a1 + 660;
  v10 = 0;
  v11 = v5;
  v12 = 0;
  v32 = v5;
  do
  {
    i = (int)off_60C5AB04[v10];
    if ( sub_6083BDB8(v33, 0, 0, (const char *)i) == -1 )
    {
      v15 = -1;
    }
    else
    {
      v14 = &v36[5 * v12 + 5 * v4];
      sub_6083D774((int)v14);
      *((_DWORD *)v14 + 4) = i;
      *((_WORD *)v14 + 2) = v11;
      ++v12;
      *((_DWORD *)v14 + 3) = 6405;
      *((_DWORD *)v14 + 2) = 0;
      v15 = v11++;
    }
    *(_DWORD *)(v9 + 4 * v10++) = v15;
  }
  while ( v10 != 11 );
  v16 = 0;
  if ( !(v12 | v4) )
  {
    v16 = 0;
    v17 = sub_6083BDB8(v33, 0, 0, "sysEmitterPluginAttr0");
    v18 = &v36[5 * v11];
    sub_6083D774((int)v18);
    if ( v17 != -1 )
    {
      ++v11;
      v16 = 1;
      *((_DWORD *)v18 + 4) = "sysEmitterPluginAttr0";
      *((_WORD *)v18 + 2) = 0;
      *((_DWORD *)v18 + 3) = 6405;
      *((_DWORD *)v18 + 2) = 0;
    }
    v19 = sub_6083BDB8(v33, 0, 0, "sysEmitterPluginAttr1");
    v20 = &v36[5 * v11];
    sub_6083D774((int)v20);
    if ( v19 != -1 )
    {
      ++v16;
      ++v11;
      *((_DWORD *)v20 + 4) = "sysEmitterPluginAttr1";
      *((_WORD *)v20 + 2) = 0;
      *((_DWORD *)v20 + 3) = 6405;
      *((_DWORD *)v20 + 2) = 16;
    }
    v21 = sub_6083BDB8(v33, 0, 0, "sysEmitterPluginAttr2");
    v22 = &v36[5 * v11];
    sub_6083D774((int)v22);
    if ( v21 != -1 )
    {
      ++v16;
      ++v11;
      *((_DWORD *)v22 + 4) = "sysEmitterPluginAttr2";
      *((_WORD *)v22 + 2) = 0;
      *((_DWORD *)v22 + 3) = 6405;
      *((_DWORD *)v22 + 2) = 32;
    }
    v23 = sub_6083BDB8(v33, 0, 0, "sysEmitterPluginAttr3");
    v24 = &v36[5 * v11];
    sub_6083D774((int)v24);
    if ( v23 != -1 )
    {
      ++v16;
      ++v11;
      *((_DWORD *)v24 + 4) = "sysEmitterPluginAttr3";
      *((_WORD *)v24 + 2) = 0;
      *((_DWORD *)v24 + 3) = 6405;
      *((_DWORD *)v24 + 2) = 48;
    }
    v25 = sub_6083BDB8(v33, 0, 0, "sysEmitterPluginAttr4");
    i = (int)&v36[5 * v11];
    sub_6083D774(i);
    if ( v25 != -1 )
    {
      ++v16;
      FIELD_U32(i, 16) = "sysEmitterPluginAttr4";
      FIELD_U16(i, 4) = 0;
      FIELD_U32(i, 12) = 6405;
      FIELD_U32(i, 8) = 64;
    }
    FIELD_U32(v30, 704) = 0;
  }
  memset(v35, 0, sizeof(v35));
  sub_6083D798(v35);
  if ( v4 && v32 >= 1 )
  {
    for ( i = 0; i != v32; ++i )
      v35[4 * i] = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(v30 + 76) + 8))(FIELD_U32(v30, 76), i);
  }
  if ( v12 >= 1 )
  {
    v26 = v12;
    i = (int)&v35[4 * v32];
    do
    {
      sub_6083D798((_DWORD *)i);
      *(_DWORD *)i = 16;
      FIELD_U32(i, 4) = 1;
      i += 16;
      --v26;
    }
    while ( v26 );
  }
  v27 = v16;
  if ( v16 )
    v27 = 80;
  else
    LOWORD(i) = 0;
  if ( v16 )
  {
    v35[0] = v27;
    LOWORD(i) = 1;
  }
  memset(v34, 0, sizeof(v34));
  sub_6083D7A8((int)v34);
  v34[2] = v36;
  LOWORD(v34[0]) = v12 + v4 + v16;
  v34[4] = v35;
  HIWORD(v34[0]) = v12 + v32 + i;
  v28 = sub_6083C978((unsigned __int16 *)v34);
  sub_6083C9F4(v30 + 608, FIELD_U32(v30, 600), v28);
  sub_6083CA08(v30 + 608, a2, (unsigned __int16 *)v34, v33);
  return 1;
}
