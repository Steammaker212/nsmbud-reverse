/* sub_601BB600
 * address: 0x601BB600   size: 1588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BB600(int a1)
{
  float32x2_t v1; // d12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  bool v6; // vf
  int v7; // r1
  _DWORD *v8; // r0
  int v9; // r5
  StateMethodExecuter *result; // r0
  int v11; // r5
  float v12; // s2
  float v13; // s0
  float v14; // s6
  float v15; // s8
  float v16; // s2
  bool v17; // fnf
  _BOOL4 v18; // r7
  float v19; // s2
  int v20; // r9
  float v21; // s0
  float v22; // s0
  int v23; // r0
  int v24; // s2
  float v25; // s0
  float v26; // s2
  int v27; // r7
  float *v28; // r0
  float v29; // s28
  float v30; // s20
  float v31; // s26
  int v32; // r0
  float32x2_t v33; // d1
  float v34; // s22
  float v35; // s6
  float v36; // s0
  float v37; // s4
  float v38; // s0
  float v39; // s4
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r1
  _DWORD *v44; // r7
  int v45; // r0
  int v46; // r1
  int v47; // r1
  float v48; // s2
  _DWORD *v49; // r0
  int v50; // r5
  int a5; // [sp+0h] [bp-60h] BYREF
  signed int v52; // [sp+4h] [bp-5Ch] BYREF

  if ( sub_601BBC60() == 1 )
  {
    FIELD_U32(a1, 1108) &= ~8u;
    v3 = FIELD_U32(a1, 1132);
    if ( FIELD_S32(a1, 1144) >= 1 )
    {
      v4 = FIELD_U32(a1, 1136);
      v5 = FIELD_U32(a1, 1140);
      v6 = __OFSUB__(v5, v4);
      v7 = v5 - v4;
      if ( v7 < 0 != v6 )
        v7 = FIELD_U32(a1, 1140);
      v3 += 60 * v7;
    }
    v8 = (_DWORD *)sub_601E0040(v3);
    FIELD_U32(a1, 984) = *v8;
    FIELD_U32(a1, 988) = v8[1];
    FIELD_U32(a1, 992) = v8[2];
    v9 = (*(int (**)(void))(dword_60C8ABF8 + 8))();
    if ( v9 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8ABF8);
  }
  v11 = sub_601CF9C0(dword_60C8AEF0);
  v12 = FIELD_F32(v11, 84) - FIELD_F32(v11, 96);
  v13 = FIELD_F32(v11, 80) - FIELD_F32(v11, 92);
  v14 = FIELD_F32(a1, 88) - FIELD_F32(a1, 968);
  v15 = FIELD_F32(a1, 80) - FIELD_F32(a1, 960);
  v16 = (float)((float)(v12 * v12) + (float)(v13 * v13))
      + (float)((float)(FIELD_F32(v11, 88) - FIELD_F32(v11, 100))
              * (float)(FIELD_F32(v11, 88) - FIELD_F32(v11, 100)));
  v17 = v16 < -0.00000011921;
  v18 = v16 > 0.00000011921;
  v19 = sqrtf((float)(v14 * v14) + (float)(v15 * v15));
  v20 = v17 || v18;
  if ( v19 > 100.0 )
  {
    v21 = 1.2;
LABEL_13:
    v22 = v21 * 8.0;
    FIELD_F32(a1, 1036) = v22;
    goto LABEL_15;
  }
  if ( v19 < 70.0 )
  {
    v21 = 0.9;
    goto LABEL_13;
  }
  v22 = FIELD_F32(a1, 1036);
LABEL_15:
  FIELD_F32(a1, 200) = FIELD_F32(a1, 200) + (float)((float)(v22 - FIELD_F32(a1, 200)) * 0.1);
  v23 = sub_601CF9C0(dword_60C8AEF0);
  *(__n64 *)(a1 + 960) = sub_601BA56C(a1, (float *)(v23 + 80), FIELD_U32(v23, 180));
  FIELD_U32(a1, 968) = v24;
  FIELD_U32(a1, 1024) = sub_608332B0(a1 + 80, a1 + 960);
  v52 = 0x10000000;
  a5 = 0x100000;
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), &v52, &a5);
  FIELD_U32(a1, 192) = FIELD_U32(a1, 1024);
  FIELD_U32(a1, 1020) = FIELD_U32(v11, 180);
  if ( v20 == 1 )
  {
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    v25 = FIELD_F32(a1, 960);
    v26 = FIELD_F32(a1, 968);
    if ( (float)((float)((float)((float)(FIELD_F32(a1, 92) - v25) * (float)(FIELD_F32(a1, 80) - v25)) + 0.0)
               + (float)((float)(FIELD_F32(a1, 100) - v26) * (float)(FIELD_F32(a1, 88) - v26))) < 0.0 )
    {
      FIELD_F32(a1, 80) = v25;
      FIELD_U32(a1, 84) = FIELD_U32(a1, 964);
      FIELD_F32(a1, 88) = v26;
    }
  }
  else
  {
    sub_608332CC(a1 + 80, a1 + 960, 0.1, 10.0, 1.0);
  }
  v27 = sub_601E0070(a1 + 1148, a1 + 1160);
  if ( FIELD_U32(a1, 1148) == FIELD_U32(a1, 1160)
    && FIELD_U32(a1, 1152) == FIELD_U32(a1, 1164)
    && FIELD_U32(a1, 1156) == FIELD_U32(a1, 1168) )
  {
    v27 = 3;
  }
  v28 = (float *)sub_601E0040(a1 + 1148);
  v29 = *v28;
  v30 = v28[1];
  v31 = v28[2];
  v32 = sub_601E0040(a1 + 1160);
  v1.n64_u32[0] = 0;
  v33.n64_u32[0] = *(_DWORD *)v32;
  v34 = FIELD_F32(v32, 4);
  v35 = FIELD_F32(v32, 8);
  if ( (unsigned int)(v27 - 4) < 2 )
  {
    v36 = v29 - v33.n64_f32[0];
    if ( (float)(v29 - v33.n64_f32[0]) > 0.00000011921 || v36 < -0.00000011921 )
    {
      v37 = FIELD_F32(a1, 80) - v29;
      goto LABEL_31;
    }
  }
  else if ( (unsigned int)(v27 - 2) <= 1 )
  {
    v36 = v31 - v35;
    if ( (float)(v31 - v35) > 0.00000011921 || v36 < -0.00000011921 )
    {
      v37 = FIELD_F32(a1, 88) - v31;
LABEL_31:
      v1.n64_f32[0] = fabsf(v37) / fabsf(v36);
    }
  }
  v38 = FIELD_F32(a1, 80);
  v39 = FIELD_F32(a1, 88);
  if ( (float)((float)((float)(v39 - v35) * (float)(v39 - v35))
             + (float)((float)(v38 - v33.n64_f32[0]) * (float)(v38 - v33.n64_f32[0]))) > (float)((float)((float)(FIELD_F32(a1, 100) - v35) * (float)(FIELD_F32(a1, 100) - v35))
                                                                                               + (float)((float)(FIELD_F32(a1, 92) - v33.n64_f32[0]) * (float)(FIELD_F32(a1, 92) - v33.n64_f32[0])))
    || v1.n64_f32[0] > 1.0 && FIELD_F32(a1, 1040) < 1.0 )
  {
    v40 = FIELD_U32(a1, 1144);
    if ( v40 )
    {
      if ( v40 >= 1 )
      {
        v41 = FIELD_U32(a1, 1136);
        v42 = FIELD_U32(a1, 1140);
        v6 = __OFSUB__(v42, v41);
        v43 = v42 - v41;
        if ( v43 < 0 != v6 )
          v43 = FIELD_U32(a1, 1140);
        v44 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v43);
        sub_6019EC34((_DWORD *)(a1 + 1148), v44);
        sub_6019EC34((_DWORD *)(a1 + 1160), v44 + 3);
        FIELD_U32(a1, 1172) = v44[6];
        FIELD_U32(a1, 1176) = v44[7];
        FIELD_U32(a1, 1180) = v44[8];
        FIELD_U32(a1, 1184) = v44[9];
        FIELD_U32(a1, 1188) = v44[10];
        FIELD_U32(a1, 1192) = v44[11];
        v45 = v44[12];
        v46 = v44[13];
        FIELD_U32(a1, 1204) = v44[14];
        FIELD_U32(a1, 1200) = v46;
        FIELD_U32(a1, 1196) = v45;
        v47 = FIELD_U32(a1, 1140) + 1;
        if ( v47 >= FIELD_U32(a1, 1136) )
          v47 = 0;
        FIELD_U32(a1, 1140) = v47;
        --FIELD_U32(a1, 1144);
      }
      FIELD_U32(a1, 1096) = sub_601E0070(a1 + 1148, a1 + 1160);
      sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(a1 + 1148));
      sub_601B83F8(a1, 0);
      v38 = FIELD_F32(a1, 80);
      v39 = FIELD_F32(a1, 88);
    }
  }
  v33.n64_u32[0] = 1.0;
  FIELD_U32(a1, 1040) = v1.n64_u32[0];
  result = 0;
  FIELD_F32(a1, 84) = v30 + (float)((float)(v34 - v30) * vmin_f32(v1, v33).n64_f32[0]);
  v48 = (float)((float)(v39 - FIELD_F32(a1, 968)) * (float)(v39 - FIELD_F32(a1, 968)))
      + (float)((float)(v38 - FIELD_F32(a1, 960)) * (float)(v38 - FIELD_F32(a1, 960)));
  if ( !(v20 | (v48 < -0.00000011921 || v48 > 0.00000011921)) )
  {
    FIELD_U32(a1, 200) = 0;
    sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(v11 + 1032));
    v49 = (_DWORD *)sub_601E0040(a1 + 1084);
    FIELD_U32(a1, 984) = *v49;
    FIELD_U32(a1, 988) = v49[1];
    FIELD_U32(a1, 992) = v49[2];
    v50 = (*((int (**)(void))stru_60C8ABD4.vtable + 2))();
    if ( v50 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    return StateMgr__changeState((StateMgr *)(a1 + 904), &stru_60C8ABD4);
  }
  return result;
}
