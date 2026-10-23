/* sub_60866798
 * address: 0x60866798   size: 2068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60866798(int a1, int a2, _DWORD *a3, int a4)
{
  int (__fastcall *v7)(char *, _DWORD, _DWORD); // r3
  _DWORD *v8; // r0
  unsigned int v9; // r3
  int v10; // r0
  char v11; // r0
  int v12; // r6
  int v13; // r7
  unsigned int v14; // r0
  _DWORD *v15; // r2
  int v16; // r1
  unsigned int v17; // r3
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r2
  unsigned int v22; // r1
  int v23; // r2
  int v24; // r1
  unsigned __int8 *v25; // r2
  int v26; // t1
  unsigned int v27; // r3
  unsigned int v28; // r7
  _BOOL4 v29; // r6
  int v30; // r1
  _BOOL4 v31; // r1
  unsigned int v32; // r7
  unsigned int v33; // r6
  unsigned int v34; // r6
  unsigned int v35; // r6
  unsigned int v36; // r6
  bool v37; // zf
  unsigned int v38; // r2
  int v39; // r1
  int v40; // r2
  int v41; // r1
  int v42; // t1
  char v43; // r0
  int v44; // r0
  int result; // r0
  bool v46; // zf
  unsigned int v47; // r1
  int v48; // r12
  int v49; // r2
  int v50; // r3
  unsigned int v51; // r1
  _DWORD *v52; // r0
  unsigned int v53; // r1
  char v54; // r0
  int v55; // r0
  int v56; // r0
  unsigned int v57; // r0
  int v58; // r1
  int v59; // r0
  char v60[224]; // [sp+8h] [bp-180h] BYREF
  _DWORD v61[25]; // [sp+E8h] [bp-A0h] BYREF
  char src[4]; // [sp+14Ch] [bp-3Ch] BYREF
  int v63; // [sp+150h] [bp-38h]
  int v64; // [sp+154h] [bp-34h]
  int v65; // [sp+158h] [bp-30h]
  int v66; // [sp+15Ch] [bp-2Ch]
  char v67; // [sp+162h] [bp-26h] BYREF

  v67 = 0;
  FIELD_U32(a1, 24) = 0;
  sub_60864F80((int)src);
  v7 = (int (__fastcall *)(char *, _DWORD, _DWORD))a3[14];
  if ( v7 && v7(src, a3[16], a3[15]) == 1 )
  {
    strcpy(&v67, src);
    v8 = (_DWORD *)sub_60855BC8(16);
    FIELD_U32(a1, 40) = v8;
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    **(_DWORD **)(a1 + 40) = v64;
    *(_DWORD *)(FIELD_U32(a1, 40) + 4) = v66;
    *(_DWORD *)(FIELD_U32(a1, 40) + 8) = v65;
LABEL_71:
    v13 = -1;
LABEL_72:
    v12 = -1;
    goto LABEL_73;
  }
  v9 = FIELD_U32(a1, 16);
  if ( (v9 & 0x10000) != 0 )
  {
    if ( FIELD_U8(a4, 25) )
    {
      v12 = 0;
      v13 = 110;
    }
    else if ( (v9 & 0x1C0) != 0 )
    {
      v14 = FIELD_U32(a1, 12);
      v15 = (_DWORD *)(FIELD_U32(a1, 20)
                     + ((8 * v14) & 0x18)
                     + (v14 & 0x30)
                     + ((v14 >> 6) & 8)
                     + 4 * ((v14 >> 10) & 3)
                     + 4 * ((v14 >> 6) & 7)
                     + ((v14 >> 12) & 8)
                     + (-((v14 >> 12) & 1) & 0xC)
                     + (-(HIWORD(v14) & 1) & 0x1C)
                     + 20 * (((v14 >> 13) & 3) + ((v14 >> 2) & 3)));
      v16 = (unsigned __int8)v15[3] >> 4;
      v17 = (v9 >> 6) & 7;
      v18 = v15[3] & 0xF;
      if ( v17 > 1 )
      {
        if ( v16 < (unsigned int)((unsigned __int8)v15[7] >> 4) )
          v16 = (unsigned __int8)v15[7] >> 4;
        if ( v18 < (v15[7] & 0xFu) )
          v18 = v15[7] & 0xF;
        if ( v17 != 2 )
        {
          if ( v16 < (unsigned __int8)v15[11] >> 4 )
            v16 = (unsigned __int8)v15[11] >> 4;
          if ( v18 < (v15[11] & 0xF) )
            v18 = v15[11] & 0xF;
          if ( v17 >= 4 )
          {
            if ( v16 < (unsigned __int8)v15[15] >> 4 )
              v16 = (unsigned __int8)v15[15] >> 4;
            if ( v18 < (v15[15] & 0xF) )
              v18 = v15[15] & 0xF;
            if ( v17 != 4 )
            {
              if ( v16 < (unsigned __int8)v15[19] >> 4 )
                v16 = (unsigned __int8)v15[19] >> 4;
              if ( v18 < (v15[19] & 0xF) )
                v18 = v15[19] & 0xF;
              if ( v17 >= 6 )
              {
                if ( v16 < (unsigned __int8)v15[23] >> 4 )
                  v16 = (unsigned __int8)v15[23] >> 4;
                if ( v18 < (v15[23] & 0xF) )
                  v18 = v15[23] & 0xF;
                if ( v17 == 7 )
                {
                  v19 = v15[27];
                  v20 = (unsigned __int8)v19 >> 4;
                  v21 = v19 & 0xF;
                  if ( v16 < v20 )
                    v16 = v20;
                  if ( v18 < v21 )
                    v18 = v21;
                }
              }
            }
          }
        }
      }
      v12 = v16 + 100;
      v13 = v18 + 100;
    }
    else
    {
      v13 = 100;
      v12 = 100;
    }
  }
  else
  {
    if ( (v9 & 0x20000) != 0 )
    {
      v12 = 0;
      v13 = 111;
      goto LABEL_73;
    }
    v10 = FIELD_U32(a1, 16) & 3;
    if ( (v9 & 3) == 0 )
    {
      v11 = 0;
      goto LABEL_70;
    }
    if ( v10 == 1 )
    {
      v11 = 1;
LABEL_70:
      FIELD_U8(a1, 49) = v11;
      goto LABEL_71;
    }
    if ( (v9 & 0x1C0) == 0 )
      goto LABEL_67;
    v22 = FIELD_U32(a1, 12);
    v23 = FIELD_U32(a1, 20);
    v24 = ((8 * v22) & 0x18)
        + (v22 & 0x30)
        + ((v22 >> 6) & 8)
        + 4 * ((v22 >> 10) & 3)
        + 4 * ((v22 >> 2) & 3 | (4 * ((v22 >> 2) & 3)))
        + (-((v22 >> 12) & 1) & 0xC);
    v26 = *(unsigned __int8 *)(v23 + v24);
    v25 = (unsigned __int8 *)(v23 + v24);
    v27 = (v9 >> 6) & 7;
    v28 = v26 - 11;
    v29 = (unsigned int)(v26 - 11) > 2;
    v30 = (unsigned int)(v26 - 11) < 3;
    if ( v27 >= 2 && v29 )
    {
      v31 = v28 < 3;
      v32 = v25[4] - 11;
      v30 = v31 || v32 < 3;
      if ( v27 >= 3 && v32 > 2 )
      {
        v33 = v25[8] - 11;
        v30 |= v33 < 3;
        if ( v27 >= 4 && v33 > 2 )
        {
          v34 = v25[12] - 11;
          v30 |= v34 < 3;
          if ( v27 >= 5 && v34 > 2 )
          {
            v35 = v25[16] - 11;
            v30 |= v35 < 3;
            if ( v27 >= 6 && v35 > 2 )
            {
              v36 = v25[20] - 11;
              v37 = v27 == 7;
              v30 |= v36 < 3;
              if ( v27 == 7 )
                v37 = v36 > 2;
              if ( v37 )
                v30 |= (unsigned int)v25[24] - 11 < 3;
            }
          }
        }
      }
    }
    if ( v30 != 1 )
    {
LABEL_67:
      v38 = FIELD_U32(a1, 12);
      v39 = FIELD_U32(a1, 20);
      v40 = ((8 * v38) & 0x18)
          + (v38 & 0x30)
          + ((v38 >> 6) & 8)
          + 4 * ((v38 >> 10) & 3)
          + 20 * ((v38 >> 2) & 3)
          + (-((v38 >> 12) & 1) & 0xC);
      v42 = *(unsigned __int8 *)(v39 + v40);
      v41 = v39 + v40;
      v13 = v42;
      if ( v10 == 3 )
      {
        v12 = FIELD_U8(v41, 4);
        goto LABEL_73;
      }
      v11 = v13 + 2;
      goto LABEL_70;
    }
    if ( v10 != 3 )
    {
      v13 = -1;
      if ( v10 == 2 )
        FIELD_U8(a1, 49) = 13;
      goto LABEL_72;
    }
    v57 = FIELD_U32(a1, 12);
    v58 = FIELD_U32(a1, 20);
    v59 = ((8 * v57) & 0x18)
        + (v57 & 0x30)
        + ((v57 >> 6) & 8)
        + 4 * ((v57 >> 10) & 3)
        + 20 * ((v57 >> 2) & 3)
        + (-((v57 >> 12) & 1) & 0xC);
    v13 = *(unsigned __int8 *)(v58 + v59);
    v12 = *(unsigned __int8 *)(v58 + v59 + 4);
  }
LABEL_73:
  if ( v67 )
  {
    FIELD_U32(a1, 24) = sub_608576F0(FIELD_U32(a4, 20));
    v43 = 0;
LABEL_75:
    FIELD_U8(a1, 51) = v43;
    FIELD_U8(a1, 49) = 15;
    goto LABEL_76;
  }
  v46 = v13 == -1;
  if ( v13 != -1 )
    v46 = v12 == -1;
  if ( !v46 )
  {
    if ( (v13 & 0xFFFFFFFE) == 0x6E )
    {
      memset(v61, 0, 96);
      v47 = FIELD_U32(a1, 12);
      v48 = FIELD_U32(a1, 20);
      v49 = ((8 * v47) & 0x18)
          + (v47 & 0x30)
          + ((v47 >> 6) & 8)
          + 4 * ((v47 >> 10) & 3)
          + 4 * ((v47 >> 6) & 7)
          + ((v47 >> 12) & 8)
          + (-((v47 >> 12) & 1) & 0xC)
          + (-(HIWORD(v47) & 1) & 0x1C);
      v50 = 20 * (((v47 >> 13) & 3) + ((v47 >> 2) & 3));
      if ( v13 == 110 )
      {
        v51 = FIELD_U32(a1, 16);
        if ( (v51 & 0x1C0) != 0 )
        {
          v52 = (_DWORD *)(v48 + v49 + v50);
          v61[0] = *v52;
          v61[1] = v52[1];
          v61[2] = v52[2];
          v61[3] = v52[3];
          v53 = (v51 >> 6) & 7;
          if ( v53 > 1 )
          {
            v61[4] = v52[4];
            v61[5] = v52[5];
            v61[6] = v52[6];
            v61[7] = v52[7];
            if ( v53 != 2 )
            {
              v61[8] = v52[8];
              v61[9] = v52[9];
              v61[10] = v52[10];
              v61[11] = v52[11];
              if ( v53 >= 4 )
              {
                v61[12] = v52[12];
                v61[13] = v52[13];
                v61[14] = v52[14];
                v61[15] = v52[15];
                if ( v53 != 4 )
                {
                  v61[16] = v52[16];
                  v61[17] = v52[17];
                  v61[18] = v52[18];
                  v61[19] = v52[19];
                  if ( v53 >= 6 )
                  {
                    v61[20] = v52[20];
                    v61[21] = v52[21];
                    v61[22] = v52[22];
                    v61[23] = v52[23];
                    if ( v53 == 7 )
                    {
                      v61[24] = v52[24];
                      *(_DWORD *)src = v52[25];
                      v63 = v52[26];
                      v64 = v52[27];
                    }
                  }
                }
              }
            }
          }
        }
        if ( a4 )
          v54 = FIELD_U8(a4, 25) << 7;
        else
          v54 = 0;
        FIELD_U8(a1, 50) = FIELD_U8(a1, 50) & 0x7F | v54;
      }
      else
      {
        qmemcpy(v61, (const void *)(v48 + ((v47 >> 12) & 0x10) * ((v47 >> 6) & 7) + v50 + v49), 0x60u);
      }
      X__X__X__X_ref(v60, 224, v13, v12, v61);
      v56 = sub_608576F0(FIELD_U32(a4, 20));
      FIELD_U32(a1, 24) = v56;
      v43 = sub_6085F5E4(*(int **)(v56 + 28), (int)v61);
    }
    else
    {
      sub_6085F164(v60, v13, v12);
      v55 = sub_608576F0(FIELD_U32(a4, 20));
      FIELD_U32(a1, 24) = v55;
      v43 = sub_6085F594(*(_WORD **)(v55 + 28), v13, v12);
    }
    goto LABEL_75;
  }
  result = FIELD_U8(a1, 49);
  if ( result == 15 )
  {
    if ( !a4 )
    {
      v44 = 0;
      goto LABEL_77;
    }
LABEL_76:
    v44 = FIELD_U8(a4, 24) << 6;
LABEL_77:
    result = FIELD_U8(a1, 50) & 0xBF | v44;
    FIELD_U8(a1, 50) = result;
  }
  return result;
}
