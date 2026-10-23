/* sub_60860664
 * address: 0x60860664   size: 1480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60860664(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6)
{
  _BYTE *v8; // r11
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r7
  char v22; // r1
  char v23; // r0
  char *v24; // r5
  unsigned int v25; // r6
  char v26; // r0
  char v27; // r2
  char v28; // r3
  bool v29; // zf
  char v30; // r0
  char v31; // r2
  char v32; // r3
  char v33; // r0
  char v34; // r2
  char v35; // r3
  char v36; // r2
  char v37; // r3
  char v38; // r0
  int v39; // r11
  int v40; // r5
  int v41; // r6
  int v42; // r0
  int v43; // r6
  int v44; // r5
  int v45; // r0
  int v46; // r2
  int v47; // r1
  _DWORD *v48; // r2
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r5
  int v53; // r9
  int v54; // r11
  int v55; // r6
  int v56; // r7
  int v57; // r0
  int v58; // r0
  int v59; // r1
  int v60; // r11
  int v61; // r10
  int v62; // r5
  int v63; // r6
  int v64; // r0
  int v65; // r0
  int v66; // r1
  unsigned int v67; // r5
  int v68; // r0
  __int64 v69; // r0
  int v71; // [sp+Ch] [bp-3Ch]
  int v72; // [sp+10h] [bp-38h]
  int *v75; // [sp+1Ch] [bp-2Ch]

  ((void (__fastcall *)(int, int, int))loc_60857B80)(a1, a4, a6);
  v8 = (_BYTE *)(a1 + 204);
  *(_DWORD *)a1 = off_60C5A574;
  FIELD_U8(a1, 212) = 0;
  FIELD_U8(a1, 214) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U16(a1, 184) = 0;
  FIELD_U16(a1, 182) = 0;
  FIELD_U16(a1, 180) = 0;
  FIELD_U16(a1, 178) = 0;
  FIELD_U16(a1, 176) = 0;
  FIELD_U16(a1, 174) = 0;
  FIELD_U16(a1, 172) = 0;
  FIELD_U16(a1, 170) = 0;
  sub_60864F9C(a1 + 204, v9, v10, v11);
  FIELD_U8(a1, 189) = -1;
  FIELD_U8(a1, 188) = -1;
  FIELD_U8(a1, 191) = -1;
  FIELD_U8(a1, 190) = -1;
  sub_60864F9C(a1 + 204, v12, v13, v14);
  FIELD_U8(a1, 193) = -1;
  FIELD_U8(a1, 192) = -1;
  FIELD_U8(a1, 195) = -1;
  FIELD_U8(a1, 194) = -1;
  sub_60864F9C(a1 + 204, v15, v16, v17);
  FIELD_U8(a1, 197) = -1;
  FIELD_U8(a1, 196) = -1;
  FIELD_U8(a1, 199) = -1;
  FIELD_U8(a1, 198) = -1;
  sub_60864F9C(a1 + 204, v18, v19, v20);
  FIELD_U8(a1, 200) = -1;
  FIELD_U8(a1, 203) = -1;
  FIELD_U8(a1, 202) = -1;
  FIELD_U8(a1, 201) = -1;
  FIELD_U16(a1, 212) = 0;
  FIELD_U8(a1, 214) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 216) = 0;
  v75 = (int *)(a1 + 216);
  FIELD_U32(a1, 220) = 0;
  if ( a5 )
  {
    v21 = a5;
    if ( FIELD_U16(a6, 44) )
      v21 = a4;
  }
  else
  {
    v21 = a4;
  }
  FIELD_U8(a1, 212) = (FIELD_U8(v21, 101) >> 2) & 3;
  v22 = FIELD_U8(v21, 101);
  if ( (v22 & 2) != 0 )
  {
    v23 = 1;
    FIELD_U8(a1, 214) = 1;
    v22 = FIELD_U8(v21, 101);
    if ( (v22 & 1) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v23 = 0;
  if ( (FIELD_U8(v21, 101) & 1) != 0 )
  {
LABEL_10:
    v23 |= 2u;
    FIELD_U8(a1, 214) = v23;
    v22 = FIELD_U8(v21, 101);
  }
LABEL_11:
  if ( (v22 & 0x10) != 0 )
    FIELD_U8(a1, 214) = v23 | 4;
  v24 = (char *)(v21 + FIELD_U32(v21, 104));
  v25 = (unsigned __int8)v24[18];
  if ( v25 >= 3 )
    v25 = 3;
  if ( v25 )
    sub_60864FD8(a1 + 204, v25);
  sub_60860C30(a1, v21);
  v26 = *v24;
  v27 = v24[2];
  v28 = v24[3];
  v29 = v25 == 0;
  FIELD_U8(a1, 189) = v24[1];
  FIELD_U8(a1, 188) = v26;
  FIELD_U8(a1, 191) = v28;
  FIELD_U8(a1, 190) = v27;
  v30 = v24[4];
  v31 = v24[6];
  v32 = v24[7];
  FIELD_U8(a1, 193) = v24[5];
  FIELD_U8(a1, 192) = v30;
  FIELD_U8(a1, 195) = v32;
  FIELD_U8(a1, 194) = v31;
  v33 = v24[8];
  v34 = v24[10];
  v35 = v24[11];
  FIELD_U8(a1, 197) = v24[9];
  FIELD_U8(a1, 196) = v33;
  FIELD_U8(a1, 199) = v35;
  FIELD_U8(a1, 198) = v34;
  v36 = v24[14];
  v37 = v24[15];
  v38 = v24[12];
  FIELD_U8(a1, 201) = v24[13];
  FIELD_U8(a1, 200) = v38;
  FIELD_U8(a1, 203) = v37;
  FIELD_U8(a1, 202) = v36;
  if ( v25 )
    v29 = *v8 == 0;
  if ( !v29 )
    sub_6086516C(v8, v24 + 20, v25);
  v39 = sub_60865204(FIELD_U32(a6, 32), *(unsigned __int16 *)(a4 + FIELD_U32(a4, 104) + 16));
  v40 = 0;
  v41 = 0;
  if ( a5 )
    v41 = sub_60865204(FIELD_U32(a6, 36), *(unsigned __int16 *)(a5 + FIELD_U32(a5, 104) + 16));
  v42 = sub_60855BC8(52);
  if ( v42 )
    v40 = sub_608654EC(v42, a2, a3, v39, v41, a6);
  v43 = a1;
  FIELD_U32(a1, 220) = v40;
  FIELD_U8(a1, 213) = 0;
  FIELD_U32(a1, 216) = 0;
  v44 = FIELD_U8(v21, 100);
  if ( FIELD_U8(v21, 100) )
  {
    FIELD_U8(a1, 213) = 0;
    v45 = sub_60855BC8(8 * v44);
    if ( v45 )
    {
      v46 = 0;
      if ( (v44 & 1) != 0 )
      {
        v46 = 1;
        *(_BYTE *)v45 = 0;
        FIELD_U32(v45, 4) = 0;
      }
      if ( v44 != 1 )
      {
        v47 = v44 - v46;
        v48 = (_DWORD *)(v45 + 8 * v46 + 12);
        do
        {
          *((_BYTE *)v48 - 12) = 0;
          *(v48 - 2) = 0;
          *((_BYTE *)v48 - 4) = 0;
          *v48 = 0;
          v48 += 4;
          v47 -= 2;
        }
        while ( v47 );
      }
      FIELD_U32(a1, 216) = v45;
      FIELD_U8(a1, 213) = v44;
    }
    else
    {
      v45 = 0;
      *v75 = 0;
    }
    v49 = FIELD_U32(a4, 108);
    v50 = FIELD_U32(v21, 108);
    if ( a5 )
      v51 = a5 + FIELD_U32(a5, 108);
    else
      v51 = 0;
    v72 = v51;
    if ( FIELD_S8(a1, 213) >= 1 )
    {
      if ( a5 )
      {
        v52 = v21 + v50;
        v53 = 0;
        v71 = a4 + v49;
        while ( 1 )
        {
          v54 = v21;
          v55 = 0;
          *(_BYTE *)(v45 + 8 * v53) = *(_BYTE *)(v21 + *(_DWORD *)(v52 + 4 * v53) + 2);
          if ( FIELD_U8(a4, 100) > v53 )
            v55 = sub_60865204(FIELD_U32(a6, 32), *(unsigned __int16 *)(a4 + *(_DWORD *)(v71 + 4 * v53)));
          v56 = sub_60865204(FIELD_U32(a6, 36), *(unsigned __int16 *)(a5 + *(_DWORD *)(v72 + 4 * v53)));
          v57 = sub_60855BC8(52);
          v58 = v57 ? sub_608654EC(v57, a2, a3, v55, v56, a6) : 0;
          v43 = a1;
          v21 = v54;
          v59 = FIELD_U32(a1, 216) + 8 * v53++;
          FIELD_U32(v59, 4) = v58;
          if ( v53 >= FIELD_S8(a1, 213) )
            break;
          v45 = *v75;
        }
      }
      else
      {
        v60 = a4 + v49;
        v61 = v21 + v50;
        v62 = 0;
        while ( 1 )
        {
          v63 = 0;
          *(_BYTE *)(v45 + 8 * v62) = *(_BYTE *)(v21 + *(_DWORD *)(v61 + 4 * v62) + 2);
          if ( FIELD_U8(a4, 100) > v62 )
            v63 = sub_60865204(FIELD_U32(a6, 32), *(unsigned __int16 *)(a4 + *(_DWORD *)(v60 + 4 * v62)));
          v64 = sub_60855BC8(52);
          v65 = v64 ? sub_608654EC(v64, a2, a3, v63, 0, a6) : 0;
          v43 = a1;
          v66 = FIELD_U32(a1, 216) + 8 * v62++;
          FIELD_U32(v66, 4) = v65;
          if ( v62 >= FIELD_S8(a1, 213) )
            break;
          v45 = *v75;
        }
      }
    }
    if ( FIELD_U8(v21, 100) == 1 )
    {
      v67 = FIELD_U8(v43, 212) - 1;
      v68 = 12;
      if ( v67 < 2 )
        v68 = 4;
      v69 = (unsigned int)sub_60855BC8(v68) | 0x300000000LL;
      if ( v67 < 2 )
        HIDWORD(v69) = 1;
      FIELD_U64(v43, 224) = v69;
      if ( a2 )
        *a2 += FIELD_U32(v43, 228) * sub_6085F830(a3, 16, 560);
    }
  }
  return v43;
}
