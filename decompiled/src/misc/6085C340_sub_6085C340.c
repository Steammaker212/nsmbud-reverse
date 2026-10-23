/* sub_6085C340
 * address: 0x6085C340   size: 1616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085C340(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7)
{
  __int16 v11; // r0
  int v12; // r8
  int v13; // r6
  unsigned int v14; // lr
  char v15; // r1
  char v16; // r2
  char v17; // r7
  unsigned int v18; // r12
  __int16 v19; // r11
  char v20; // r1
  char v21; // r2
  char v22; // r4
  __int16 v23; // r1
  __int16 v24; // r1
  __int16 v25; // r1
  __int16 v26; // r8
  int v27; // r4
  int v28; // r11
  int v29; // r4
  char v30; // r2
  char v31; // r7
  char v32; // r2
  char v33; // r3
  __int16 v34; // r1
  __int16 v35; // r1
  __int16 v36; // r1
  __int16 v37; // r1
  int v38; // r0
  int v39; // r0
  bool v40; // zf
  int v41; // r4
  int v42; // r5
  int v43; // r0
  int v44; // r8
  int v45; // r3
  int *v46; // r0
  int v47; // r1
  int v48; // t1
  int v49; // r1
  int v50; // r3
  int v51; // t1
  int *v52; // r0
  int v53; // r0
  bool v54; // zf
  int v55; // r7
  int v56; // r5
  int v57; // r10
  int v58; // r0
  int v59; // r0
  int v61; // r10
  int v62; // r0
  int v63; // r2
  int v64; // r5
  int v65; // r7
  _DWORD *v66; // r0
  int v67; // r1
  int v68; // r1
  int v69; // r3
  int v70; // r2
  int v71; // [sp+8h] [bp-48h]
  int v72; // [sp+Ch] [bp-44h]
  int v73; // [sp+10h] [bp-40h]
  int v74; // [sp+14h] [bp-3Ch]
  int v75; // [sp+18h] [bp-38h]
  int v76; // [sp+20h] [bp-30h]
  int v77; // [sp+24h] [bp-2Ch]
  _DWORD *v78; // [sp+28h] [bp-28h]

  ((void (__fastcall *)(int, int, int))loc_60857B80)(a1, a5, a7);
  *(_DWORD *)a1 = off_60C5A464;
  v78 = a4;
  v77 = a3;
  v71 = a2;
  if ( !a6 )
    goto LABEL_6;
  v11 = FIELD_U16(a7, 40);
  if ( v11 )
  {
    v72 = FIELD_U32(a7, 32);
    if ( (v11 & 1) != 0 )
    {
      v12 = a6;
      v73 = FIELD_U32(a7, 36);
      goto LABEL_9;
    }
    v73 = FIELD_U32(a7, 32);
LABEL_7:
    v12 = a5;
LABEL_9:
    v13 = a5;
    goto LABEL_10;
  }
  if ( FIELD_U16(a7, 44) )
  {
LABEL_6:
    v73 = FIELD_U32(a7, 32);
    v72 = v73;
    goto LABEL_7;
  }
  v12 = a6;
  v13 = a6;
  v73 = FIELD_U32(a7, 36);
  v72 = v73;
LABEL_10:
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U8(a1, 185) = -1;
  FIELD_U8(a1, 181) = -1;
  FIELD_U8(a1, 184) = -1;
  FIELD_U8(a1, 187) = -1;
  FIELD_U8(a1, 186) = -1;
  FIELD_U8(a1, 180) = -1;
  FIELD_U8(a1, 183) = -1;
  FIELD_U8(a1, 182) = -1;
  memset((void *)(a1 + 188), 0, 44);
  FIELD_U32(a1, 232) = 1065353216;
  FIELD_U32(a1, 236) = 1065353216;
  FIELD_U8(a1, 241) = 0;
  FIELD_U8(a1, 240) = 0;
  FIELD_U8(a1, 243) = -1;
  FIELD_U8(a1, 242) = 0;
  FIELD_U8(a1, 244) = 0;
  FIELD_U8(a1, 247) = -1;
  FIELD_U8(a1, 246) = 0;
  FIELD_U8(a1, 245) = 0;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U16(a1, 216) = 0;
  v76 = v12;
  v14 = FIELD_U16(v12, 86);
  v15 = FIELD_U8(v13, 104);
  v16 = FIELD_U8(v13, 105);
  v17 = FIELD_U8(v13, 106);
  v18 = FIELD_U16(v13, 84);
  v19 = FIELD_U16(v13, 94);
  FIELD_U8(a1, 183) = FIELD_U8(v13, 107);
  FIELD_U8(a1, 182) = v17;
  FIELD_U8(a1, 181) = v16;
  FIELD_U8(a1, 180) = v15;
  v20 = FIELD_U8(v13, 108);
  v21 = FIELD_U8(v13, 109);
  v22 = FIELD_U8(v13, 110);
  FIELD_U8(a1, 187) = FIELD_U8(v13, 111);
  FIELD_U8(a1, 186) = v22;
  FIELD_U8(a1, 185) = v21;
  FIELD_U8(a1, 184) = v20;
  FIELD_U32(a1, 192) = FIELD_U32(v13, 112);
  FIELD_U32(a1, 196) = FIELD_U32(v13, 116);
  FIELD_U8(a1, 218) = FIELD_U8(v13, 92);
  v23 = FIELD_U8(v13, 93) & 3;
  FIELD_U16(a1, 216) = v23;
  FIELD_U32(a1, 204) = FIELD_U32(v13, 120);
  FIELD_U32(a1, 200) = FIELD_U32(v13, 124);
  FIELD_U32(a1, 220) = FIELD_U32(v13, 96);
  v24 = (v23 | (8 * FIELD_U16(v13, 94))) & 0x103;
  FIELD_U16(a1, 216) = v24;
  v25 = v24 | (8 * v19) & 8;
  v26 = FIELD_U16(v13, 94);
  FIELD_U16(a1, 216) = v25;
  v27 = FIELD_U32(v13, 136);
  v28 = v26 & 0x80;
  FIELD_U32(a1, 224) = FIELD_U32(v13, 132);
  FIELD_U32(a1, 228) = v27;
  v29 = FIELD_U32(v13, 144);
  FIELD_U32(a1, 232) = FIELD_U32(v13, 140);
  FIELD_U32(a1, 236) = v29;
  v30 = FIELD_U8(v13, 148);
  LOBYTE(v29) = FIELD_U8(v13, 149);
  v31 = FIELD_U8(v13, 150);
  FIELD_U8(a1, 243) = FIELD_U8(v13, 151);
  FIELD_U8(a1, 242) = v31;
  FIELD_U8(a1, 241) = v29;
  FIELD_U8(a1, 240) = v30;
  v32 = FIELD_U8(v13, 152);
  v33 = FIELD_U8(v13, 153);
  LOBYTE(v29) = FIELD_U8(v13, 154);
  FIELD_U8(a1, 247) = FIELD_U8(v13, 155);
  FIELD_U8(a1, 246) = v29;
  FIELD_U8(a1, 245) = v33;
  FIELD_U8(a1, 244) = v32;
  FIELD_U32(a1, 248) = FIELD_U32(v13, 156);
  v34 = v25 | (4 * FIELD_U16(v13, 94)) & 0x10;
  FIELD_U16(a1, 216) = v34;
  v35 = (4 * FIELD_U16(v13, 94)) & 0x20 | v34;
  FIELD_U16(a1, 216) = v35;
  v36 = v35 | (8 * FIELD_U16(v13, 94)) & 0x80;
  FIELD_U16(a1, 216) = v36;
  v37 = v36 | (2 * FIELD_U16(v13, 94)) & 0x200;
  FIELD_U16(a1, 216) = v37;
  FIELD_U16(a1, 216) = (2 * FIELD_U16(v13, 94)) & 0x400 | v37 | 0x40;
  v38 = v14 >> 1;
  if ( v14 >> 1 )
    v38 = (v14 >> 1) - 1;
  v75 = v38;
  v39 = v18 >> 1;
  if ( v18 >> 1 )
    v39 = (v18 >> 1) - 1;
  v40 = (v26 & 0x40) == 0;
  v74 = v39;
  if ( (v26 & 0x40) != 0 )
  {
    v39 = FIELD_U32(v13, 160);
    v40 = v39 == 0;
  }
  if ( v40 )
  {
    v44 = a7;
    FIELD_U32(a1, 252) = 0;
  }
  else
  {
    v41 = v13 + v39;
    v42 = *(unsigned __int8 *)(v13 + v39);
    FIELD_U32(a1, 252) = sub_60855BC8(8);
    *(_DWORD *)(FIELD_U32(a1, 252) + 4) = sub_60855BC8(64);
    v43 = sub_60855BC8(64);
    v44 = a7;
    v45 = 0;
    **(_DWORD **)(a1 + 252) = v43;
    v46 = (int *)(v41 + 1);
    v47 = -16;
    do
    {
      if ( v47 + 16 >= v42 )
      {
        *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 252) + 4) + v45) = 0;
      }
      else
      {
        v48 = *v46++;
        *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 252) + 4) + v45) = v48;
      }
      v45 += 4;
      ++v47;
    }
    while ( v47 );
    v49 = -16;
    v50 = 0;
    do
    {
      if ( v49 + 16 >= v42 )
      {
        *(_DWORD *)(**(_DWORD **)(a1 + 252) + v50) = 0;
      }
      else
      {
        v51 = *v46++;
        *(_DWORD *)(**(_DWORD **)(a1 + 252) + v50) = v51;
      }
      v50 += 4;
      ++v49;
    }
    while ( v49 );
  }
  if ( v28 )
  {
    if ( FIELD_U8(v44, 69) )
      v52 = &dword_60CC7EE4;
    else
      v52 = &dword_60CC7EF4;
    FIELD_U32(a1, 208) = v52;
  }
  v53 = FIELD_U8(a1, 216);
  v54 = (v53 & 0x80) == 0;
  if ( (v53 & 0x80) != 0 )
  {
    v53 = FIELD_U32(v13, 164);
    v54 = v53 == 0;
  }
  if ( !v54 )
  {
    v61 = v13 + v53;
    v62 = 28;
    if ( FIELD_U8(v61, 10) )
    {
      v63 = 32;
      if ( FIELD_U32(v44, 72) < 0x8010000u )
        v63 = 12;
      v64 = v61 + v63;
      v65 = v61 + v63;
      if ( *(_BYTE *)(v61 + v63 + 4) )
        v62 = 8 * *(unsigned __int8 *)(v61 + v63 + 4) + 20;
    }
    else
    {
      v64 = 0;
      v65 = 0;
    }
    v66 = (_DWORD *)sub_60855BC8(v62);
    FIELD_U32(a1, 264) = v66;
    *v66 = *(_DWORD *)v61;
    *(_DWORD *)(FIELD_U32(a1, 264) + 4) = FIELD_U32(v61, 4);
    *(_DWORD *)(FIELD_U32(a1, 264) + 8) = 0;
    *(_BYTE *)(FIELD_U32(a1, 264) + 12) = FIELD_U8(v61, 8);
    *(_BYTE *)(FIELD_U32(a1, 264) + 13) = FIELD_U8(v61, 9);
    if ( FIELD_U32(v44, 72) >= 0x8010000u )
      v67 = FIELD_U32(v61, 12);
    else
      v67 = 0;
    *(_DWORD *)(FIELD_U32(a1, 264) + 16) = v67;
    if ( v65 )
    {
      *(_BYTE *)(FIELD_U32(a1, 264) + 14) = FIELD_U8(v65, 4);
      if ( FIELD_U8(v65, 4) )
      {
        v68 = 0;
        do
        {
          v69 = v64 + *(_DWORD *)(v65 + 8 + 4 * v68);
          *(_DWORD *)(FIELD_U32(a1, 264) + 8 * v68 + 20) = v69;
          v70 = FIELD_U32(a1, 264) + 8 * v68++;
          FIELD_U32(v70, 24) = FIELD_U8(v69, 1);
        }
        while ( v68 < FIELD_U8(v65, 4) );
      }
    }
    else
    {
      *(_BYTE *)(FIELD_U32(a1, 264) + 14) = 0;
    }
  }
  FIELD_U32(a1, 188) = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v72 + 16) + 44))(
                            FIELD_U32(v72, 16),
                            v77,
                            FIELD_U32(v72, 4)
                          + 12
                          + *(_DWORD *)(FIELD_U32(v72, 4) + 12 + 4 * FIELD_U16(v13, 90)));
  v55 = sub_60865204(FIELD_U32(v44, 32), FIELD_U16(a5, 88));
  v56 = 0;
  v57 = 0;
  if ( a6 )
    v57 = sub_60865204(FIELD_U32(v44, 36), FIELD_U16(a6, 88));
  v58 = sub_60855BC8(52);
  if ( v58 )
    v56 = sub_608654EC(v58, v71, v77, v55, v57, v44);
  FIELD_U32(a1, 256) = v56;
  v59 = FIELD_U32(v76, 128);
  if ( v59 )
    FIELD_U32(a1, 176) = v76 + v59;
  *v78 = FIELD_U16(v13, 94);
  v78[1] = FIELD_U32(v73, 20);
  v78[2] = v76 + FIELD_U32(v76, 100);
  v78[3] = v74;
  v78[4] = v75;
  FIELD_U8(a1, 219) = FIELD_U8(v44, 69);
  return a1;
}
