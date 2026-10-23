/* sub_606A4748
 * address: 0x606A4748   size: 2036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A4748(int a1)
{
  int v1; // r11
  int v2; // r7
  unsigned int v3; // r8
  float **v4; // r2
  unsigned int *v5; // r3
  _DWORD *v6; // r9
  int v7; // r0
  float v8; // s26
  int *v9; // r0
  int v10; // r0
  float *v11; // r5
  float *v12; // r6
  float v13; // s16
  unsigned int U32; // r5
  unsigned int v15; // r6
  float v16; // s16
  float *v17; // r0
  float v18; // s18
  float v19; // s20
  unsigned int v20; // r5
  float v21; // s22
  float v22; // s24
  unsigned int v23; // r0
  float *v24; // r1
  int *v25; // r0
  unsigned int v26; // r0
  _DWORD *v27; // r1
  unsigned int v28; // r0
  int v29; // r0
  float v30; // s0
  float *v31; // r0
  float v32; // s31
  float v33; // s17
  float v34; // s28
  float v35; // s20
  float v36; // s21
  float v37; // s18
  float v38; // s22
  float v39; // s24
  float v40; // s16
  float v41; // s21
  _DWORD *v42; // r0
  unsigned int v43; // r1
  float v50; // s2
  float v51; // s4
  float v52; // s0
  float v53; // s6
  float v54; // s4
  float v55; // s6
  float *v56; // r0
  int v57; // r5
  char v58; // r12
  unsigned int v59; // r0
  unsigned int v60; // r1
  unsigned int *v62; // [sp+4h] [bp-DCh]
  float **v63; // [sp+8h] [bp-D8h]
  int v64; // [sp+Ch] [bp-D4h]
  _DWORD *v66; // [sp+18h] [bp-C8h]
  float *v67; // [sp+1Ch] [bp-C4h]
  float *v68; // [sp+20h] [bp-C0h]
  int v69; // [sp+24h] [bp-BCh]
  unsigned int *v70; // [sp+28h] [bp-B8h]
  _DWORD **v71; // [sp+2Ch] [bp-B4h]
  int **v72; // [sp+30h] [bp-B0h]
  unsigned int *v73; // [sp+34h] [bp-ACh]
  float **v74; // [sp+38h] [bp-A8h]
  unsigned int *v75; // [sp+3Ch] [bp-A4h]
  float *v76; // [sp+40h] [bp-A0h]
  int v77; // [sp+44h] [bp-9Ch]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v64 = a1 + 7108;
  v69 = a1 + 6508;
  v68 = (float *)(a1 + 6500);
  v67 = (float *)(a1 + 6504);
  v71 = (_DWORD **)(a1 + 6432);
  v70 = (unsigned int *)(a1 + 6428);
  v4 = (float **)(a1 + 6376);
  v5 = (unsigned int *)(a1 + 6372);
  v63 = (float **)(a1 + 6408);
  v62 = (unsigned int *)(a1 + 6404);
  v6 = (_DWORD *)(a1 + 6488);
  v72 = (int **)(a1 + 6424);
  v73 = (unsigned int *)(a1 + 6420);
  v7 = FIELD_S16(a1, 6496);
  if ( v7 >= 150 )
    v7 = 150;
  v77 = v7;
  v76 = (float *)dword_60CC6484;
  v74 = v4;
  v75 = v5;
  v66 = v6;
  v8 = FIELD_F32(dword_60CC6484, 116)
     + (float)((float)(FIELD_F32(dword_60CC6484, 56) + FIELD_F32(dword_60CC6484, 64)) * -0.5);
  do
  {
    if ( (int)v3 >= v77 )
    {
      *(_DWORD *)(*v6 + v2) = 0;
    }
    else
    {
      v9 = *v72;
      if ( *v73 > v3 )
        v9 = (int *)((char *)v9 + v2);
      v10 = *v9;
      if ( v10 )
      {
        if ( v10 != 1 )
          goto LABEL_39;
        v11 = (float *)(v64 + v2);
        v12 = (float *)(v69 + v2);
        v13 = *(float *)(v69 + v2 + 600);
      }
      else
      {
        U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v15 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        *(float *)(*v6 + v2) = COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000)
                             + -1.0;
        v16 = (float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 0.99) + 0.01;
        v17 = *v63;
        if ( *v62 > v3 )
          v17 = (float *)((char *)v17 + v2);
        *v17 = (float)(v16 * 3.0) * (float)((float)((float)(COERCE_FLOAT((v15 >> 9) | 0x3F800000) + -1.0) * 0.9) + 0.1);
        v18 = v76[26];
        v19 = v76[28];
        v20 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v21 = v76[27];
        v22 = v76[31];
        v23 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v24 = *v74;
        if ( *v75 > v3 )
          v24 = (float *)((char *)v24 + v1);
        *v24 = (float)(v19 + -32.0)
             + (float)((float)(v18 * (float)(COERCE_FLOAT((v20 >> 9) | 0x3F800000) + -1.0)) + 32.0);
        v24[1] = (float)(v22 + 32.0)
               - (float)((float)(v21 * (float)(COERCE_FLOAT((v23 >> 9) | 0x3F800000) + -1.0)) + -32.0);
        v24[2] = v16;
        v25 = *v72;
        if ( *v73 > v3 )
          v25 = (int *)((char *)v25 + v2);
        ++*v25;
        v26 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v27 = *v71;
        if ( *v70 > v3 )
          v27 = (_DWORD *)((char *)v27 + v2);
        *v27 = (int)(float)((float)((float)(COERCE_FLOAT((v26 >> 9) | 0x3F800000) + -1.0) * 65536.0) * 65536.0);
        *(float *)(v69 + v2) = (float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000)
                                     + -1.0)
                             * 360.0;
        v28 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        v5 = v75;
        v4 = v74;
        v13 = (float)(COERCE_FLOAT((v28 >> 9) | 0x3F800000) + -1.0) * 360.0;
        *(float *)(v69 + v2 + 600) = v13;
        v29 = a1 + 4 * v3;
        v11 = (float *)(v29 + 7108);
        v12 = (float *)(v29 + 6508);
      }
      v30 = *v12;
      v31 = *v4;
      if ( *v5 > v3 )
        v31 = (float *)((char *)v31 + v1);
      v32 = *v31;
      v33 = v31[1];
      v34 = v31[2];
      v35 = v30 / 57.296;
      v36 = *v67;
      v37 = v13 / 57.296;
      v38 = cosf(v30 / 57.296);
      v39 = sinf(v13 / 57.296);
      v40 = sinf(v35);
      if ( v35 == INFINITY )
        cosf(v35);
      v41 = (float)(v34 * v34) * v36;
      v5 = v75;
      if ( v37 == INFINITY )
      {
        cosf(INFINITY);
        v5 = v75;
      }
      *v12 = *v12 + (float)((float)(v41 + -0.5) * 5.5);
      *v11 = *v11 + (float)((float)(v41 + -0.5) * 7.5);
      v42 = *v71;
      if ( *v70 > v3 )
        v42 = (_DWORD *)((char *)v42 + v2);
      v43 = *v42 + (int)(float)((float)((float)(1.0 - v41) * 2000.0) + 400.0);
      *v42 = (__int16)v43;
      _R0 = v43 << 16;
      __asm { UXTB16          R0, R0 }
      v6 = v66;
      *(float *)(*v66 + v2) = (float)(*v68
                                    * (float)((float)(*(float *)((char *)sinLutTable + ((v43 >> 4) & 0xFF0))
                                                    + (float)((float)(*(float *)((char *)&sinLutTable[1]
                                                                               + ((v43 >> 4) & 0xFF0))
                                                                    * (float)_R0)
                                                            * 0.000000059605))
                                            + 1.0))
                            * 0.55;
      v50 = v32
          + (float)((float)(v8 * (float)((float)(v41 + -0.4) * -1.6)) + (float)((float)(v41 + v41) * (float)(v38 * v39)));
      v51 = v76[26];
      v52 = (float)((float)(v41 * 0.5) + 0.5) + (float)(v33 + (float)((float)(v41 + v41) * v40));
      v53 = v76[28];
      if ( v50 >= (float)(v53 + -32.0) )
      {
        v4 = v74;
        if ( v50 > (float)((float)(v53 + v51) + 32.0) )
          v50 = v50 - (float)(v51 + 64.0);
      }
      else
      {
        v4 = v74;
        v50 = v50 + (float)(v51 + 64.0);
      }
      v54 = v76[27];
      v55 = v76[31];
      if ( v52 >= (float)((float)(v55 - v54) + -32.0) )
      {
        if ( v52 > (float)(v55 + 32.0) )
          v52 = v52 - (float)(v54 + 64.0);
      }
      else
      {
        v52 = v52 + (float)(v54 + 64.0);
      }
      v56 = *v4;
      if ( *v5 > v3 )
        v56 = (float *)((char *)v56 + v1);
      *v56 = v50;
      v56[1] = v52;
      v56[2] = v34;
    }
LABEL_39:
    v2 += 4;
    v1 += 12;
    ++v3;
  }
  while ( v2 != 600 );
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 1145569280;
  FIELD_U64(a1, 6308) = 1065353216;
  FIELD_U64(a1, 6316) = 0;
  FIELD_U64(a1, 6324) = 0x3F80000000000000LL;
  FIELD_U64(a1, 6332) = 0;
  FIELD_U64(a1, 6340) = 0;
  FIELD_U64(a1, 6348) = 0x444800003F800000LL;
  FIELD_U32(a1, 6460) = -65281;
  FIELD_U32(a1, 6464) = -16776961;
  if ( FIELD_U32(a1, 6492) == 3 )
  {
    v57 = *(_DWORD *)sub_60008598(ActorMgr__instance, 85, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C82848 & ~(1617579664 << v58) & 1) == 0 && _cxa_guard_acquire(&dword_60C82848) )
    {
      dword_60C82844 = (int)&off_60BC8348;
      _cxa_guard_release(&dword_60C82848);
    }
    if ( v57 && (**(int (__fastcall ***)(int, int *))v57)(v57, &dword_60C82844) == 1 )
    {
      v59 = (unsigned int)(float)((float)((float)(FIELD_F32(v57, 112) + 800.0) / 48.0) * 255.0);
      v60 = v59 | 0xFF000000;
      HIWORD(v59) = -1;
      FIELD_U32(a1, 6460) = v59;
      FIELD_U32(a1, 6464) = v60;
    }
  }
  return 1;
}
