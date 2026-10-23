/* sub_6086C8F0
 * address: 0x6086C8F0   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6086C8F0(int *a1)
{
  int v2; // r6
  int v3; // r1
  int v4; // r2
  bool v5; // zf
  unsigned int v6; // r0
  int v7; // r7
  int v8; // r11
  int v9; // r8
  int v10; // r0
  int v11; // r11
  int v12; // r10
  int v13; // r6
  int v14; // r5
  unsigned int v15; // r6
  int v16; // r1
  unsigned int result; // r0
  int *v18; // r2
  int *v19; // r2
  unsigned int v20; // r7
  unsigned int v21; // r3
  int v22; // r0
  int v23; // r0
  int v24; // [sp+0h] [bp-B8h]
  unsigned int v25; // [sp+4h] [bp-B4h]
  int v26; // [sp+8h] [bp-B0h]
  int v27; // [sp+Ch] [bp-ACh]
  int v28; // [sp+10h] [bp-A8h]
  int v29; // [sp+10h] [bp-A8h]
  int v30; // [sp+14h] [bp-A4h]
  int v31; // [sp+18h] [bp-A0h] BYREF
  int v32; // [sp+1Ch] [bp-9Ch]
  int v33; // [sp+20h] [bp-98h]
  int v34; // [sp+24h] [bp-94h]
  int v35; // [sp+28h] [bp-90h]
  int v36; // [sp+2Ch] [bp-8Ch]
  int v37; // [sp+30h] [bp-88h]
  int v38; // [sp+34h] [bp-84h]
  int v39; // [sp+38h] [bp-80h]
  int v40; // [sp+3Ch] [bp-7Ch]
  int v41; // [sp+40h] [bp-78h]
  int v42; // [sp+44h] [bp-74h]
  int v43; // [sp+48h] [bp-70h]
  int v44; // [sp+4Ch] [bp-6Ch]
  int v45; // [sp+50h] [bp-68h]
  int v46; // [sp+54h] [bp-64h]
  int v47; // [sp+58h] [bp-60h]
  int v48; // [sp+5Ch] [bp-5Ch]
  int v49; // [sp+60h] [bp-58h]
  int v50; // [sp+64h] [bp-54h]
  int v51; // [sp+68h] [bp-50h]
  int v52; // [sp+6Ch] [bp-4Ch]
  int v53; // [sp+70h] [bp-48h]
  int v54; // [sp+74h] [bp-44h]
  int v55; // [sp+78h] [bp-40h]
  int v56; // [sp+7Ch] [bp-3Ch]
  int v57; // [sp+80h] [bp-38h]
  int v58; // [sp+84h] [bp-34h]
  int v59; // [sp+88h] [bp-30h]
  int v60; // [sp+8Ch] [bp-2Ch]
  int v61; // [sp+90h] [bp-28h]

  v2 = 0;
  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 32);
  v5 = a1[1] == 0;
  v6 = 0;
  v30 = v3;
  v7 = FIELD_U32(v3, 32);
  if ( v5 )
  {
    v31 = v4;
    v35 = 0;
    v36 = 8;
    v37 = 0;
    v38 = -1;
    v39 = 0;
    v40 = 8;
    v41 = 0;
    v42 = -1;
    v43 = 0;
    v44 = 8;
    v45 = 0;
    v46 = -1;
    v47 = 0;
    v48 = 8;
    v49 = 0;
    v50 = -1;
    v33 = 0;
    v34 = 0;
    v32 = a1[2];
    sub_6087CEF0(&v31);
    v3 = v30;
    v4 = v7;
    v6 = (v33 + 15) & 0xFFFFFFF0;
  }
  v25 = v6;
  v24 = FIELD_U16(v4, 76);
  v27 = FIELD_U16(v3, 108);
  v26 = FIELD_U16(v3, 106);
  if ( FIELD_U16(v3, 106) )
  {
    v8 = FIELD_U16(v3, 106);
    v9 = 0;
    v2 = 0;
    v28 = a1[5];
    do
    {
      v31 = FIELD_U32(v3, 48) + v9;
      v38 = 0;
      v39 = 8;
      v40 = 0;
      v41 = -1;
      v42 = 0;
      v43 = 8;
      v44 = 0;
      v45 = -1;
      v46 = 0;
      v47 = 8;
      v48 = 0;
      v49 = -1;
      v50 = 0;
      v51 = 8;
      v52 = 0;
      v53 = -1;
      v54 = 0;
      v55 = 8;
      v56 = 0;
      v57 = -1;
      v58 = 0;
      v59 = 8;
      v60 = 0;
      v61 = -1;
      v36 = 0;
      v37 = 0;
      v32 = a1[3];
      v10 = *(_DWORD *)(FIELD_U32(v4, 24) + 96 * FIELD_U16(v31, 96) + 52) & 0x70000;
      if ( v10 )
        LOBYTE(v10) = 1;
      LOBYTE(v34) = v10;
      v33 = v28;
      BYTE1(v34) = *((_BYTE *)a1 + 32);
      v35 = a1[7];
      sub_60875064(&v31);
      v3 = v30;
      v4 = v7;
      v9 += 112;
      --v8;
      v2 += (v36 + 15) & 0xFFFFFFF0;
    }
    while ( v8 );
  }
  v11 = 0;
  v29 = v2;
  if ( v27 )
  {
    v12 = v27;
    v13 = 0;
    v11 = 0;
    do
    {
      v31 = FIELD_U32(v3, 64) + v13;
      v35 = 0;
      v36 = 8;
      v37 = 0;
      v38 = -1;
      v39 = 0;
      v40 = 8;
      v41 = 0;
      v42 = -1;
      v43 = 0;
      v44 = 8;
      v45 = 0;
      v46 = -1;
      v47 = 0;
      v48 = 8;
      v49 = 0;
      v50 = -1;
      v51 = 0;
      v52 = 8;
      v53 = 0;
      v54 = -1;
      v33 = 0;
      v34 = 0;
      v32 = a1[4];
      sub_6086BF0C(&v31);
      v3 = v30;
      v13 += 184;
      --v12;
      v11 += (v33 + 7) & 0xFFFFFFF8;
    }
    while ( v12 );
  }
  v14 = 0;
  a1[14] = -1;
  a1[18] = -1;
  a1[22] = -1;
  a1[24] = 8;
  a1[25] = 0;
  a1[26] = -1;
  a1[28] = 8;
  a1[29] = 0;
  a1[30] = -1;
  a1[32] = 8;
  a1[33] = 0;
  a1[34] = -1;
  a1[36] = 8;
  a1[37] = 0;
  a1[38] = -1;
  a1[40] = 8;
  a1[41] = 0;
  a1[42] = -1;
  a1[43] = 0;
  a1[46] = -1;
  a1[12] = 16;
  a1[13] = 0;
  v15 = v25;
  a1[11] = v25;
  a1[16] = 16;
  a1[17] = 0;
  a1[15] = v29;
  a1[20] = 8;
  a1[21] = 0;
  a1[19] = v11;
  a1[23] = 64;
  a1[27] = 56 * v26;
  a1[31] = 72 * v27;
  a1[35] = ((unsigned int)(v24 + 31) >> 3) & 0x3FFC;
  a1[39] = ((unsigned int)(v27 + 31) >> 3) & 0x3FFC;
  a1[44] = 16;
  a1[45] = 0;
  if ( *((_BYTE *)a1 + 32) )
    v14 = 32 * a1[6];
  v16 = 0;
  a1[43] = v14;
  a1[9] = 0;
  a1[10] = 8;
  result = 0;
  if ( v25 )
    goto LABEL_17;
  while ( v16 != 32 )
  {
    v18 = &a1[v16];
    v16 += 4;
    v15 = v18[15];
    if ( v15 )
    {
LABEL_17:
      v19 = &a1[v16];
      v20 = a1[10];
      v21 = a1[v16 + 12];
      if ( v20 < v21 )
        v20 = a1[v16 + 12];
      a1[10] = v20;
      v22 = (result + v19[13] + v21 - 1) & -v21;
      a1[9] = v22;
      v23 = v22 - v19[13];
      v19[14] = v23;
      result = v15 + v23;
      a1[9] = result;
    }
  }
  return result;
}
