/* sub_604528CC
 * address: 0x604528CC   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604528CC(int a1)
{
  int v1; // r4
  int v2; // r10
  int v3; // r7
  _BYTE *v4; // r0
  char v5; // r12
  char v6; // t1
  char v7; // lr
  char v8; // t1
  char v9; // r3
  char v10; // t1
  char v11; // t1
  char v12; // r5
  char v13; // r1
  char v14; // r1
  char v15; // r2
  char v16; // r3
  char v17; // r5
  char v18; // r1
  char v19; // r8
  char v20; // r9
  char v21; // r2
  _BYTE *v22; // r6
  int v23; // r0
  int v24; // r6
  int v25; // r4
  int v26; // r8
  int v27; // r1
  char v28; // r9
  unsigned int v29; // r0
  int v30; // r0
  int v31; // r1
  char v32; // r0
  int v33; // r0
  _BYTE *v34; // r2
  char v35; // r1
  __int16 v36; // r0
  __int16 v37; // r2
  __int16 v38; // r0
  char v39; // r0
  int v40; // r0
  int v41; // r0
  int result; // r0
  _BYTE v43[128]; // [sp+8h] [bp-80h] BYREF

  v1 = a1;
  v2 = FIELD_U32(a1, 1388);
  v3 = dword_60C99DD4;
  sub_60455400(v2 + 16);
  v4 = *(_BYTE **)(v1 + 1388);
  v6 = FIELD_U8(v1, 1324);
  v1 += 1324;
  v5 = v6;
  v8 = FIELD_U8(v1, 4);
  v1 += 4;
  v7 = v8;
  v10 = FIELD_U8(v1, 4);
  v1 += 4;
  v9 = v10;
  v11 = FIELD_U8(v1, 4);
  v1 += 4;
  v4[41] = FIELD_U8(v1, 1);
  v12 = FIELD_U8(v1, 3);
  v13 = FIELD_U8(v1, 2);
  v4[40] = v11;
  v4[43] = v12;
  v4[37] = *(_BYTE *)(v1 - 3);
  v4[42] = v13;
  v14 = v9;
  v15 = *(_BYTE *)(v1 - 1);
  v16 = *(_BYTE *)(v1 - 2);
  v4[36] = v14;
  v4[39] = v15;
  v4[38] = v16;
  v17 = *(_BYTE *)(v1 - 7);
  v18 = *(_BYTE *)(v1 - 11);
  v19 = *(_BYTE *)(v1 - 10);
  v20 = *(_BYTE *)(v1 - 9);
  v21 = *(_BYTE *)(v1 - 5);
  LOBYTE(v1) = *(_BYTE *)(v1 - 6);
  v4[32] = v7;
  v22 = v4 + 34;
  v4[35] = v21;
  v4[33] = v17;
  v4[29] = v18;
  v4 += 28;
  *v22 = v1;
  *v4 = v5;
  v4 += 2;
  v4[1] = v20;
  *v4 = v19;
  v23 = LevelInfo_instance;
  FIELD_U8(v2, 44) = FIELD_U8(LevelInfo_instance, 16);
  FIELD_U8(v2, 45) = FIELD_U8(v23, 17);
  FIELD_U8(v2, 46) = FIELD_U8(v23, 30);
  FIELD_U8(v2, 47) = FIELD_U8(v23, 31);
  FIELD_U8(v2, 48) = FIELD_U32(v23, 32);
  FIELD_U8(v2, 51) = 0;
  LOBYTE(v23) = -1;
  if ( FIELD_U32(v3, 764) == 4 )
    v23 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(dword_60C9A1F0, 6558))[18];
  v24 = v2 + 60;
  v25 = 0;
  FIELD_U8(v2, 50) = v23;
  FIELD_U8(v2, 49) = 0;
  FIELD_U16(v2, 52) = 0;
  FIELD_U16(v2, 54) = 0;
  do
  {
    v26 = v3 + v25;
    LOBYTE(v27) = 0;
    v28 = 0;
    *(_BYTE *)v24 = *(_BYTE *)(v3 + v25 + 292);
    FIELD_U8(v24, 1) = *(_DWORD *)(v3 + v25 + 296);
    FIELD_U8(v24, 2) = *(_DWORD *)(v3 + v25 + 308);
    v29 = *(_DWORD *)(v3 + v25 + 304);
    if ( v29 <= 6 )
      v27 = dword_60B023E0[v29];
    FIELD_U8(v24, 3) = v27;
    FIELD_U8(v24, 4) = FIELD_U32(v26, 300);
    FIELD_U8(v24, 5) = FIELD_U8(v26, 322);
    if ( FIELD_U32(v26, 316) >> 25 <= 2u )
    {
      v28 = FIELD_U8(v26, 320);
      if ( sub_6042F294(v43, (_DWORD *)(v26 + 316)) == 1 && sub_6042F170((int)v43) == 1 )
        v28 |= 2u;
    }
    FIELD_U8(v24, 6) = v28;
    FIELD_U8(v24, 7) = 0;
    v25 += 72;
    FIELD_U32(v24, 8) = FIELD_U32(v26, 344);
    v24 += 16;
  }
  while ( v25 != 288 );
  FIELD_U8(v2, 124) = FIELD_U8(v3, 733);
  FIELD_U8(v2, 125) = FIELD_U8(v3, 734);
  FIELD_U8(v2, 126) = FIELD_U8(v3, 735);
  v30 = FIELD_U32(v3, 272);
  FIELD_U8(v2, 127) = v30;
  if ( (unsigned __int8)v30 == 255 )
  {
    v32 = 0;
    FIELD_U16(v2, 128) = 0;
  }
  else
  {
    v30 = (char)v30;
    v31 = v3;
    if ( (unsigned int)(char)v30 < 2 )
      v31 = v3 + v30;
    FIELD_U8(v2, 128) = FIELD_U8(v31, 284);
    FIELD_U8(v2, 129) = FIELD_U32(v3, 280);
    v32 = FIELD_U8(v3, 279);
  }
  FIELD_U8(v2, 130) = v32;
  FIELD_U8(v2, 131) = 0;
  v33 = dword_60CC6D78;
  v34 = (_BYTE *)(dword_60CC6D78 + 109032);
  if ( FIELD_U8(dword_60CC6D78, 109032) )
  {
    v35 = 1;
    FIELD_U8(v2, 131) = 1;
    if ( FIELD_U8(v3, 908) )
      v35 = 3;
    FIELD_U8(v2, 131) = v35;
    if ( *v34 && FIELD_U8(v33, 109033) )
      FIELD_U8(v2, 131) = v35 | 4;
  }
  FIELD_U8(v2, 132) = FIELD_U32(v3, 764);
  FIELD_U8(v2, 133) = FIELD_U32(v3, 724);
  FIELD_U32(v2, 136) = FIELD_U32(v3, 728);
  v36 = FIELD_U8(v3, 777);
  if ( FIELD_U8(v3, 732) )
    v36 |= 2u;
  if ( FIELD_U32(v3, 764) == 1 && FIELD_U32(dword_60C9A1E0, 532) == 4 )
    v36 |= 8u;
  v37 = v36 & 0xEF;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v37 = v36 | 0x10;
  v38 = v37 & 0xDF;
  if ( FIELD_U8(v3, 768) )
    v38 = v37 | 0x20;
  FIELD_U16(v2, 134) = v38;
  FIELD_U8(v2, 140) = FIELD_U8(v3, 776);
  FIELD_U8(v2, 141) = sub_603FD434(v3 + 272);
  if ( FIELD_U8(v3, 848) )
    v39 = FIELD_U8(v3, 848) & 0x7F;
  else
    v39 = FIELD_U8(v3, 849) | 0x80;
  FIELD_U8(v2, 142) = v39;
  FIELD_U8(v2, 143) = FIELD_U8(v3, 736);
  if ( FIELD_U32(v3, 764) == 1 )
  {
    v40 = dword_60C9A1E0;
    FIELD_U32(v2, 144) = FIELD_U32(dword_60C9A1E0, 712);
    v41 = FIELD_U32(v40, 720);
  }
  else
  {
    LOBYTE(v41) = 0;
    FIELD_U32(v2, 144) = 0;
  }
  FIELD_U8(v2, 148) = v41;
  result = FIELD_U8(dword_60C9CFB8, 84);
  FIELD_U8(v2, 149) = result;
  return result;
}
