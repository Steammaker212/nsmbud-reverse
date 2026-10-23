/* sub_601BB050
 * address: 0x601BB050   size: 1240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BB050(int a1)
{
  float *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int *v6; // r1
  StateMethodExecuter *result; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  float *v11; // r0
  float v12; // r7
  float v13; // r8
  float v14; // r9
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s10
  float v19; // s2
  unsigned int v20; // r5
  float v21; // s4
  float v22; // s2
  int v23; // r0
  int v24; // r5
  int v25; // r2
  int v26; // r3
  bool v27; // vf
  int v28; // r2
  _DWORD *v29; // r5
  int v30; // r0
  int v31; // r1
  int v32; // r1
  int v33; // r5
  _DWORD *v34; // r6
  int v35; // r0
  unsigned int v36; // r0
  int v37; // r5
  signed int v38; // [sp+4h] [bp-4Ch] BYREF
  float v39; // [sp+8h] [bp-48h] BYREF
  float v40; // [sp+Ch] [bp-44h]
  float v41; // [sp+10h] [bp-40h]
  unsigned int v42; // [sp+14h] [bp-3Ch] BYREF

  v2 = (float *)sub_601CF9C0(dword_60C8AEF0);
  v3 = sub_601CF9C0(dword_60C8AEF0);
  if ( (FIELD_U8(a1, 1110) & 2) != 0 )
    goto LABEL_6;
  v4 = FIELD_U32(a1, 1020) - FIELD_U32(v3, 180);
  if ( v4 >= 0 )
    goto LABEL_5;
  if ( v4 == 0x80000000 )
  {
LABEL_6:
    v5 = (*(int (**)(void))(dword_60C8ACAC + 8))();
    if ( v5 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ACAC;
    return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v6);
  }
  v4 = -v4;
LABEL_5:
  if ( (unsigned int)v4 >= 0x20000001 )
    goto LABEL_6;
  if ( FIELD_U32(a1, 1144) )
  {
    if ( sub_601B7B44() )
    {
      v8 = FIELD_U32(a1, 1108) | 8;
    }
    else
    {
      v23 = sub_601B7C04();
      v8 = FIELD_U32(a1, 1108);
      if ( v23 != 1 )
        goto LABEL_22;
      v8 &= ~8u;
    }
    FIELD_U32(a1, 1108) = v8;
LABEL_22:
    if ( (v8 & 8) != 0 )
    {
      if ( FIELD_S32(a1, 1144) >= 1 )
      {
        v25 = FIELD_U32(a1, 1136);
        v26 = FIELD_U32(a1, 1140);
        v27 = __OFSUB__(v26, v25);
        v28 = v26 - v25;
        if ( v28 < 0 != v27 )
          v28 = FIELD_U32(a1, 1140);
        v29 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v28);
        sub_6019EC34((_DWORD *)(a1 + 1148), v29);
        sub_6019EC34((_DWORD *)(a1 + 1160), v29 + 3);
        FIELD_U32(a1, 1172) = v29[6];
        FIELD_U32(a1, 1176) = v29[7];
        FIELD_U32(a1, 1180) = v29[8];
        FIELD_U32(a1, 1184) = v29[9];
        FIELD_U32(a1, 1188) = v29[10];
        FIELD_U32(a1, 1192) = v29[11];
        v30 = v29[12];
        v31 = v29[13];
        FIELD_U32(a1, 1204) = v29[14];
        FIELD_U32(a1, 1200) = v31;
        FIELD_U32(a1, 1196) = v30;
        v32 = FIELD_U32(a1, 1140) + 1;
        if ( v32 >= FIELD_U32(a1, 1136) )
          v32 = 0;
        FIELD_U32(a1, 1140) = v32;
        --FIELD_U32(a1, 1144);
      }
      v33 = (*(int (**)(void))(dword_60C8ACF4 + 8))();
      if ( v33 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v6 = &dword_60C8ACF4;
    }
    else
    {
      v24 = (*(int (**)(void))(dword_60C8ABF8 + 8))();
      if ( v24 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v6 = &dword_60C8ABF8;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v6);
  }
  LOBYTE(v9) = FIELD_U8(a1, 1104) + 1;
  FIELD_U8(a1, 1104) = v9;
  v9 = (unsigned __int8)v9;
  v10 = FIELD_U32(a1, 1460);
  if ( (unsigned __int8)v9 >= v10 )
    v9 = v10 - 1;
  if ( v9 >= 0x15 )
    v9 = 0;
  v11 = (float *)(a1 + 12 * v9);
  v12 = v11[302];
  v13 = v11[303];
  v14 = v11[304];
  v15 = (float)(FIELD_F32(a1, 80) * (float)(1.0 - 0.1)) + (float)(v12 * 0.1);
  v16 = (float)((float)(1.0 - 0.1) * FIELD_F32(a1, 84)) + (float)(v13 * 0.1);
  v17 = (float)((float)(1.0 - 0.1) * FIELD_F32(a1, 88)) + (float)(v14 * 0.1);
  FIELD_F32(a1, 80) = v15;
  FIELD_F32(a1, 84) = v16;
  FIELD_F32(a1, 88) = v17;
  v42 = 0;
  v18 = v2[22];
  v19 = v2[21] - v16;
  v39 = v2[20] - v15;
  v40 = v19;
  v41 = v18 - v17;
  v20 = sub_60186214(a1, &v39);
  if ( FIELD_U8(a1, 1104) >= FIELD_S32(a1, 1460) )
  {
    v42 = v20;
  }
  else
  {
    v21 = FIELD_F32(a1, 88);
    v22 = v13 - FIELD_F32(a1, 84);
    v39 = v12 - FIELD_F32(a1, 80);
    v40 = v22;
    v41 = v14 - v21;
    v42 = sub_60186214(a1, &v39);
  }
  v34 = (_DWORD *)(a1 + 180);
  v39 = 2.5244e-29;
  v38 = 0x100000;
  sub_608322C0((int *)(a1 + 180), (int *)&v42, (signed int *)&v39, &v38);
  result = *(StateMethodExecuter **)(a1 + 1460);
  if ( FIELD_U8(a1, 1104) >= (int)result )
  {
    result = (StateMethodExecuter *)flt_60AFCF9C;
    if ( sqrtf(
           (float)((float)((float)(FIELD_F32(a1, 84) - v13) * (float)(FIELD_F32(a1, 84) - v13))
                 + (float)((float)(FIELD_F32(a1, 80) - v12) * (float)(FIELD_F32(a1, 80) - v12)))
         + (float)((float)(FIELD_F32(a1, 88) - v14) * (float)(FIELD_F32(a1, 88) - v14))) < 5.0 )
    {
      result = (StateMethodExecuter *)(*v34 - v20);
      if ( (int)result < 0 )
      {
        if ( result == (StateMethodExecuter *)0x80000000 )
          return result;
        result = (StateMethodExecuter *)(v20 - *v34);
      }
      if ( (unsigned int)result <= 0x16C16C0 )
      {
        v35 = FIELD_U32(a1, 1108);
        if ( (v35 & 0x400) != 0 )
        {
          v36 = v35 | 0x100;
          FIELD_U32(a1, 1108) = v36;
          FIELD_U32(a1, 1024) = FIELD_U32(a1, 1028);
        }
        else
        {
          v36 = v35 & 0xFFFFFEFF;
          FIELD_U32(a1, 1108) = v36;
        }
        FIELD_U32(a1, 1108) = v36 & 0xFFFFFBFF;
        FIELD_F32(a1, 80) = v12;
        FIELD_F32(a1, 84) = v13;
        FIELD_F32(a1, 88) = v14;
        v37 = (*((int (**)(void))stru_60C8ABD4.vtable + 2))();
        if ( v37 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
          FIELD_U16(a1, 440) &= ~4u;
        return StateMgr__changeState((StateMgr *)(a1 + 904), &stru_60C8ABD4);
      }
    }
  }
  return result;
}
