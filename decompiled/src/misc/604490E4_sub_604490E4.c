/* sub_604490E4
 * address: 0x604490E4   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604490E4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r7
  int v11; // r11
  int v12; // r6
  unsigned int v13; // r5
  _DWORD *v14; // r1
  _DWORD *v15; // r1
  _DWORD *v16; // r1
  _DWORD *v17; // r1
  _DWORD *v18; // r1
  _DWORD *v19; // r1
  _DWORD *v20; // r1
  _DWORD *v21; // r1
  _DWORD *v22; // r1
  _DWORD *v23; // r2
  _DWORD *v24; // r2
  __int16 v27; // [sp+4h] [bp-9Ch] BYREF
  int v28; // [sp+8h] [bp-98h]
  char v29; // [sp+2Dh] [bp-73h]
  char v30; // [sp+2Fh] [bp-71h]
  __int16 v31; // [sp+5Ch] [bp-44h]
  _DWORD v32[13]; // [sp+6Ch] [bp-34h] BYREF

  sub_60450C78(dword_60C9CEF0, a5, a6, 2);
  sub_6090B350(&v27);
  v28 |= 1u;
  v29 = 5;
  v30 = 6;
  v27 = 1;
  v31 = 260;
  sub_60450C98(dword_60C9CEF0, &v27, 2);
  FIELD_U32(a1, 56) = a2;
  FIELD_U32(a1, 60) = a3;
  FIELD_U32(a1, 64) = a4;
  (**(void (__fastcall ***)(int, int))a1)(a1, 500);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = *(_DWORD **)(a1 + 72);
    if ( FIELD_U32(a1, 68) > v13 )
      v14 = (_DWORD *)((char *)v14 + v10);
    *v14 = 0;
    v14[1] = 0;
    v14[2] = 0;
    v15 = *(_DWORD **)(a1 + 80);
    if ( FIELD_U32(a1, 76) > v13 )
      v15 = (_DWORD *)((char *)v15 + v10);
    *v15 = 0;
    v15[1] = 0;
    v15[2] = 0;
    v16 = *(_DWORD **)(a1 + 88);
    if ( FIELD_U32(a1, 84) > v13 )
      v16 = (_DWORD *)((char *)v16 + v11);
    *v16 = 0;
    v16[1] = 0;
    v17 = *(_DWORD **)(a1 + 96);
    if ( FIELD_U32(a1, 92) > v13 )
      v17 = (_DWORD *)((char *)v17 + v12);
    *v17 = 0;
    v18 = *(_DWORD **)(a1 + 104);
    if ( FIELD_U32(a1, 100) > v13 )
      v18 = (_DWORD *)((char *)v18 + v12);
    *v18 = 0;
    v19 = *(_DWORD **)(a1 + 120);
    if ( FIELD_U32(a1, 116) > v13 )
      v19 = (_DWORD *)((char *)v19 + v12);
    *v19 = 0;
    v20 = *(_DWORD **)(a1 + 112);
    if ( FIELD_U32(a1, 108) > v13 )
      v20 = (_DWORD *)((char *)v20 + v12);
    *v20 = 0;
    v21 = *(_DWORD **)(a1 + 128);
    if ( FIELD_U32(a1, 124) > v13 )
      v21 = (_DWORD *)((char *)v21 + v12);
    *v21 = 0;
    v22 = *(_DWORD **)(a1 + 136);
    if ( FIELD_U32(a1, 132) > v13 )
      v22 = (_DWORD *)((char *)v22 + v12);
    *v22 = 0;
    v32[0] = 255;
    sub_6090AF14(v32, 0.0, 0.0, 0.0, 0.0);
    v23 = *(_DWORD **)(a1 + 144);
    if ( FIELD_U32(a1, 140) > v13 )
      v23 = (_DWORD *)((char *)v23 + v12);
    *v23 = v32[0];
    v32[0] = 255;
    sub_6090AF14(v32, 0.0, 0.0, 0.0, 0.0);
    v24 = *(_DWORD **)(a1 + 152);
    v10 += 12;
    v11 += 8;
    if ( FIELD_U32(a1, 148) > v13++ )
      v24 = (_DWORD *)((char *)v24 + v12);
    v12 += 4;
    *v24 = v32[0];
  }
  while ( v13 != 500 );
  FIELD_U32(a1, 52) = 500;
  return 1;
}
