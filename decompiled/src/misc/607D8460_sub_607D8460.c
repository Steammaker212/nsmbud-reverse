/* sub_607D8460
 * address: 0x607D8460   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607D8460(int a1)
{
  float v2; // r5
  float *v3; // r8
  float v4; // s0
  float v5; // s2
  int v6; // r1
  int v7; // r0
  float v8; // s24
  float v9; // s22
  float v10; // s16
  float v11; // s18
  float v12; // r6
  float v13; // r7
  float v14; // s20
  float v15; // s0
  float v16; // s0
  int *v17; // r0
  unsigned int v18; // r2
  int v19; // r3
  unsigned int v20; // r0
  int v21; // s0
  float *result; // r0
  float v23; // s4
  float v24; // s2
  float v25; // s6
  float v26; // s0
  float v27; // s8
  float v28; // s4
  float v29; // s6
  float v30; // s0
  float v31; // s2
  float v32; // s0
  unsigned int v33; // r5
  int v34; // r0
  int *v35; // r1
  int speed; // [sp+4h] [bp-54h] BYREF
  int target; // [sp+8h] [bp-50h] BYREF
  unsigned int v38; // [sp+Ch] [bp-4Ch] BYREF
  int v39; // [sp+10h] [bp-48h]

  v2 = 0.0;
  v3 = *(float **)(a1 + 40);
  v4 = FIELD_F32(a1, 56);
  v5 = FIELD_F32(a1, 60);
  v6 = *(__int16 *)v3;
  v7 = *((__int16 *)v3 + 1);
  target = 0;
  v8 = (float)v6;
  v9 = (float)-v7;
  v38 = 0;
  v39 = 0;
  v10 = (float)v6 - v4;
  v11 = v9 - v5;
  if ( v10 <= -0.01 || v10 >= 0.01 || v11 <= -0.01 || v11 >= 0.01 )
  {
    v12 = (float)v6 - v4;
    v13 = v9 - v5;
    v14 = 0.0;
    FIELD_F32(a1, 44) = v10;
    FIELD_F32(a1, 48) = v11;
    FIELD_U32(a1, 52) = 0;
  }
  else
  {
    v12 = FIELD_F32(a1, 44);
    v13 = FIELD_F32(a1, 48);
    v2 = FIELD_F32(a1, 52);
    v14 = v2;
    v11 = v13;
    v10 = v12;
  }
  v15 = sqrtf((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v14 * v14));
  if ( v15 > 0.0 )
  {
    v16 = 1.0 / v15;
    v2 = v14 * v16;
    v13 = v11 * v16;
    v12 = v10 * v16;
  }
  target = sub_6000F7B8(v13, sqrtf((float)(v2 * v2) + (float)(v12 * v12)));
  v38 = sub_6000F7B8(v12, v2);
  v39 = 0;
  v17 = (int *)(a1 + 72);
  if ( FIELD_U8(a1, 98) )
  {
    v18 = v38;
    v19 = v39;
    *v17 = target;
    FIELD_U32(a1, 76) = v18;
    FIELD_U32(a1, 80) = v19;
  }
  else
  {
    speed = 6553600;
    moveValueTo(v17, &target, &speed);
    speed = 6553600;
    moveValueTo((int *)(a1 + 76), (int *)&v38, &speed);
  }
  v20 = FIELD_U32(a1, 72);
  v21 = v20 & 0xFFFFFF;
  result = (float *)((char *)sinLutTable + ((v20 >> 20) & 0xFF0));
  v23 = (float)(unsigned int)v21 * 0.000000059605;
  v24 = v3[1];
  v25 = v3[2];
  v26 = *result + (float)(result[1] * v23);
  v27 = FIELD_F32(a1, 84);
  v28 = (float)(result[2] + (float)(v23 * result[3]))
      * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 76) >> 20) & 0xFF0))
              + (float)(*(float *)((char *)&sinLutTable[1] + ((FIELD_U32(a1, 76) >> 20) & 0xFF0))
                      * (float)((float)(FIELD_U32(a1, 76) & 0xFFFFFF) * 0.000000059605)));
  if ( v27 >= v24 )
  {
    v29 = v27 - v25;
    if ( v29 <= v24 )
      v29 = v3[1];
  }
  else
  {
    v29 = v27 + v25;
    if ( v29 >= v24 )
      v29 = v3[1];
  }
  v30 = v26 * v29;
  FIELD_F32(a1, 84) = v29;
  FIELD_F32(a1, 64) = v28 * v29;
  FIELD_F32(a1, 68) = v30;
  v31 = (float)(v28 * v29) + FIELD_F32(a1, 56);
  FIELD_F32(a1, 56) = v31;
  v32 = FIELD_F32(a1, 60) + v30;
  FIELD_F32(a1, 60) = v32;
  if ( v31 < (float)(v8 + 0.05) && v31 > (float)(v8 + -0.05) )
    FIELD_F32(a1, 56) = v8;
  if ( v32 < (float)(v9 + 0.05) && v32 > (float)(v9 + -0.05) )
    FIELD_F32(a1, 60) = v9;
  if ( (v12 >= 0.0 || v12 <= 0.0) && (v13 >= 0.0 || v13 <= 0.0) )
  {
    if ( FIELD_U8(a1, 99) )
    {
      FIELD_U8(a1, 99) = 0;
    }
    else if ( *((_WORD *)v3 + 6) )
    {
      FIELD_U16(a1, 92) = *((_WORD *)v3 + 6);
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CC56F4);
    }
    v33 = FIELD_U16(a1, 90) + 1;
    if ( v33 < FIELD_U16(a1, 88) )
      goto LABEL_39;
    v34 = FIELD_U8(a1, 101);
    if ( v34 == 2 )
    {
      v35 = &dword_60CC5734;
    }
    else
    {
      if ( v34 == 1 )
      {
        v33 = FIELD_U16(a1, 94);
LABEL_39:
        FIELD_U16(a1, 90) = v33;
        result = (float *)(FIELD_U32(a1, 36) + 20 * v33);
        FIELD_U32(a1, 40) = result;
        return result;
      }
      v35 = &dword_60CC5714;
    }
    StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v35);
    goto LABEL_39;
  }
  return result;
}
