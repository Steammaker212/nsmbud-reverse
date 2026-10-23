/* sub_60434AE8
 * address: 0x60434AE8   size: 2080   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60434AE8(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v7; // r10
  int v8; // r2
  int v9; // r12
  int v10; // r1
  int v11; // r6
  int result; // r0
  int v13; // r4
  unsigned __int16 v14; // r0
  int v15; // r3
  int v16; // r3
  _BYTE *v17; // r2
  bool v18; // zf
  int v19; // r0
  _BYTE *v20; // r6
  int v21; // r0
  int v22; // r2
  int v23; // r7
  int v24; // r6
  char *v25; // r4
  int v26; // r0
  _DWORD *v27; // r2
  int v28; // r0
  _DWORD *v29; // r2
  int v30; // r0
  int v31; // r0
  int v32; // r7
  int v33; // r11
  int v34; // r10
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r1
  unsigned int v39; // r4
  _BYTE *v40; // r9
  int v41; // r2
  int v42; // r7
  bool v43; // zf
  int v44; // r0
  int v45; // r5
  int v46; // r4
  int v47; // r10
  int v48; // r8
  unsigned int v49; // r6
  int v50; // r0
  int v51; // r5
  int v52; // r0
  int v53; // r2
  float *v54; // r1
  _DWORD *v55; // r0
  int v56; // r5
  _DWORD *v57; // r7
  bool v58; // zf
  float v59; // r3
  _DWORD *v60; // r6
  int v61; // [sp+8h] [bp-C8h]
  int v62; // [sp+Ch] [bp-C4h]
  _BYTE *v63; // [sp+10h] [bp-C0h]
  int v64; // [sp+14h] [bp-BCh]
  int v65; // [sp+18h] [bp-B8h]
  int v66; // [sp+1Ch] [bp-B4h]
  int v67; // [sp+20h] [bp-B0h]
  int v68; // [sp+24h] [bp-ACh]
  int v69; // [sp+28h] [bp-A8h]
  int v70; // [sp+2Ch] [bp-A4h]
  int v71; // [sp+30h] [bp-A0h]
  int v72; // [sp+34h] [bp-9Ch]
  int v73; // [sp+38h] [bp-98h]
  int v75; // [sp+3Ch] [bp-94h]
  __int64 v76; // [sp+40h] [bp-90h] BYREF
  int v77; // [sp+48h] [bp-88h]
  int v78; // [sp+4Ch] [bp-84h]
  int v79; // [sp+50h] [bp-80h]
  char v80; // [sp+A1h] [bp-2Fh]
  char v81; // [sp+A2h] [bp-2Eh]
  char v82; // [sp+A3h] [bp-2Dh]

  v7 = *(_DWORD *)a3;
  v8 = FIELD_U32(a1, 244);
  v9 = FIELD_U32(a1, 72);
  v10 = FIELD_U32(a1, 48);
  v11 = 15 * v7;
  if ( FIELD_U32(a1, 240) > v7 )
    v8 += 120 * v7;
  v73 = v8;
  v13 = FIELD_U32(a1, 72) + 56 * v7;
  result = *(_DWORD *)v13;
  if ( (*(_DWORD *)(v10 + 4 * (*(_WORD *)(*(_DWORD *)v13 + 94) >> 5)) & (1 << (*(_WORD *)(*(_DWORD *)v13 + 94) & 0x1F))) != 0 )
  {
    v14 = FIELD_U16(result, 96);
    v15 = v14 >> 5;
    result = v14 & 0x1F;
    if ( (*(_DWORD *)(FIELD_U32(a1, 44) + 4 * v15) & (1 << result)) != 0 )
    {
      v16 = *(_DWORD *)(FIELD_U32(a1, 440) + 16);
      result = FIELD_U32(a1, 76);
      v17 = *(_BYTE **)(v16 + 3016 * v7 + 20);
      v68 = result;
      if ( FIELD_U8(a2, 25) )
      {
        if ( (FIELD_U8(a3, 8) & 2) == 0 )
          return result;
      }
      else if ( FIELD_U8(a2, 24) && (FIELD_U8(a3, 8) & 1) == 0 )
      {
        return result;
      }
      v69 = *(unsigned __int16 *)(*(_DWORD *)v13 + 94);
      v72 = v9;
      v65 = 15 * v7;
      result = 1;
      v18 = (FIELD_U8(a1, 316) & 1) == 0;
      if ( (FIELD_U8(a1, 316) & 1) != 0 )
      {
        v11 = FIELD_U32(a2, 40);
        v18 = v11 == 0;
      }
      if ( !v18 )
      {
        v19 = *(_DWORD *)v11;
        v20 = *(_BYTE **)(v16 + 3016 * v7 + 20);
        result = sub_60874EB8(v19, *(_DWORD *)(v9 + 56 * v7 + 32));
        v17 = v20;
        if ( result < 0 )
          return result;
        v16 = *(_DWORD *)(FIELD_U32(a1, 440) + 16);
      }
      v62 = result;
      v63 = v17;
      v71 = v13;
      v21 = *(_DWORD *)(v16 + 3016 * v7 + 16);
      FIELD_U32(a2, 12) = v21;
      v67 = a1;
      v22 = FIELD_U32(a1, 228);
      if ( FIELD_U32(a1, 224) > v7 )
        v22 += 28 * v7;
      FIELD_U32(a2, 16) = v22;
      sub_60420960(v21, FIELD_U32(a2, 44), FIELD_U32(v21, 96), 0);
      FIELD_U32(a2, 20) = -1;
      sub_60918D80(a3 + 24);
      v70 = a3;
      sub_60918D80(a3 + 608);
      v23 = FIELD_U32(a2, 44);
      v24 = a4[219];
      v25 = *(char **)(FIELD_U32(a2, 16) + 4);
      if ( a4[218] > *(_DWORD *)a2 )
        v24 += 96 * *(_DWORD *)a2;
      v76 = FIELD_U16(v24, 40) * (unsigned int)FIELD_U8(v24, 37) * FIELD_U32(v24, 16)
          + dword_60CC746C(v24 + 48);
      sub_6041FB58(v24, v23, &v76, v25, 0, FIELD_U32(v24, 12));
      v26 = FIELD_U32(a2, 16);
      v27 = *(_DWORD **)(v26 + 20);
      if ( *v27 != -1 )
      {
        v28 = a4[222];
        if ( !v28 )
          v28 = FIELD_U32(dword_60CD0A14, 28);
        sub_60920FDC(v28, FIELD_U32(a2, 44), v27, 15, 0);
        v26 = FIELD_U32(a2, 16);
      }
      v29 = *(_DWORD **)(v26 + 24);
      v30 = v72;
      if ( *v29 != -1 )
      {
        v31 = a4[223];
        if ( !v31 )
          v31 = FIELD_U32(dword_60CD0A14, 28);
        sub_60920FDC(v31, FIELD_U32(a2, 44), v29, 14, 0);
        v30 = v72;
      }
      v64 = v7;
      v61 = v30 + 56 * v7;
      v32 = FIELD_U8(v61, 10);
      if ( FIELD_U8(v61, 10) )
      {
        v33 = 0;
        v34 = 0;
        do
        {
          v35 = 0;
          if ( (FIELD_U8(v61, 4) & 1) != 0 )
          {
            v36 = FIELD_U32(v61, 20);
            if ( FIELD_U8(v61, 9) )
            {
              v35 = 0;
              if ( v36 )
                v35 = v36 + 72 * (v34 + FIELD_U8(v61, 11) * *(_DWORD *)a2);
            }
            else
            {
              if ( v36 )
                v36 += v33;
              v35 = v36;
            }
          }
          sub_609187FC(FIELD_U32(a2, 44), *(_DWORD *)(FIELD_U32(a2, 16) + 12), v35, 256, v34++);
          v33 += 72;
        }
        while ( v32 != v34 );
      }
      v37 = FIELD_U32(a2, 44);
      v38 = *(_DWORD *)(FIELD_U32(a2, 16) + 8);
      if ( *(_BYTE *)(*(_DWORD *)v71 + 102) )
      {
        sub_609187FC(v37, v38, *(_DWORD *)(FIELD_U32(a1, 68) + 32), *(_DWORD *)(FIELD_U32(a1, 68) + 36), 0);
        v39 = v64;
        v40 = v63;
      }
      else
      {
        v39 = v64;
        v40 = v63;
        v41 = 0;
        if ( (FIELD_U8(v61, 4) & 1) != 0 )
        {
          v42 = FIELD_U32(v61, 20);
          v43 = FIELD_U8(v61, 9) == 0;
          v41 = v42;
          if ( FIELD_U8(v61, 9) )
          {
            v41 = 0;
            v43 = v42 == 0;
          }
          if ( !v43 )
            v41 = v42 + 72 * FIELD_U8(v61, 11) * *(_DWORD *)a2;
        }
        sub_609187FC(v37, v38, v41, 256, 0);
      }
      if ( FIELD_U32(a2, 20) == v69 )
        goto LABEL_52;
      FIELD_U32(a2, 20) = v69;
      if ( (FIELD_U8(v70, 628) & 1) != 0 && !FIELD_U8(a1, 436) )
      {
        dword_60CC77F0(*(_DWORD *)(FIELD_U32(a2, 44) + 192), 1, v70 + 640);
      }
      else
      {
        v44 = FIELD_U32(a1, 244);
        if ( FIELD_U32(a1, 240) > v39 )
          v44 += 8 * v65;
        sub_60435A24(3016, a2, v68 + 72 * v69, *(_DWORD *)(FIELD_U32(a1, 440) + 16) + 3016 * v39, v44 + 96);
      }
      if ( FIELD_U8(a1, 308) )
        goto LABEL_52;
      if ( FIELD_U8(a2, 24) )
      {
        sub_60439B18(*(_DWORD *)(FIELD_U32(a1, 440) + 12) + 776 * v69 + 456, FIELD_U32(a2, 44), 1, -1);
        sub_60440288(
          dword_60C9CC80,
          FIELD_U32(a2, 44),
          *(unsigned __int8 *)(*(_DWORD *)(FIELD_U32(a1, 440) + 12) + 776 * v69 + 462),
          0);
        v53 = FIELD_U32(v70, 12);
        if ( v53 >= 0 )
        {
          if ( FIELD_U32(a2, 32) != v53 )
          {
            v55 = (_DWORD *)(a2 + 36);
            v54 = (float *)(v70 + 16);
            goto LABEL_83;
          }
          if ( FIELD_F32(a2, 36) != FIELD_F32(v70, 16) )
          {
            v54 = (float *)(v70 + 16);
            v55 = (_DWORD *)(a2 + 36);
LABEL_83:
            FIELD_U32(a2, 32) = v53;
            v59 = *v54;
            *v55 = *(_DWORD *)v54;
            v60 = (_DWORD *)a4[225];
            if ( a4[224] > *(_DWORD *)a2 )
              v60 += 32 * *(_DWORD *)a2;
            (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)*v60 + 80))(*v60, FIELD_U32(a2, 44), v59);
          }
        }
      }
      else
      {
        sub_6090B350(&v76);
        v80 = 1;
        v81 = 0;
        v82 = 0;
        BYTE2(v76) = 1;
        LOBYTE(v76) = 1;
        sub_6090BC48(&v76, FIELD_U32(a2, 44));
        nullsub_112(&v76, FIELD_U32(a2, 44));
        sub_6090B8B4(&v76, FIELD_U32(a2, 44));
      }
LABEL_52:
      v66 = a2;
      if ( (FIELD_U8(v70, 44) & 1) != 0 )
      {
        dword_60CC77F0(*(_DWORD *)(FIELD_U32(a2, 44) + 192), 1, v70 + 56);
      }
      else
      {
        v45 = FIELD_U32(a2, 44);
        v46 = FIELD_U32(v73, 112);
        sub_609592FC(v40, v45);
        if ( v46 )
        {
          v47 = (unsigned __int8)*v40;
          if ( *v40 )
          {
            v48 = 0;
            v49 = 0;
            v75 = FIELD_U32(v66, 44) + 8;
            do
            {
              v78 = 0;
              v77 = 0;
              v76 = 0;
              v50 = FIELD_U32(v73, 116);
              if ( FIELD_U32(v73, 112) > v49 )
                v50 += v48;
              sub_60835528(v50, &v76);
              v51 = sub_609593A0(v40, v49);
              v52 = sub_609593B0(v40, v49);
              sub_60835D28(v75, v49++, &v76, v51, v52);
              v48 += 72;
            }
            while ( v47 != v49 );
          }
        }
        else
        {
          sub_60959318(v40, v45);
        }
      }
      v56 = *(_DWORD *)(*(_DWORD *)v71 + 32);
      if ( v62 )
        return sub_608722BC(v56, FIELD_U32(v66, 44) + 8, 0, FIELD_U16(v56, 52), 1);
      v57 = *(_DWORD **)(v66 + 40);
      v58 = v57 == 0;
      if ( v57 )
        v58 = (FIELD_U32(v67, 316) & 1) == 0;
      if ( v58 || FIELD_U16(v56, 52) < 2u )
      {
        return sub_608722BC(v56, FIELD_U32(v66, 44) + 8, 0, FIELD_U16(v56, 52), 1);
      }
      else
      {
        if ( (*(_DWORD *)(v67 + 4 * (v64 >> 5) + 392) & (1 << (v64 & 0x1F))) != 0 )
        {
          sub_60875CD8(v71, FIELD_U32(v67, 68), 0);
          if ( (unsigned int)v64 >> 6 <= 4 )
            *(_DWORD *)(v67 + 4 * ((unsigned int)v64 >> 5) + 392) &= ~(1 << (v64 & 0x1F));
        }
        v76 = 0xFFFFFFFF00000000LL;
        v77 = 0;
        v78 = 0;
        v79 = 0;
        result = sub_60875F68(v71, &v76, *v57, 0);
        if ( result == 1 )
        {
          do
          {
            sub_608722BC(v56, FIELD_U32(v66, 44) + 8, v77, v78, 1);
            result = sub_60875F68(v71, &v76, *v57, 0);
          }
          while ( result );
        }
      }
    }
  }
  return result;
}
