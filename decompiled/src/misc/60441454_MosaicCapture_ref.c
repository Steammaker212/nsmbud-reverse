/* MosaicCapture_ref
 * address: 0x60441454   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MosaicCapture_ref(int a1, int a2)
{
  int v4; // r11
  int v5; // r1
  float v6; // s0
  float v7; // s4
  float v8; // s2
  float v9; // s6
  float v10; // s16
  float v11; // s18
  int v12; // r0
  _WORD *v13; // r8
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r7
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r7
  int v22; // r3
  int v23; // r4
  int v24; // r5
  int v25; // r7
  int v26; // r5
  __int16 v27; // r2
  unsigned int v28; // s16
  unsigned int v29; // s18
  unsigned int *v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // r1
  int v34; // r0
  int v35; // r0
  int v36; // r0
  float v37; // s2
  int v38; // r0
  int v40; // [sp+4h] [bp-244h]
  int v41; // [sp+8h] [bp-240h]
  int v42; // [sp+Ch] [bp-23Ch]
  int v43; // [sp+24h] [bp-224h]
  int v44; // [sp+28h] [bp-220h]
  int v45; // [sp+2Ch] [bp-21Ch]
  float v46[2]; // [sp+30h] [bp-218h] BYREF
  char v47[4]; // [sp+38h] [bp-210h] BYREF
  float v48; // [sp+3Ch] [bp-20Ch]
  float v49; // [sp+40h] [bp-208h]
  float v50; // [sp+44h] [bp-204h]
  float v51; // [sp+48h] [bp-200h]
  _DWORD v52[12]; // [sp+50h] [bp-1F8h] BYREF
  char v53; // [sp+80h] [bp-1C8h]
  int v54; // [sp+A0h] [bp-1A8h] BYREF
  __int16 v55; // [sp+1A8h] [bp-A0h] BYREF
  int v56; // [sp+1ACh] [bp-9Ch]

  v4 = FIELD_U32(a2, 12);
  v5 = FIELD_U32(a2, 40);
  v6 = FIELD_F32(v4, 12);
  v7 = FIELD_F32(v4, 20);
  v8 = FIELD_F32(v4, 16);
  v9 = FIELD_F32(v4, 24);
  v52[0] = &sead__SafeStringBase__vtable;
  v10 = v9 - v8;
  v11 = v7 - v6;
  v52[1] = "MosaicCapture";
  v12 = sub_6093E338(
          dword_60CD09F8,
          v5,
          v52,
          29,
          (unsigned int)(float)(v7 - v6),
          (unsigned int)(float)(v9 - v8),
          1,
          0,
          0,
          1,
          0);
  v13 = (_WORD *)(a1 + 1028);
  v43 = FIELD_U16(a1, 1028);
  v45 = a1 + 752;
  v44 = FIELD_U8(a1, 1030);
  v14 = FIELD_U32(v12, 4);
  v15 = FIELD_U32(v12, 8);
  v16 = FIELD_U32(v12, 12);
  v17 = FIELD_U32(v12, 16);
  FIELD_U32(a1, 752) = *(_DWORD *)v12;
  FIELD_U32(a1, 756) = v14;
  FIELD_U32(a1, 760) = v15;
  FIELD_U32(a1, 764) = v16;
  FIELD_U32(a1, 768) = v17;
  v18 = FIELD_U32(v12, 24);
  v19 = FIELD_U32(v12, 28);
  v20 = FIELD_U32(v12, 32);
  v21 = FIELD_U32(v12, 36);
  FIELD_U32(a1, 772) = FIELD_U32(v12, 20);
  FIELD_U32(a1, 776) = v18;
  FIELD_U32(a1, 780) = v19;
  FIELD_U32(a1, 784) = v20;
  FIELD_U32(a1, 788) = v21;
  v22 = FIELD_U32(v12, 44);
  v23 = FIELD_U32(v12, 48);
  v24 = FIELD_U32(v12, 52);
  v25 = FIELD_U32(v12, 56);
  FIELD_U32(a1, 792) = FIELD_U32(v12, 40);
  FIELD_U32(a1, 796) = v22;
  FIELD_U32(a1, 800) = v23;
  FIELD_U32(a1, 804) = v24;
  FIELD_U32(a1, 808) = v25;
  v26 = v12;
  v27 = FIELD_U16(v12, 60);
  FIELD_U8(a1, 814) = FIELD_U8(v12, 62);
  FIELD_U16(a1, 812) = v27;
  sub_60917754(a1 + 816, v12 + 64);
  v28 = (unsigned int)v10;
  v29 = (unsigned int)v11;
  FIELD_U32(a1, 1016) = FIELD_U32(v26, 264);
  v30 = (unsigned int *)(a1 + 1024);
  do
    v31 = __ldrex(v30);
  while ( __strex(v31 | 4, v30) );
  if ( (unsigned __int16)*v13 != v43 )
  {
    do
      v32 = __ldrex(v30);
    while ( __strex(v32 | 2, v30) );
    *v13 = v43;
  }
  if ( FIELD_U8(a1, 1030) != v44 )
  {
    do
      v33 = __ldrex(v30);
    while ( __strex(v33 | 1, v30) );
    FIELD_U8(a1, 1030) = v44;
  }
  sub_6091AC94(v45);
  FIELD_U32(a1, 1108) = 0;
  FIELD_U32(a1, 1112) = 0;
  FIELD_F32(a1, 1116) = (float)v29;
  FIELD_F32(a1, 1120) = (float)v28;
  FIELD_U32(a1, 1124) = v45;
  v34 = sub_6090B350(&v55);
  v55 = 0;
  v56 &= ~1u;
  sub_6090B4B0(v34, FIELD_U32(a2, 40));
  v35 = FIELD_U32(v4, 28);
  if ( FIELD_U8(v35, 32) )
  {
    nullsub_119(v35, FIELD_U32(a2, 40));
    v35 = FIELD_U32(v4, 28);
  }
  sub_6091ADF4(v35, FIELD_U32(a2, 40));
  agl_TextureSampler_copy_ref(v52, FIELD_U32(v4, 28));
  sub_6090B260(a1 + 1096, FIELD_U32(a2, 40));
  v36 = ((int (__fastcall *)(char *, int))loc_6090E438)(v47, a1 + 1096);
  sub_6090E560(v36, FIELD_U32(a2, 40), a1 + 1096);
  v37 = (float)(v51 - v49) / (float)(FIELD_F32(v4, 24) - FIELD_F32(v4, 16));
  v46[0] = (float)(v50 - v48) / (float)(FIELD_F32(v4, 20) - FIELD_F32(v4, 12));
  v46[1] = v37;
  v38 = FIELD_U32(a2, 40);
  if ( v53 )
    sub_6093FA14(v38, v52, v47, v46, &dword_60B3B944);
  else
    sub_6093F214(v38, v52, v47, v46, &dword_60B3B944, v40, v41, v42);
  sub_6091ADF4(FIELD_U32(a1, 1124), FIELD_U32(a2, 40));
  sub_6090B260(v4, FIELD_U32(a2, 40));
  sub_609175E4(&v54);
  sub_60917AE4(v52);
  return v26;
}
