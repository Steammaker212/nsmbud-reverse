/* sub_6044F1C4
 * address: 0x6044F1C4   size: 1632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044F1C4(int a1, int a2)
{
  unsigned int v4; // r0
  unsigned int *v5; // r8
  unsigned __int8 *v6; // r9
  unsigned int v7; // r1
  int v8; // r8
  char v9; // r1
  int v10; // r8
  int v11; // r9
  char v12; // r2
  int v13; // r4
  int v14; // r5
  __int64 v15; // r0
  int v16; // r5
  int v17; // r8
  int v18; // r6
  _DWORD *v19; // r0
  int v20; // r6
  _DWORD *v21; // r0
  int v22; // r6
  _DWORD *v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r0
  int v29; // r6
  int v30; // r0
  int v31; // r6
  _DWORD *v32; // r0
  int v33; // r6
  _DWORD *v34; // r0
  int v35; // r6
  _DWORD *v36; // r0
  int v37; // r6
  _DWORD *v38; // r0
  unsigned int v39; // r5
  _DWORD *v40; // r0
  _DWORD *v41; // r1
  unsigned int v42; // r2
  bool v43; // zf
  unsigned int v44; // r3
  _DWORD *v45; // r2
  int v46; // r2
  int v47; // r0
  _DWORD *v48; // r3
  bool v49; // cc
  unsigned int *v51; // [sp+8h] [bp-40h]
  _BYTE v52[12]; // [sp+Ch] [bp-3Ch] BYREF
  char v53; // [sp+18h] [bp-30h] BYREF

  *(_DWORD *)a1 = off_60BFB08C;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  sub_60922344(a1 + 64);
  sub_60921AE8(a1 + 336);
  sub_60919C54(a1 + 672);
  sub_6090B350(a1 + 752);
  FIELD_U32(a1, 860) = 0;
  sub_60913BB4(a1 + 884);
  FIELD_U32(a1, 884) = off_60BFA5B0;
  sub_60913BB4(a1 + 912);
  FIELD_U32(a1, 912) = off_60BFB0C8;
  memset((void *)(a1 + 948), 0, 300);
  agl_TextureSampler_ref(a1 + 1256);
  agl_TextureSampler_ref(a1 + 1600);
  agl_TextureSampler_ref(a1 + 1944);
  FIELD_U8(a1, 944) = 0;
  switch ( a2 )
  {
    case 0:
      v4 = 300;
      goto LABEL_8;
    case 1:
      v4 = 150;
      goto LABEL_8;
    case 2:
      v4 = 500;
      goto LABEL_8;
    case 3:
      v4 = 4500;
      goto LABEL_8;
    case 4:
      v4 = 600;
LABEL_8:
      v8 = a1;
      v9 = 0;
      goto LABEL_13;
    case 5:
      v4 = 300;
      goto LABEL_16;
    case 6:
      v4 = 60;
      goto LABEL_12;
    case 7:
      v4 = 12;
LABEL_12:
      v8 = a1;
      v9 = 1;
LABEL_13:
      FIELD_U32(v8, 868) = v4;
      v5 = (unsigned int *)(v8 + 868);
      FIELD_U8(a1, 2312) = v9;
      v6 = (unsigned __int8 *)(a1 + 2312);
      goto LABEL_14;
    case 8:
    case 9:
      v4 = 7200;
      FIELD_U32(a1, 868) = 7200;
      v5 = (unsigned int *)(a1 + 868);
      FIELD_U8(a1, 2312) = 0;
      v6 = (unsigned __int8 *)(a1 + 2312);
      v7 = 8;
      FIELD_U32(a1, 872) = 8;
      FIELD_U32(a1, 56) = 1169956864;
      break;
    case 10:
      v4 = 1440;
LABEL_16:
      v10 = a1;
      v11 = a1;
      v12 = 1;
      goto LABEL_18;
    case 11:
      v4 = 7200;
      v10 = a1;
      v11 = a1;
      v12 = 2;
LABEL_18:
      FIELD_U32(v10, 868) = v4;
      v5 = (unsigned int *)(v10 + 868);
      FIELD_U8(v11, 2312) = 0;
      v6 = (unsigned __int8 *)(v11 + 2312);
      v7 = 4;
      *((_DWORD *)v6 - 360) = 4;
      *(v6 - 1368) = v12;
      break;
    default:
      v4 = 1;
      FIELD_U32(a1, 868) = 1;
      v5 = (unsigned int *)(a1 + 868);
      FIELD_U8(a1, 2312) = 0;
      v6 = (unsigned __int8 *)(a1 + 2312);
LABEL_14:
      v7 = 4;
      *((_DWORD *)v6 - 360) = 4;
      break;
  }
  FIELD_U32(a1, 876) = (__int16)v7 * (__int16)v4;
  v13 = 6 * v4 * (v7 >> 2);
  FIELD_U32(a1, 880) = v13;
  FIELD_U32(a1, 2288) = operator_new_8DE09C(v4);
  sub_60913D88(a1 + 884, 4 * v13, 0, 4, 0);
  sub_60913A6C(&v53, a1 + 884, 0);
  sub_60913D88(a1 + 912, 272 * FIELD_U32(a1, 876), 0, 4, 0);
  sub_60913A6C(v52, a1 + 912, 0);
  v14 = FIELD_U8(a1, 2312);
  if ( FIELD_U8(a1, 2312) )
  {
    v15 = 12LL * *v5;
    if ( !is_mul_ok(0xCu, *v5) )
      HIDWORD(v15) = 1;
    if ( HIDWORD(v15) )
      LODWORD(v15) = -1;
  }
  else
  {
    LODWORD(v15) = 12;
  }
  FIELD_U32(a1, 44) = operator_new_8DE09C(v15);
  if ( FIELD_S32(a1, 876) >= 1 )
  {
    v51 = v5;
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = dword_60CC73E8(FIELD_U32(a1, 924));
      v19 = (_DWORD *)(v18 + sub_60913FB4(a1 + 912) + v16);
      v19[10] = 0;
      v19[11] = 0;
      v19[12] = 0;
      v19[13] = 0;
      v20 = dword_60CC73E8(FIELD_U32(a1, 924));
      v21 = (_DWORD *)(v20 + sub_60913FB4(a1 + 912) + v16);
      v21[14] = 0;
      v21[15] = 0;
      v21[16] = 0;
      v21[17] = 0;
      v22 = dword_60CC73E8(FIELD_U32(a1, 924));
      v23 = (_DWORD *)(v22 + sub_60913FB4(a1 + 912) + v16);
      v23[3] = 0;
      v23[4] = 0;
      v23[5] = 0;
      v24 = dword_60CC73E8(FIELD_U32(a1, 924));
      v25 = v24 + sub_60913FB4(a1 + 912);
      *(_DWORD *)(v25 + v16) = 0;
      v26 = v25 + v16;
      FIELD_U32(v26, 4) = 0;
      FIELD_U32(v26, 8) = 0;
      v27 = dword_60CC73E8(FIELD_U32(a1, 924));
      v28 = v27 + sub_60913FB4(a1 + 912) + v16;
      FIELD_U32(v28, 24) = 0;
      FIELD_U32(v28, 28) = 0;
      v29 = dword_60CC73E8(FIELD_U32(a1, 924));
      v30 = v29 + sub_60913FB4(a1 + 912) + v16;
      FIELD_U32(v30, 32) = 0;
      FIELD_U32(v30, 36) = 0;
      v31 = dword_60CC73E8(FIELD_U32(a1, 924));
      v32 = (_DWORD *)(v31 + sub_60913FB4(a1 + 912) + v16);
      v32[18] = 0;
      v32[19] = 0;
      v32[20] = 0;
      v32[21] = 0;
      v33 = dword_60CC73E8(FIELD_U32(a1, 924));
      v34 = (_DWORD *)(v33 + sub_60913FB4(a1 + 912) + v16);
      v34[22] = 0;
      v34[23] = 0;
      v34[24] = 0;
      v34[25] = 0;
      v35 = dword_60CC73E8(FIELD_U32(a1, 924));
      v36 = (_DWORD *)(v35 + sub_60913FB4(a1 + 912) + v16);
      v36[26] = 0;
      v36[27] = 0;
      v36[28] = 0;
      v36[29] = 0;
      v37 = dword_60CC73E8(FIELD_U32(a1, 924));
      ++v17;
      v38 = (_DWORD *)(v37 + sub_60913FB4(a1 + 912) + v16);
      v16 += 136;
      v38[30] = 0;
      v38[31] = 0;
      v38[32] = 0;
      v38[33] = 0;
    }
    while ( v17 < 2 * FIELD_U32(a1, 876) );
    v14 = *v6;
    v5 = v51;
  }
  FIELD_U32(a1, 36) = -1;
  FIELD_U32(a1, 40) = -1;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 2316) = 0;
  if ( v14 )
  {
    v39 = *v5;
    v40 = (_DWORD *)operator_new_8DE09C(saturated_mul(0x20u, *v5));
    v41 = v40 + 2;
    *v40 = 32;
    v40[1] = v39;
    if ( v39 )
    {
      v42 = 32 * v39 - 32;
      v43 = ((v42 >> 5) & 1) == 0;
      v44 = v42 >> 5;
      v45 = v40 + 2;
      if ( v43 )
      {
        v40[2] = off_60BFAC58;
        v40[7] = 0;
        v40[8] = 0;
        v40[9] = 0;
        v45 = v40 + 10;
      }
      if ( v44 )
      {
        do
        {
          *v45 = off_60BFAC58;
          v45[7] = 0;
          v45[6] = 0;
          v45[5] = 0;
          v45[8] = off_60BFAC58;
          v45[13] = 0;
          v45[14] = 0;
          v45[15] = 0;
          v45 += 16;
        }
        while ( v45 != &v41[8 * v39] );
      }
      v46 = FIELD_U32(a1, 868);
      FIELD_U32(a1, 2316) = v41;
      if ( v46 >= 1 )
      {
        v40[7] = 0;
        v40[8] = -1;
        v40[9] = -1;
        v40[3] = 0;
        v40[4] = 0;
        v40[5] = 0;
        if ( (int)*v5 >= 2 )
        {
          v47 = 0;
          do
          {
            v48 = (_DWORD *)(FIELD_U32(a1, 2316) + 32 * v47);
            v48[13] = 0;
            v48[14] = -1;
            v48[15] = -1;
            v48[9] = 0;
            v48[10] = 0;
            v48[11] = 0;
            v49 = v47 + 2 < FIELD_U32(a1, 868);
            ++v47;
          }
          while ( v49 );
        }
      }
    }
    else
    {
      FIELD_U32(a1, 2316) = v41;
    }
  }
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 856) = 0;
  FIELD_U32(a1, 2292) = 7;
  FIELD_U32(a1, 2296) = 1;
  FIELD_U32(a1, 2300) = 7;
  FIELD_U32(a1, 2304) = 1;
  FIELD_U32(a1, 2308) = 2;
  return a1;
}
