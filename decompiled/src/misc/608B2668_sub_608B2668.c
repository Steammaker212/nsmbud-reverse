/* sub_608B2668
 * address: 0x608B2668   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2668(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r7
  int v7; // r6
  int v8; // r6
  unsigned __int8 *v9; // r0
  unsigned int v10; // r10
  int v11; // r0
  unsigned __int8 *v12; // r0
  int v13; // r1
  int v14; // r1
  unsigned int *v15; // r0
  unsigned int v16; // lr
  bool v17; // zf
  _BYTE *v18; // r3
  _DWORD *v19; // r7
  unsigned int v20; // r5
  unsigned int v21; // r1
  char *v22; // r6
  _BYTE *v23; // r12
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int *v26; // r9
  unsigned int v27; // r0
  int v28; // r4
  unsigned __int8 *v29; // lr
  int v30; // r8
  int v31; // r10
  int v32; // r5
  int v33; // r5
  char v34; // r4
  bool v35; // cf
  unsigned int v37; // [sp+8h] [bp-30h]
  int v38; // [sp+Ch] [bp-2Ch]
  int v39; // [sp+10h] [bp-28h]

  v5 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v6 = v5;
  v7 = 0;
  if ( v5 && sub_608B1A60(v5) == 2 )
  {
    v8 = sub_608B1A94(v6);
    *(_WORD *)a3 = *(_WORD *)v8;
    FIELD_U16(a3, 2) = FIELD_U16(v8, 2);
    v9 = (unsigned __int8 *)sub_608B1F34(v8);
    v10 = 131327;
    if ( v9 )
    {
      FIELD_U32(a3, 124) = *v9;
      v11 = v9[2];
    }
    else
    {
      FIELD_U32(a3, 124) = 1;
      v11 = 0;
    }
    FIELD_U32(a3, 128) = v11;
    if ( FIELD_U32(a1, 8) <= 0x200FFu )
    {
      FIELD_U32(a3, 4) = 1065353216;
      FIELD_U8(a3, 8) = 127;
      FIELD_U8(a3, 10) = 0;
      FIELD_U8(a3, 9) = 0;
      FIELD_U8(a3, 11) = 0;
    }
    else
    {
      FIELD_U32(a3, 4) = FIELD_U32(v8, 12);
      v12 = (unsigned __int8 *)sub_608B1F5C(v8);
      v13 = *v12;
      v39 = v13 | (v12[1] << 8) | ((v12[2] | (v12[3] << 8)) << 16);
      FIELD_U8(a3, 8) = v13;
      FIELD_U16(a3, 9) = *(_WORD *)((char *)&v39 + 1);
      FIELD_U8(a3, 11) = HIBYTE(v39);
    }
    v14 = FIELD_U32(v8, 32);
    if ( FIELD_U32(a1, 8) <= 0x201FFu )
      v14 = -1;
    FIELD_U32(a3, 132) = v14;
    v15 = (unsigned int *)sub_608B1F14(v8);
    v17 = v15 == 0;
    v7 = 1;
    if ( v15 )
    {
      v16 = *v15;
      v17 = *v15 == 0;
    }
    if ( !v17 )
    {
      v18 = (_BYTE *)(a3 + 25);
      v19 = v15 + 1;
      v20 = 1;
      v21 = v16;
      while ( 1 )
      {
        v22 = 0;
        if ( v21 > v20 - 1 )
        {
          v22 = 0;
          if ( *(_WORD *)v19 == 8718 )
            v22 = (char *)v15 + v19[1];
        }
        v23 = v18 - 8;
        *(v18 - 13) = *v22;
        *(v18 - 12) = v22[1];
        *(v18 - 11) = v22[2];
        *(v18 - 10) = v22[3];
        v24 = (unsigned __int8)v22[*((_DWORD *)v22 + 2)];
        *(v18 - 2) = v24;
        if ( FIELD_U32(a1, 8) <= v10 )
        {
          *(v18 - 9) = 127;
          *(v18 - 7) = 0;
          *v23 = 0;
          *(v18 - 6) = 0;
        }
        else
        {
          v25 = v16;
          v26 = v15;
          v27 = v10;
          v29 = (unsigned __int8 *)&v22[*((_DWORD *)v22 + 4)];
          v28 = *v29;
          v30 = v29[1];
          v31 = v29[2];
          v37 = v20;
          v32 = v29[3];
          v16 = v25;
          v33 = v31 | (v32 << 8);
          v10 = v27;
          v15 = v26;
          v38 = v28 | (v30 << 8) | (v33 << 16);
          *(v18 - 9) = v28;
          *(v18 - 7) = BYTE2(v38);
          v20 = v37;
          *v23 = (unsigned __int16)(v28 | ((_WORD)v30 << 8)) >> 8;
          *(v18 - 6) = HIBYTE(v38);
        }
        if ( FIELD_U32(a1, 8) <= v10 )
        {
          v34 = 0;
          *(v18 - 5) = 64;
          *(v18 - 4) = 0;
        }
        else
        {
          *(v18 - 5) = v22[20];
          *(v18 - 4) = v22[21];
          v34 = v22[22];
        }
        *(v18 - 3) = v34;
        if ( v24 >= 2 )
          v24 = 2;
        if ( v24 )
        {
          *(v18 - 1) = v22[*((_DWORD *)v22 + 2) + 4];
          if ( v24 > 1 )
            *v18 = v22[*((_DWORD *)v22 + 2) + 5];
        }
        v35 = v20 >= 7;
        v7 = 1;
        if ( v20 <= 7 )
          v35 = v20 >= v16;
        if ( v35 )
          break;
        v21 = *v15;
        v19 += 2;
        ++v20;
        v18 += 14;
      }
    }
  }
  return v7;
}
