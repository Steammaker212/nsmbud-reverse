/* sub_6097E954
 * address: 0x6097E954   size: 1268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097E954(int a1, int a2, int a3)
{
  int v4; // r8
  int result; // r0
  int v6; // r9
  int v7; // r10
  int v8; // r11
  int v9; // r0
  int v10; // r7
  int v11; // r6
  int v12; // r7
  unsigned int v13; // r10
  _WORD *v14; // r9
  int v15; // r8
  signed int v16; // r11
  int v17; // r3
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int v21; // r3
  int v22; // r5
  int v23; // r6
  int v24; // r7
  int v25; // r3
  int v26; // r5
  int v27; // r6
  int v28; // r7
  __int16 v29; // r2
  unsigned int *v30; // r0
  unsigned int v31; // r1
  float v32; // s16
  float v33; // s18
  float *v34; // r7
  unsigned int v35; // r1
  unsigned int v36; // r1
  unsigned __int8 *v37; // r0
  int v38; // r10
  int v39; // r3
  int v40; // r6
  int v41; // r7
  int v42; // r3
  int v43; // r5
  int v44; // r6
  int v45; // r7
  __int16 v46; // r1
  unsigned __int8 v47; // r1
  unsigned __int8 v48; // r2
  unsigned int v49; // r1
  unsigned int v50; // r1
  unsigned int v51; // r0
  int v52; // r1
  int v53; // r0
  int v54; // r5
  int v55; // r7
  int v56; // r0
  int v57; // r1
  int v58; // r0
  int v59; // r0
  bool v60; // zf
  char v61; // r0
  int v62; // [sp+18h] [bp-238h]
  int v63; // [sp+1Ch] [bp-234h]
  int v64; // [sp+20h] [bp-230h]
  int v65; // [sp+24h] [bp-22Ch]
  int v66; // [sp+28h] [bp-228h]
  int v67; // [sp+2Ch] [bp-224h]
  int v68; // [sp+30h] [bp-220h]
  int v69; // [sp+34h] [bp-21Ch]
  _BYTE v70[24]; // [sp+40h] [bp-210h] BYREF
  int v71[15]; // [sp+58h] [bp-1F8h] BYREF
  __int16 v72; // [sp+94h] [bp-1BCh]
  char v73; // [sp+96h] [bp-1BAh]
  _BYTE v74[16]; // [sp+98h] [bp-1B8h] BYREF
  _DWORD v75[61]; // [sp+A8h] [bp-1A8h] BYREF
  int v76; // [sp+19Ch] [bp-B4h]
  unsigned int v77; // [sp+1A0h] [bp-B0h] BYREF
  char v78; // [sp+1A4h] [bp-ACh]
  _BYTE v79[4]; // [sp+1B0h] [bp-A0h] BYREF
  int v80; // [sp+1B4h] [bp-9Ch]

  v4 = a2;
  result = FIELD_U8(a1, 173);
  if ( !result )
    return result;
  result = FIELD_U8(a2, 228);
  if ( FIELD_U8(a2, 228) )
    return result;
  v6 = FIELD_U32(a2, 224);
  if ( !v6 )
    return result;
  v7 = a1 + 280;
  v8 = CapturePaneWork_ref(a1, a2, a1 + 170, FIELD_U32(a1, 180), a1 + 212, a1 + 280, FIELD_U32(a1, 176), a3);
  v9 = FIELD_U32(a1, 208);
  v10 = FIELD_U16(v9, 60);
  v11 = FIELD_U8(v9, 59);
  if ( !sub_60920DAC(v10) )
  {
    v66 = v10;
    v62 = v11;
    v67 = v8;
    v68 = v6;
    v69 = v4;
    v12 = FIELD_U32(a1, 208);
    v13 = FIELD_U16(v12, 24);
    v63 = sub_609200A0(v12);
    v14 = (_WORD *)(a1 + 556);
    v64 = FIELD_U16(a1, 556);
    v65 = FIELD_U8(a1, 558);
    v15 = FIELD_U32(a1, 208);
    v16 = FIELD_U16(v12, 26);
    v17 = FIELD_U32(v15, 4);
    v18 = FIELD_U32(v15, 8);
    v19 = FIELD_U32(v15, 12);
    v20 = FIELD_U32(v15, 16);
    FIELD_U32(a1, 280) = *(_DWORD *)v15;
    FIELD_U32(a1, 284) = v17;
    FIELD_U32(a1, 288) = v18;
    FIELD_U32(a1, 292) = v19;
    FIELD_U32(a1, 296) = v20;
    v21 = FIELD_U32(v15, 24);
    v22 = FIELD_U32(v15, 28);
    v23 = FIELD_U32(v15, 32);
    v24 = FIELD_U32(v15, 36);
    FIELD_U32(a1, 300) = FIELD_U32(v15, 20);
    FIELD_U32(a1, 304) = v21;
    FIELD_U32(a1, 308) = v22;
    FIELD_U32(a1, 312) = v23;
    FIELD_U32(a1, 316) = v24;
    v25 = FIELD_U32(v15, 44);
    v26 = FIELD_U32(v15, 48);
    v27 = FIELD_U32(v15, 52);
    v28 = FIELD_U32(v15, 56);
    FIELD_U32(a1, 320) = FIELD_U32(v15, 40);
    FIELD_U32(a1, 324) = v25;
    FIELD_U32(a1, 328) = v26;
    FIELD_U32(a1, 332) = v27;
    FIELD_U32(a1, 336) = v28;
    v29 = FIELD_U16(v15, 60);
    FIELD_U8(a1, 342) = FIELD_U8(v15, 62);
    FIELD_U16(a1, 340) = v29;
    sub_60917754(a1 + 344, v15 + 64);
    if ( v13 <= 1 )
      v13 = 1;
    FIELD_U32(a1, 544) = FIELD_U32(v15, 264);
    if ( v63 > v16 )
      v16 = v63;
    v30 = (unsigned int *)(a1 + 552);
    do
      v31 = __ldrex(v30);
    while ( __strex(v31 | 4, v30) );
    v32 = (float)(unsigned int)v16;
    v33 = (float)v13;
    v4 = v69;
    v7 = a1 + 280;
    v8 = v67;
    v34 = (float *)(a1 + 212);
    if ( (unsigned __int16)*v14 != v64 )
    {
      do
        v35 = __ldrex(v30);
      while ( __strex(v35 | 2, v30) );
      *v14 = v64;
    }
    v6 = v68;
    if ( FIELD_U8(a1, 558) != v65 )
    {
      do
        v36 = __ldrex(v30);
      while ( __strex(v36 | 1, v30) );
      FIELD_U8(a1, 558) = v65;
    }
    sub_6091AC94(a1 + 280);
    FIELD_U32(a1, 224) = 0;
    FIELD_U32(a1, 228) = 0;
    FIELD_F32(a1, 232) = v33;
    FIELD_F32(a1, 236) = v32;
    FIELD_F32(a1, 216) = v33;
    FIELD_F32(a1, 220) = v32;
    sub_6090B260(a1 + 212);
    v37 = (unsigned __int8 *)sub_6090B350((int)v79);
    v80 &= ~1u;
    v79[0] = 0;
    sub_6090B4B0(v37, FIELD_U32(v68, 16));
    agl_TextureSampler_copy_ref((int)v71, v67);
    if ( v66 > 52 )
    {
      if ( v66 == 55 )
        goto LABEL_38;
      if ( v66 != 53 )
      {
LABEL_40:
        v51 = FIELD_U16(v67, 24);
        v52 = 1;
        if ( v51 <= 1 )
          v51 = 1;
        if ( *(unsigned __int16 *)(FIELD_U32(a1, 208) + 24) > 1u )
          v52 = *(unsigned __int16 *)(FIELD_U32(a1, 208) + 24);
        if ( v51 != v52 )
          goto LABEL_50;
        v53 = sub_609200A0(v67);
        v54 = FIELD_U16(v67, 26);
        v55 = FIELD_U32(a1, 208);
        if ( v53 > v54 )
          v54 = v53;
        v56 = sub_609200A0(FIELD_U32(a1, 208));
        v57 = FIELD_U16(v55, 26);
        v34 = (float *)(a1 + 212);
        if ( v56 > v57 )
          v57 = v56;
        if ( v54 != v57 )
        {
LABEL_50:
          v58 = ((int (__fastcall *)(_BYTE *, float *))loc_6090E438)(v70, v34);
          sub_6090E560(v58, FIELD_U32(v68, 16), v34);
        }
        sub_6093F664(FIELD_U32(v68, 16), (int)v71);
        sub_609175E4((int)v75);
        sub_60917AE4((int)v71);
        goto LABEL_53;
      }
    }
    else if ( v66 != 1 )
    {
      goto LABEL_37;
    }
    if ( v62 == 2 )
    {
      v76 = 16843013;
      v78 |= 2u;
      do
        v49 = __ldrex(&v77);
      while ( __strex(v49 | 1, &v77) );
      goto LABEL_40;
    }
LABEL_37:
    if ( v66 == 10 )
    {
LABEL_38:
      v76 = 16844034;
      v78 |= 2u;
      do
        v50 = __ldrex(&v77);
      while ( __strex(v50 | 1, &v77) );
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  if ( v10 <= 52 )
  {
    if ( v10 != 1 )
    {
      if ( v10 != 10 )
        goto LABEL_52;
LABEL_27:
      v38 = v11;
      v71[0] = *(_DWORD *)v8;
      v71[1] = FIELD_U32(v8, 4);
      v71[2] = FIELD_U32(v8, 8);
      v71[3] = FIELD_U32(v8, 12);
      v71[4] = FIELD_U32(v8, 16);
      v71[5] = FIELD_U32(v8, 20);
      v39 = FIELD_U32(v8, 28);
      v40 = FIELD_U32(v8, 32);
      v41 = FIELD_U32(v8, 36);
      v71[6] = FIELD_U32(v8, 24);
      v71[7] = v39;
      v71[8] = v40;
      v71[9] = v41;
      v42 = FIELD_U32(v8, 44);
      v43 = FIELD_U32(v8, 48);
      v44 = FIELD_U32(v8, 52);
      v45 = FIELD_U32(v8, 56);
      v71[10] = FIELD_U32(v8, 40);
      v71[11] = v42;
      v71[12] = v43;
      v71[13] = v44;
      v71[14] = v45;
      v46 = FIELD_U16(v8, 60);
      v73 = FIELD_U8(v8, 62);
      v72 = v46;
      sub_609176C0((int)v74, v8 + 64);
      if ( v38 == 2 )
      {
        v47 = 5;
        v48 = 1;
      }
      else
      {
        v47 = 2;
        v48 = 5;
      }
      v75[46] = FIELD_U32(v8, 264);
      sub_60920AC4(v71, v47, v48, 1, 1);
      sub_6092048C((int)v71, FIELD_U32(v6, 16), FIELD_U32(a1, 208));
      sub_609175E4((int)v74);
      v7 = a1 + 280;
      goto LABEL_53;
    }
LABEL_26:
    if ( v11 == 2 )
      goto LABEL_27;
    goto LABEL_52;
  }
  if ( v10 == 55 )
    goto LABEL_27;
  if ( v10 == 53 )
    goto LABEL_26;
LABEL_52:
  sub_6092048C(v8, FIELD_U32(v6, 16), FIELD_U32(a1, 208));
LABEL_53:
  v59 = FIELD_U32(a1, 180);
  v60 = v59 == 0;
  if ( v59 )
    v60 = FIELD_U32(v59, 868) == 0;
  if ( v60 )
    sub_6093EA98(dword_60CD09F8, v8);
  else
    sub_609A6D4C(v59);
  sub_6091ADF4(v7, FIELD_U32(v6, 16));
  sub_6097F5A8(v6);
  sub_60853FF8(v4);
  v61 = FIELD_U8(a1, 170);
  FIELD_U8(a1, 170) = v61 | 1;
  FIELD_U8(a1, 171) = (v61 & 0x40) != 0;
  FIELD_U8(a1, 173) = 0;
  return 0;
}
