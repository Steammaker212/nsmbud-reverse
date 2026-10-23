/* sub_60447914
 * address: 0x60447914   size: 1360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60447914(int a1, int a2, char a3, void *a4)
{
  int v4; // r10
  int v5; // r1
  _BYTE *v6; // r5
  _DWORD *v7; // r6
  int v8; // r7
  int result; // r0
  bool v10; // zf
  int v11; // r6
  _WORD *v12; // r0
  int v13; // r1
  int v14; // r3
  char v15; // r1
  _DWORD *v16; // r6
  int v17; // r5
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int v21; // t1
  int v22; // r6
  _BYTE *v23; // r8
  _DWORD *v24; // r1
  int v25; // r1
  _DWORD *v26; // r9
  int v27; // r5
  _DWORD *v28; // r7
  _DWORD *v29; // r6
  _DWORD *v30; // r5
  int v31; // r6
  _DWORD *v32; // r4
  _DWORD *v33; // r7
  int v34; // r0
  _DWORD *v35; // r7
  int v36; // r5
  int v37; // r6
  int v38; // r0
  int v39; // r1
  int v40; // t1
  unsigned int v41; // r9
  int v42; // r4
  int v43; // r0
  int v44; // r0
  int v45; // [sp+0h] [bp-2190h]
  _DWORD *v46; // [sp+10h] [bp-2180h]
  _WORD *v48; // [sp+18h] [bp-2178h]
  _DWORD *v49; // [sp+1Ch] [bp-2174h]
  _WORD *v50; // [sp+20h] [bp-2170h]
  _DWORD *v51; // [sp+24h] [bp-216Ch]
  int v52; // [sp+28h] [bp-2168h]
  int v53; // [sp+2Ch] [bp-2164h]
  _WORD *v54; // [sp+38h] [bp-2158h]
  int v56; // [sp+40h] [bp-2150h]
  int v57; // [sp+44h] [bp-214Ch]
  _DWORD v58[65]; // [sp+48h] [bp-2148h] BYREF
  int v59; // [sp+14Ch] [bp-2044h]
  int v60; // [sp+150h] [bp-2040h] BYREF
  int v61; // [sp+154h] [bp-203Ch]
  int v62; // [sp+158h] [bp-2038h]
  int v63; // [sp+15Ch] [bp-2034h]
  _DWORD v64[2059]; // [sp+164h] [bp-202Ch] BYREF

  FIELD_U16(a1, 2482) = 0;
  FIELD_U32(a1, 2500) = 0;
  FIELD_U8(a1, 2481) = FIELD_U8(a2, 20);
  v50 = (_WORD *)(a1 + 2482);
  FIELD_U32(a1, 2504) = 0;
  v52 = 1;
  if ( (a3 & 1) == 0 )
    v52 = FIELD_U8(a1, 2480) & 1;
  v4 = 0;
  v53 = FIELD_U32(a2, 12) + 776 * *(unsigned __int16 *)(FIELD_U32(a1, 4) + 94);
  v51 = (_DWORD *)(v53 + 12);
  v57 = a1 + 2648;
  v46 = (_DWORD *)(a1 + 20);
  v49 = (_DWORD *)(a1 + 24);
  v48 = (_WORD *)(a1 + 28);
  do
  {
    v5 = a1 + 28 * v4;
    FIELD_U8(v5, 9) = v4;
    v6 = (_BYTE *)(v5 + 9);
    FIELD_U16(v5, 28) = 0;
    v54 = (_WORD *)(v5 + 28);
    FIELD_U32(v5, 12) = 0;
    v7 = (_DWORD *)(v5 + 12);
    v56 = v5;
    FIELD_U32(v5, 16) = 0;
    v8 = v5 + 16;
    sub_609588B8(v57);
    sub_6043F188(v64);
    v63 = 0;
    v62 = 0;
    v61 = 0;
    v60 = 0;
    sub_60428D84(v53, &v60, (int)v64, v4 / 4, v4 % 4, a1);
    result = v61;
    v10 = v61 == 0;
    if ( v61 )
    {
      *v7 = v61;
      v10 = v62 == 0;
    }
    if ( !v10 )
    {
      if ( v52 )
      {
        v11 = FIELD_U32(result, 184);
        if ( v11 )
        {
          sead__CriticalSection__lock(FIELD_U32(result, 184));
          v45 = 0;
          sub_60420378(v63, v61, v62);
          sead__CriticalSection__unlock(v11);
        }
      }
      else if ( v4 )
      {
        v12 = v48;
        v13 = 0;
        while ( 1 )
        {
          v14 = *((_DWORD *)v12 - 3);
          if ( v63 == v14 )
            break;
          ++v13;
          v12 += 14;
          if ( v4 == v13 )
            goto LABEL_19;
        }
        *(_DWORD *)v8 = v14;
        *v6 = *((_BYTE *)v12 - 19);
        *v54 = *v12;
        v15 = FIELD_U8(v56, 8);
        if ( (v15 & 1) == 0 )
          FIELD_U32(v56, 20) = *((_DWORD *)v12 - 2);
        if ( (v15 & 2) == 0 )
          FIELD_U32(v56, 24) = *((_DWORD *)v12 - 1);
      }
LABEL_19:
      *(_DWORD *)v8 = v63;
      result = (unsigned __int8)*v6;
      if ( result == v4 )
      {
        Undefined_ref_9593D4(v58);
        Undefined_ref_9594C4(v58, *v51, v61, v62, v45);
        if ( (v4 & 0xFFFFFFFC) != 0x40 )
          FIELD_U32(a1, 2504) |= *(_DWORD *)(*(_DWORD *)v8 + 16);
        if ( v4 )
        {
          v16 = v49;
          v17 = 0;
          v18 = 1;
          while ( 1 )
          {
            v19 = sub_609598CC(v58, *v16);
            v21 = *v16;
            v16 += 7;
            v20 = v21;
            if ( v19 )
              break;
            v10 = v4 == v18++;
            if ( v10 )
              goto LABEL_28;
          }
          v17 = v20;
LABEL_28:
          v22 = a1 + 28 * v4;
          v23 = (_BYTE *)(v56 + 8);
          if ( v17 )
          {
            v24 = (_DWORD *)(v56 + 24);
            if ( (FIELD_U8(v56, 8) & 2) == 0 )
            {
              *v24 = v17;
              v25 = a1;
              goto LABEL_43;
            }
            v30 = (_DWORD *)*v24;
            v31 = 0;
            *(_DWORD *)*v24 = v58[0];
            do
            {
              v32 = &v58[v31];
              v33 = &v30[v31];
              v30[v31 + 1] = v58[v31 + 1];
              sead__SafeStringBase__operator_assign((int)&v30[v31 + 2], (int)&v58[v31 + 2]);
              v31 += 4;
              *((_BYTE *)v33 + 16) = *((_BYTE *)v32 + 16);
            }
            while ( v31 != 64 );
            v30[65] = v59;
LABEL_42:
            v25 = a1;
            v22 = a1 + 28 * v4;
LABEL_43:
            v34 = v62;
            if ( v52 )
              v34 = 0;
            Undefined_ref_958A10(v57, *v51, FIELD_U32(v25, 4), v61, v34);
            if ( v52 )
            {
              if ( (*v23 & 1) == 0 )
                FIELD_U32(v22, 20) = v57;
              goto LABEL_66;
            }
            if ( v4 )
            {
              v35 = v46;
              v36 = 0;
              v37 = 1;
              while ( 1 )
              {
                v38 = sub_6095926C(v57, *v35);
                v40 = *v35;
                v35 += 7;
                v39 = v40;
                if ( v38 )
                  break;
                v10 = v4 == v37++;
                if ( v10 )
                  goto LABEL_55;
              }
              v36 = v39;
LABEL_55:
              v22 = a1 + 28 * v4;
              if ( v36 )
              {
                if ( (*v23 & 1) == 0 )
                  FIELD_U32(v56, 20) = v36;
                goto LABEL_65;
              }
              if ( (*v23 & 1) == 0 )
              {
LABEL_62:
                v41 = (sub_609593C0(v57) + 63) & 0xFFFFFFC0;
                v42 = operator_new_8DE2C8(v41 + 368, (int)a4, 8);
                v43 = sub_60958724(v42 + v41);
                FIELD_U32(v22, 20) = v43;
                if ( v41 )
                  sub_609589F4(v43, v42, v41);
                *v23 |= 1u;
              }
            }
            else if ( (*v23 & 1) == 0 )
            {
              goto LABEL_62;
            }
LABEL_65:
            Undefined_ref_958A10(FIELD_U32(v22, 20), *v51, FIELD_U32(a1, 4), v61, v62);
            v44 = calc_instance_ref(a1, v4 / 4, v4 % 4, 0);
            *v54 = v44;
            FIELD_U16(v22, 30) = FIELD_U32(a1, 2500);
            FIELD_U32(a1, 2500) += FIELD_U8(a1, 2481) * v44;
LABEL_66:
            result = (unsigned __int16)*v50 + 1;
            *v50 = result;
            goto LABEL_67;
          }
          if ( (FIELD_U8(v56, 8) & 2) == 0 )
            goto LABEL_34;
        }
        else
        {
          v22 = v56;
          v23 = (_BYTE *)(v56 + 8);
          if ( (FIELD_U8(v56, 8) & 2) == 0 )
          {
LABEL_34:
            v26 = (_DWORD *)operator_new_8DE25C(0x108u, a4, 4);
            Undefined_ref_9593D4(v26);
            FIELD_U32(v22, 24) = v26;
            *v23 |= 2u;
            goto LABEL_36;
          }
        }
        v26 = *(_DWORD **)(v22 + 24);
LABEL_36:
        v27 = 0;
        *v26 = v58[0];
        do
        {
          v28 = &v58[v27];
          v29 = &v26[v27];
          v26[v27 + 1] = v58[v27 + 1];
          sead__SafeStringBase__operator_assign((int)&v26[v27 + 2], (int)&v58[v27 + 2]);
          v27 += 4;
          *((_BYTE *)v29 + 16) = *((_BYTE *)v28 + 16);
        }
        while ( v27 != 64 );
        v26[65] = v59;
        goto LABEL_42;
      }
    }
LABEL_67:
    ++v4;
  }
  while ( v4 != 88 );
  return result;
}
