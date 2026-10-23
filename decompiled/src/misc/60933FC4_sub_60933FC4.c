/* sub_60933FC4
 * address: 0x60933FC4   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60933FC4(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v7; // r11
  float v8; // s0
  int v9; // r8
  _DWORD *v10; // r1
  float *v11; // r2
  int v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r5
  int v17; // r6
  int v18; // r7
  int result; // r0
  _WORD *v20; // r7
  int v21; // r10
  int v22; // r9
  int v23; // r3
  int v24; // r4
  int v25; // r5
  int v26; // r6
  int v27; // r3
  int v28; // r4
  int v29; // r5
  int v30; // r6
  int v31; // r3
  int v32; // r4
  int v33; // r5
  int v34; // r6
  __int16 v35; // r2
  unsigned int *v36; // r0
  unsigned int v37; // r1
  int v38; // r8
  unsigned int v39; // r1
  unsigned int v40; // r1
  float v41; // r0
  float v42; // s0
  float v43; // s2
  float v44; // r1
  float v45; // r2
  bool v46; // cc
  float v47; // r3
  int v48; // r0
  int v49; // r0
  float v50; // s2
  int v51; // [sp+4h] [bp-84h]
  _DWORD *v52; // [sp+8h] [bp-80h]
  float v54[2]; // [sp+10h] [bp-78h] BYREF
  _BYTE v55[24]; // [sp+18h] [bp-70h] BYREF
  _DWORD v56[11]; // [sp+30h] [bp-58h] BYREF
  float v57; // [sp+5Ch] [bp-2Ch] BYREF
  float v58; // [sp+60h] [bp-28h]

  v7 = a1[391];
  if ( a1[390] > a3 )
    v7 += 3608 * a3;
  if ( !FIELD_U8(a4, 24) )
    return sub_609343C4(a1, a2, a3, a4);
  v8 = sub_6090E7FC(FIELD_U32(a4, 4), &v57, *(float **)a4);
  v9 = 0;
  if ( a1[273] != 2 )
    v9 = sub_6093426C(a1, a3, 0, *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)a4 + 28) + 60), v8, &v57);
  v52 = (_DWORD *)a4;
  v10 = (_DWORD *)a4;
  v11 = *(float **)a4;
  v12 = FIELD_U32(a4, 4);
  v13 = FIELD_U32(a4, 8);
  v14 = v10[3];
  v15 = v10[4];
  v10 += 5;
  v56[0] = v11;
  v56[1] = v12;
  v56[2] = v13;
  v56[3] = v14;
  v56[4] = v15;
  v16 = v10[2];
  v17 = v10[3];
  v18 = v10[4];
  v56[6] = v10[1];
  v56[7] = v16;
  v56[8] = v17;
  v56[9] = v18;
  v56[5] = v9;
  result = sub_609343C4(a1, a2, a3, v56);
  if ( v9 )
  {
    v20 = (_WORD *)(v7 + 348);
    v21 = FIELD_U16(v7, 348);
    v22 = FIELD_U8(v7, 350);
    v51 = v7 + 72;
    v23 = FIELD_U32(v9, 348);
    v24 = FIELD_U32(v9, 352);
    v25 = FIELD_U32(v9, 356);
    v26 = FIELD_U32(v9, 360);
    FIELD_U32(v7, 72) = FIELD_U32(v9, 344);
    FIELD_U32(v7, 76) = v23;
    FIELD_U32(v7, 80) = v24;
    FIELD_U32(v7, 84) = v25;
    FIELD_U32(v7, 88) = v26;
    v27 = FIELD_U32(v9, 368);
    v28 = FIELD_U32(v9, 372);
    v29 = FIELD_U32(v9, 376);
    v30 = FIELD_U32(v9, 380);
    FIELD_U32(v7, 92) = FIELD_U32(v9, 364);
    FIELD_U32(v7, 96) = v27;
    FIELD_U32(v7, 100) = v28;
    FIELD_U32(v7, 104) = v29;
    FIELD_U32(v7, 108) = v30;
    v31 = FIELD_U32(v9, 388);
    v32 = FIELD_U32(v9, 392);
    v33 = FIELD_U32(v9, 396);
    v34 = FIELD_U32(v9, 400);
    FIELD_U32(v7, 112) = FIELD_U32(v9, 384);
    FIELD_U32(v7, 116) = v31;
    FIELD_U32(v7, 120) = v32;
    FIELD_U32(v7, 124) = v33;
    FIELD_U32(v7, 128) = v34;
    v35 = FIELD_U16(v9, 404);
    FIELD_U8(v7, 134) = FIELD_U8(v9, 406);
    FIELD_U16(v7, 132) = v35;
    sub_60917754(v7 + 136, v9 + 408);
    FIELD_U32(v7, 336) = FIELD_U32(v9, 608);
    v36 = (unsigned int *)(v7 + 344);
    do
      v37 = __ldrex(v36);
    while ( __strex(v37 | 4, v36) );
    v38 = a2;
    if ( (unsigned __int16)*v20 != v21 )
    {
      do
        v39 = __ldrex(v36);
      while ( __strex(v39 | 2, v36) );
      *v20 = v21;
    }
    if ( FIELD_U8(v7, 350) != v22 )
    {
      do
        v40 = __ldrex(v36);
      while ( __strex(v40 | 1, v36) );
      FIELD_U8(v7, 350) = v22;
    }
    sub_6091AC94(v51);
    sub_60919F70((_DWORD *)(v7 + 4));
    v41 = 0.0;
    FIELD_U32(v7, 64) = 0;
    v42 = v57;
    v43 = v58;
    v44 = v57;
    v45 = v57;
    if ( v57 > 0.0 )
      v45 = 0.0;
    v46 = v58 <= 0.0;
    FIELD_F32(v7, 16) = v45;
    v47 = v43;
    if ( !v46 )
      v47 = 0.0;
    if ( v42 <= 0.0 )
      v44 = 0.0;
    FIELD_F32(v7, 20) = v47;
    FIELD_F32(v7, 24) = v44;
    if ( v43 > 0.0 )
      v41 = v43;
    FIELD_F32(v7, 28) = v41;
    FIELD_F32(v7, 8) = v42;
    FIELD_F32(v7, 12) = v43;
    FIELD_U32(v7, 32) = v51;
    sub_6090B260(v7 + 4);
    sub_60920EC8(v7 + 760, *(int **)(*v52 + 28));
    v48 = ((int (__fastcall *)(_BYTE *, int))loc_6090E438)(v55, v7 + 4);
    sub_6090E560(v48, a2, (float *)(v7 + 4));
    v49 = v52[1];
    v50 = -FIELD_F32(v49, 8);
    v54[0] = -FIELD_F32(v49, 4);
    v54[1] = v50;
    sub_6093F214(a2, v7 + 760, v55, &dword_60B3B954, v54, v51, v52, a2);
    return sub_6091ADF4(v7 + 72, v38);
  }
  return result;
}
