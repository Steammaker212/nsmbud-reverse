/* sub_60452470
 * address: 0x60452470   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60452470(int a1)
{
  int v1; // r4
  int v2; // r12
  int v3; // lr
  int v4; // r6
  int v5; // r1
  int v6; // r9
  _DWORD *v7; // r2
  int v8; // r8
  int v9; // r5
  int v10; // r3
  int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r3
  int v14; // r3
  unsigned int v15; // r0
  char v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  char v21; // r1
  char v22; // r1
  char v23; // r1
  int v24; // r8
  int v25; // r1
  __int16 v26; // r7
  __int16 v27; // r5
  unsigned int v28; // r3
  unsigned int v29; // r2
  char v30; // r12
  int v31; // r1
  char v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r0
  __int16 v35; // r4
  int v36; // r3
  int v37; // r1
  unsigned int v38; // r2
  char v39; // r0
  unsigned int v40; // r0
  char v41; // r0
  _BYTE *v42; // r0
  int result; // r0
  unsigned __int8 *v45; // [sp+1Ch] [bp-2Ch]
  __int16 v46; // [sp+20h] [bp-28h] BYREF
  char v47; // [sp+22h] [bp-26h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v45 = (unsigned __int8 *)(dword_60C9A1F0 + 6558);
  v4 = FIELD_U32(a1, 1388);
  v5 = dword_60CC6D78;
  v6 = dword_60C99DD4;
  v7 = (_DWORD *)(dword_60C99DD4 + 344);
  do
  {
    v9 = v4 - 16 * v1;
    v10 = 5;
    v11 = FIELD_U8(v9, 60);
    if ( v11 != 1 )
      LOBYTE(v11) = 0;
    *((_BYTE *)v7 - 52) = v11;
    v12 = FIELD_U8(v9, 61);
    if ( v12 <= 0x63 )
    {
      if ( v12 >= 0x63 )
        v12 = 99;
      v10 = v12;
    }
    *(v7 - 12) = v10;
    v8 = 0;
    if ( FIELD_U8(v9, 62) <= 6u )
    {
      if ( !v1 && (FIELD_U8(v5, 44) & 1) != 0 )
      {
        if ( FIELD_U32(v6, 304) != 1 )
          v8 = FIELD_U8(v9, 62);
      }
      else
      {
        v8 = FIELD_U8(v9, 62);
      }
    }
    *(v7 - 9) = v8;
    v13 = FIELD_S8(v9, 63);
    if ( v13 > 6 )
    {
      v14 = 0;
    }
    else
    {
      if ( !v1 && (FIELD_U8(v5, 44) & 1) != 0 && FIELD_U32(v6, 304) == 1 )
      {
        v14 = 0;
        FIELD_U32(v6, 304) = 0;
        goto LABEL_23;
      }
      v14 = dword_60B023E0[v13];
    }
    *(v7 - 10) = v14;
LABEL_23:
    v15 = FIELD_U8(v9, 64);
    if ( v15 >= 0xA )
      v15 = 0;
    *(v7 - 11) = v15;
    v16 = FIELD_U8(v9, 66);
    *((_BYTE *)v7 - 24) = v16 & 1;
    if ( v14 == 6 )
    {
      if ( (FIELD_U8(v5, 44) & 0x10) != 0 )
      {
        v18 = *v45 | 0x2000000;
      }
      else
      {
        if ( (v16 & 2) != 0 )
        {
          v19 = v3 % 3;
          ++v3;
          v17 = v19 + 3;
        }
        else
        {
          v17 = v2 % 3;
          ++v2;
        }
        v18 = v17 & 0xFFFFFF;
      }
      *(v7 - 7) = v18;
    }
    v20 = FIELD_U8(v9, 65);
    --v1;
    if ( v20 != 1 )
      LOBYTE(v20) = 0;
    *((_BYTE *)v7 - 22) = v20;
    *v7 = FIELD_U32(v9, 68);
    v7 += 18;
  }
  while ( v1 != -4 );
  v21 = FIELD_U8(v4, 124);
  if ( (unsigned __int8)(v21 + 1) > 5u )
    v21 = -1;
  FIELD_U8(v6, 733) = v21;
  v22 = FIELD_U8(v4, 125);
  if ( (unsigned __int8)(v22 + 1) > 5u )
    v22 = -1;
  FIELD_U8(v6, 734) = v22;
  v23 = FIELD_U8(v4, 126);
  if ( (unsigned __int8)(v23 + 1) > 5u )
    v23 = -1;
  FIELD_U8(v6, 735) = v23;
  v24 = v6 + 272;
  v25 = FIELD_U8(v4, 127);
  if ( (unsigned __int8)(v25 + 1) > 3u || v25 == 255 )
  {
    sub_603F692C(v6 + 272);
  }
  else
  {
    v26 = FIELD_U8(v6, 733);
    v27 = FIELD_U8(v6, 734);
    v28 = FIELD_U8(v4, 129);
    v29 = FIELD_U8(v4, 128);
    v30 = FIELD_U8(v4, 130);
    v47 = FIELD_U8(v6, 735);
    v46 = v26 | (v27 << 8);
    if ( v28 >= 2 )
      v28 = 0;
    if ( v29 > 3 )
      LOBYTE(v29) = 0;
    sub_603F6984(
      v24,
      (char)v25,
      v29,
      0,
      v28,
      FIELD_U8(LevelInfo_instance, 16),
      FIELD_U8(LevelInfo_instance, 17),
      FIELD_U8(LevelInfo_instance, 18),
      v30,
      &v46);
  }
  v31 = dword_60CC6D78;
  v32 = FIELD_U8(v4, 131);
  FIELD_U8(dword_60CC6D78, 109032) = v32 & 1;
  FIELD_U8(v31, 109033) = (v32 & 4) != 0;
  if ( (v32 & 1) != 0 )
    FIELD_U8(v6, 908) = (v32 & 2) != 0;
  sub_603FD520((unsigned int *)(v6 + 764), FIELD_U8(v4, 132));
  v33 = FIELD_U8(v4, 133);
  if ( v33 > 0x63 )
    v33 = 0;
  sub_603FD36C(v24, v33);
  v34 = FIELD_U32(v4, 136);
  if ( v34 >= 0x3B9ACA00 )
    v34 = 0;
  FIELD_U32(v6, 728) = v34;
  v35 = FIELD_U16(v4, 134);
  FIELD_U8(v6, 777) = v35 & 1;
  FIELD_U8(v6, 732) = (v35 & 2) != 0;
  if ( FIELD_U32(v6, 764) == 1 )
  {
    v36 = 4;
    if ( (v35 & 4) != 0 )
      v36 = 0;
    if ( (v35 & 8) == 0 )
      v36 = 0;
    v37 = v36;
    if ( (v35 & 8) == 0 )
      v37 = 6;
    v38 = FIELD_U8(v4, 148);
    if ( (v35 & 4) == 0 )
      v37 = v36;
    if ( v38 >= 0x13 )
      v38 = 19;
    sub_60407734(dword_60C9A1E0, v37, v38, FIELD_F32(v4, 144));
  }
  v39 = FIELD_U8(v4, 149);
  FIELD_U8(a1, 1436) = v39 != 0;
  FIELD_U8(dword_60CC6D8C, 17) = (v35 & 0x10) != 0;
  FIELD_U8(v6, 768) = (v35 & 0x20) != 0;
  FIELD_U8(v6, 776) = FIELD_U8(v4, 140);
  v40 = FIELD_U8(v4, 141);
  if ( v40 > 0xF )
  {
    v40 = 15;
  }
  else if ( ((1 << v40) & 0x8C00) == 0 )
  {
    v40 = 15;
  }
  FIELD_U32(v6, 772) = v40;
  v41 = FIELD_U8(v4, 142);
  if ( v41 < 0 )
  {
    FIELD_U8(v6, 849) = v41 & 0x7F;
    v42 = (_BYTE *)(v6 + 848);
  }
  else
  {
    FIELD_U8(v6, 848) = v41;
    v42 = (_BYTE *)(v6 + 849);
  }
  *v42 = 0;
  result = FIELD_U8(v4, 143);
  FIELD_U8(v6, 736) = result;
  return result;
}
