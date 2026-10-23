/* sub_60860D30
 * address: 0x60860D30   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60860D30(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r0
  int v19; // r1
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r0
  int v24; // r1
  char v25; // r1
  char v26; // r3
  char v27; // r7
  int v28; // r6
  int v29; // r7
  int v30; // r6
  int v31; // r0
  int v32; // r1
  int v33; // r5
  int v34; // r0
  int v35; // r2
  int v36; // r1
  _DWORD *v37; // r2
  int v38; // r5
  int v39; // r6
  int v40; // r0
  int v41; // r1
  int v42; // r0
  unsigned int v43; // r5
  int v44; // r0
  __int64 v45; // r0

  sub_6085852C(a1, a2);
  v6 = 0;
  *(_DWORD *)a1 = off_60C5A574;
  FIELD_U16(a1, 184) = FIELD_U16(a2, 184);
  FIELD_U16(a1, 182) = FIELD_U16(a2, 182);
  FIELD_U16(a1, 180) = FIELD_U16(a2, 180);
  FIELD_U16(a1, 178) = FIELD_U16(a2, 178);
  FIELD_U16(a1, 176) = FIELD_U16(a2, 176);
  FIELD_U16(a1, 174) = FIELD_U16(a2, 174);
  FIELD_U16(a1, 172) = FIELD_U16(a2, 172);
  FIELD_U16(a1, 170) = FIELD_U16(a2, 170);
  FIELD_U8(a1, 212) = FIELD_U8(a2, 212);
  FIELD_U8(a1, 213) = FIELD_U8(a2, 213);
  FIELD_U8(a1, 214) = FIELD_U8(a2, 214);
  FIELD_U32(a1, 228) = 0;
  sub_60864F9C(a1 + 204, v7, v8, v9);
  v10 = FIELD_U8(a2, 189);
  v11 = FIELD_U8(a2, 188);
  v12 = FIELD_U8(a2, 190);
  v13 = FIELD_U8(a2, 191);
  FIELD_U8(a1, 189) = v10;
  v14 = v11 | (v10 << 8) | ((v12 | (v13 << 8)) << 16);
  FIELD_U8(a1, 188) = v14;
  FIELD_U8(a1, 191) = v13;
  FIELD_U8(a1, 190) = v12;
  sub_60864F9C(a1 + 204, v14, v12, a1 + 190);
  v15 = FIELD_U8(a2, 193);
  v16 = FIELD_U8(a2, 192);
  v17 = FIELD_U8(a2, 194);
  v18 = FIELD_U8(a2, 195);
  FIELD_U8(a1, 193) = v15;
  v19 = v16 | (v15 << 8) | ((v17 | (v18 << 8)) << 16);
  FIELD_U8(a1, 192) = v19;
  FIELD_U8(a1, 195) = v18;
  FIELD_U8(a1, 194) = v17;
  sub_60864F9C(a1 + 204, v19, v17, a1 + 194);
  v20 = FIELD_U8(a2, 197);
  v21 = FIELD_U8(a2, 196);
  v22 = FIELD_U8(a2, 198);
  v23 = FIELD_U8(a2, 199);
  FIELD_U8(a1, 197) = v20;
  v24 = v21 | (v20 << 8) | ((v22 | (v23 << 8)) << 16);
  FIELD_U8(a1, 196) = v24;
  FIELD_U8(a1, 199) = v23;
  FIELD_U8(a1, 198) = v22;
  sub_60864F9C(a1 + 204, v24, v22, a1 + 198);
  v25 = FIELD_U8(a2, 200);
  v26 = FIELD_U8(a2, 202);
  v27 = FIELD_U8(a2, 203);
  FIELD_U8(a1, 201) = FIELD_U8(a2, 201);
  FIELD_U8(a1, 200) = v25;
  FIELD_U8(a1, 203) = v27;
  FIELD_U8(a1, 202) = v26;
  v28 = FIELD_U8(a2, 205);
  if ( FIELD_U8(a2, 205) )
  {
    sub_60864FD8(a1 + 204, FIELD_U8(a2, 205));
    sub_60865030(a1 + 204, v28);
    v29 = 0;
    do
    {
      sub_60865108(a1 + 204, v29++, FIELD_U32(a2, 208) + v6);
      v6 += 32;
    }
    while ( v28 != v29 );
  }
  v30 = FIELD_U32(a2, 220);
  v31 = sub_60855BC8(52);
  v32 = 0;
  if ( v31 )
    v32 = sub_6086735C(v31, v30, a3);
  FIELD_U32(a1, 220) = v32;
  v33 = FIELD_S8(a1, 213);
  FIELD_U8(a1, 213) = 0;
  v34 = sub_60855BC8(8 * v33);
  if ( v34 )
  {
    if ( v33 >= 1 )
    {
      v35 = 0;
      if ( (v33 & 1) != 0 )
      {
        v35 = 1;
        *(_BYTE *)v34 = 0;
        FIELD_U32(v34, 4) = 0;
      }
      if ( v33 != 1 )
      {
        v36 = v33 - v35;
        v37 = (_DWORD *)(v34 + 8 * v35 + 12);
        do
        {
          *((_BYTE *)v37 - 12) = 0;
          *(v37 - 2) = 0;
          *((_BYTE *)v37 - 4) = 0;
          *v37 = 0;
          v37 += 4;
          v36 -= 2;
        }
        while ( v36 );
      }
    }
    FIELD_U32(a1, 216) = v34;
    FIELD_U8(a1, 213) = v33;
  }
  else
  {
    v34 = 0;
    FIELD_U32(a1, 216) = 0;
    LOBYTE(v33) = FIELD_U8(a1, 213);
  }
  if ( (char)v33 >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      *(_BYTE *)(v34 + 8 * v38) = *(_BYTE *)(FIELD_U32(a2, 216) + 8 * v38);
      v39 = *(_DWORD *)(FIELD_U32(a2, 216) + 8 * v38 + 4);
      v40 = sub_60855BC8(52);
      v41 = 0;
      if ( v40 )
        v41 = sub_6086735C(v40, v39, a3);
      v42 = FIELD_U32(a1, 216) + 8 * v38++;
      FIELD_U32(v42, 4) = v41;
      if ( v38 >= FIELD_S8(a1, 213) )
        break;
      v34 = FIELD_U32(a1, 216);
    }
  }
  if ( FIELD_U32(a2, 224) )
  {
    v43 = FIELD_U8(a1, 212) - 1;
    v44 = 12;
    if ( v43 < 2 )
      v44 = 4;
    v45 = (unsigned int)sub_60855BC8(v44) | 0x300000000LL;
    if ( v43 < 2 )
      HIDWORD(v45) = 1;
    FIELD_U64(a1, 224) = v45;
    return a1;
  }
  else
  {
    FIELD_U32(a1, 224) = 0;
    return a1;
  }
}
