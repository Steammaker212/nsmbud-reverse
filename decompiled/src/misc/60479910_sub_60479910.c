/* sub_60479910
 * address: 0x60479910   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479910(int a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  int v4; // r8
  int v5; // r0
  int v6; // r9
  int v7; // r6
  int v8; // r3
  int v9; // r4
  int v10; // r5
  int v11; // r7
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r7
  int v16; // r3
  int v17; // r4
  int v18; // r5
  int v19; // r7
  __int16 v20; // r2
  unsigned int v21; // r0
  unsigned int v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // s22
  int v26; // r0
  signed int v27; // r1
  int v28; // r1
  int v29; // r0
  int v30; // r0
  __int64 *v31; // r0
  int v33; // [sp+14h] [bp-33Ch]
  int v34; // [sp+18h] [bp-338h]
  int v37; // [sp+24h] [bp-32Ch]
  _DWORD v38[5]; // [sp+30h] [bp-320h] BYREF
  _BYTE v39[104]; // [sp+44h] [bp-30Ch] BYREF
  _DWORD v40[43]; // [sp+ACh] [bp-2A4h] BYREF
  _BYTE v41[24]; // [sp+158h] [bp-1F8h] BYREF
  _BYTE v42[28]; // [sp+170h] [bp-1E0h] BYREF
  _DWORD *v43; // [sp+18Ch] [bp-1C4h]
  _DWORD v44[15]; // [sp+1B0h] [bp-1A0h] BYREF
  __int16 v45; // [sp+1ECh] [bp-164h]
  char v46; // [sp+1EEh] [bp-162h]
  _DWORD v47[52]; // [sp+1F0h] [bp-160h] BYREF
  unsigned int v48; // [sp+2C0h] [bp-90h] BYREF
  unsigned __int16 v49; // [sp+2C4h] [bp-8Ch]
  unsigned __int8 v50; // [sp+2C6h] [bp-8Ah]

  v34 = FIELD_U32(a1, 4);
  if ( v34 )
  {
    v2 = 0;
    v3 = (_DWORD *)(a1 + 12);
    v33 = FIELD_U32(a1, 8);
    do
    {
      v37 = v2;
      v4 = v33 + 832 * v2;
      if ( FIELD_U8(a1, 3561) )
      {
        sub_60473DE4(v3, 0, (_DWORD *)(v4 + 752), 0);
        v5 = sub_6047482C((int)v3, 0);
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, FIELD_F32(v4, 828));
      }
      sub_604739E8(v3, &qword_60B3B8CC, 0);
      sub_6091ABEC(v44);
      v6 = v50;
      v7 = v49;
      v8 = FIELD_U32(v4, 4);
      v9 = FIELD_U32(v4, 8);
      v10 = FIELD_U32(v4, 12);
      v11 = FIELD_U32(v4, 16);
      v44[0] = *(_DWORD *)v4;
      v44[1] = v8;
      v44[2] = v9;
      v44[3] = v10;
      v44[4] = v11;
      v12 = FIELD_U32(v4, 24);
      v13 = FIELD_U32(v4, 28);
      v14 = FIELD_U32(v4, 32);
      v15 = FIELD_U32(v4, 36);
      v44[5] = FIELD_U32(v4, 20);
      v44[6] = v12;
      v44[7] = v13;
      v44[8] = v14;
      v44[9] = v15;
      v16 = FIELD_U32(v4, 44);
      v17 = FIELD_U32(v4, 48);
      v18 = FIELD_U32(v4, 52);
      v19 = FIELD_U32(v4, 56);
      v44[10] = FIELD_U32(v4, 40);
      v44[11] = v16;
      v44[12] = v17;
      v44[13] = v18;
      v44[14] = v19;
      v20 = FIELD_U16(v4, 60);
      v46 = FIELD_U8(v4, 62);
      v45 = v20;
      sub_60917754(v47, v4 + 64);
      v47[50] = FIELD_U32(v4, 264);
      do
        v21 = __ldrex(&v48);
      while ( __strex(v21 | 4, &v48) );
      if ( v49 != v7 )
      {
        do
          v22 = __ldrex(&v48);
        while ( __strex(v22 | 2, &v48) );
        v49 = v7;
      }
      if ( v50 != v6 )
      {
        do
          v23 = __ldrex(&v48);
        while ( __strex(v23 | 1, &v48) );
        v50 = v6;
      }
      sub_6091AC94(v44);
      v24 = FIELD_U16(v4, 24);
      if ( v24 <= 1 )
        v24 = 1;
      v25 = v24;
      v26 = sub_609200A0(v4);
      v27 = FIELD_U16(v4, 26);
      if ( v26 > v27 )
        v27 = v26;
      ((void (__fastcall *)(_BYTE *, int, float, float, float, float))loc_60919ED8)(
        v42,
        v4 + 744,
        0.0,
        0.0,
        (float)v25,
        (float)(unsigned int)v27);
      v43 = v44;
      sub_6090B260(v42, FIELD_U32(a2, 40));
      v28 = FIELD_U32(a2, 40);
      v40[0] = 1065353216;
      v40[1] = 1065353216;
      v40[2] = 1065353216;
      v40[3] = 0;
      sub_6091A624(v42, v28, 1, v40, 1.0, 0);
      v29 = ((int (__fastcall *)(_BYTE *, _BYTE *))loc_6090E438)(v41, v42);
      sub_6090E560(v29, FIELD_U32(a2, 40), v42);
      sub_6090C7F8(v40, v41, 0.0, 1000.0);
      v30 = sub_6090B350(v39);
      sub_6090B4B0(v30, FIELD_U32(a2, 40));
      v38[1] = v39;
      v38[3] = 0;
      v38[4] = FIELD_U32(a2, 40);
      v38[0] = v42;
      v38[2] = v41;
      v31 = (__int64 *)sub_6090BE54(v40);
      v3 = (_DWORD *)(a1 + 12);
      sub_60473CC0((_DWORD *)(a1 + 12), (int)v38, v31);
      sub_6091ADF4(v44, FIELD_U32(a2, 40));
      sub_60959C28(v4 + 288, v4, 0);
      nullsub_113(v40);
      j_nullsub_280(v42);
      sub_609175E4(v47);
      v2 = v37 + 1;
    }
    while ( v37 + 1 != v34 );
  }
  FIELD_U8(a1, 3560) = 1;
  return 1;
}
