/* sub_601B6A6C
 * address: 0x601B6A6C   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B6A6C(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  _DWORD *v5; // r2
  unsigned int v6; // r0
  unsigned int v7; // r2
  int v8; // r1
  int v9; // s2
  int v10; // r2
  float v11; // s9
  float v12; // s13
  float v13; // s15
  float *v14; // r3
  float *v15; // r1
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s10
  float v20; // s5
  float v21; // s6
  float v22; // s1
  float v23; // s14
  float v24; // s20
  float v25; // s16
  int v26; // r0
  int v27; // r0
  int v28; // r0
  bool v29; // zf
  StateBase *CurrentState; // r0
  int v32; // r6
  StateBase *v33; // r0
  int v34; // r6
  int v35; // r6
  signed int v36[12]; // [sp+4h] [bp-64h] BYREF
  signed int v37; // [sp+34h] [bp-34h] BYREF

  v2 = FIELD_U32(a1, 264) | 1;
  v3 = v2 == 7;
  if ( v2 == 7 )
    v3 = FIELD_U32(a1, 276) == 0;
  if ( v3 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 904));
    v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v32 != (*(int (**)(void))(dword_60C8AE2C + 8))() )
    {
      v33 = StateMgr__getCurrentState((StateMgr *)(a1 + 904));
      v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33);
      if ( v34 != (*(int (**)(void))(stru_60C8AE50 + 8))() )
      {
        v35 = (*(int (**)(void))(dword_60C8AE2C + 8))();
        if ( v35 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
          FIELD_U16(a1, 440) &= ~4u;
        StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8AE2C);
      }
    }
  }
  if ( (FIELD_U8(a1, 1109) & 3) != 0 )
    FIELD_U32(a1, 1020) = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
  if ( sub_601C4404(a1) == 1 )
    StateMgr__execute((StateMgr *)(a1 + 904));
  sub_601861EC((Actor *)a1);
  v4 = FIELD_U32(a1, 1108);
  if ( (v4 & 0x300) != 0 )
  {
    v5 = &unk_60AFC47C;
    if ( (v4 & 0x200) != 0 )
      v5 = &unk_60AFC488;
    v36[0] = v5[1];
    v37 = v5[2];
    sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), v36, &v37);
    if ( FIELD_U32(a1, 180) == FIELD_U32(a1, 1024) )
      FIELD_U32(a1, 1108) &= 0xFFFFFCFF;
    FIELD_U32(a1, 1020) = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
  }
  v6 = FIELD_U32(a1, 176);
  v7 = FIELD_U32(a1, 180);
  v8 = (v7 >> 20) & 0xFF0;
  v9 = v7 & 0xFFFFFF;
  v10 = (v6 >> 20) & 0xFF0;
  v11 = FIELD_F32(a1, 128);
  v12 = FIELD_F32(a1, 136);
  v13 = FIELD_F32(a1, 296);
  v14 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 184) >> 20) & 0xFF0));
  v15 = (float *)((char *)sinLutTable + v8);
  v16 = (float)(FIELD_U32(a1, 184) & 0xFFFFFF) * 0.000000059605;
  v17 = (float)(unsigned int)v9 * 0.000000059605;
  v18 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v19 = v14[2] + (float)(v16 * v14[3]);
  v20 = v15[2] + (float)(v17 * v15[3]);
  v21 = *v14 + (float)(v16 * v14[1]);
  v22 = *v15 + (float)(v17 * v15[1]);
  v23 = v13 * FIELD_F32(a1, 132);
  v24 = *(float *)((char *)&sinLutTable[2] + v10) + (float)(v18 * *(float *)((char *)&sinLutTable[3] + v10));
  v25 = *(float *)((char *)sinLutTable + v10) + (float)(v18 * *(float *)((char *)&sinLutTable[1] + v10));
  *(float *)v36 = (float)(v13 * v11) * (float)(v20 * v19);
  *(float *)&v36[4] = (float)(v13 * v11) * (float)(v20 * v21);
  *(float *)&v36[8] = -(float)((float)(v13 * v11) * v22);
  *(float *)&v36[1] = v23 * (float)((float)((float)(v25 * v22) * v19) - (float)(v24 * v21));
  *(float *)&v36[5] = v23 * (float)((float)(v24 * v19) + (float)((float)(v25 * v22) * v21));
  *(float *)&v36[9] = v23 * (float)(v25 * v20);
  *(float *)&v36[2] = (float)(v13 * v12) * (float)((float)(v22 * (float)(v24 * v19)) + (float)(v25 * v21));
  *(float *)&v36[6] = (float)(v13 * v12) * (float)((float)(v22 * (float)(v24 * v21)) - (float)(v25 * v19));
  *(float *)&v36[10] = (float)(v13 * v12) * (float)(v24 * v20);
  v36[3] = FIELD_U32(a1, 80);
  v36[7] = FIELD_U32(a1, 84);
  v36[11] = FIELD_U32(a1, 88);
  if ( (FIELD_U32(a1, 264) & 0xFFFFFFFE) == 6 )
  {
    sub_605EA6F0(FIELD_U32(a1, 944));
    sub_605EA7EC(FIELD_U32(a1, 944), v36);
  }
  else
  {
    sub_601C61A0(a1, *(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920));
    if ( (FIELD_U8(a1, 1108) & 0x80) == 0 )
      ((void (__fastcall *)(_DWORD, signed int *))loc_60793FF0)(
        *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4),
        v36);
    v26 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4);
    (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 148))(v26);
    sub_601C5484(a1);
  }
  sub_601C581C(a1);
  sub_601C5900(a1);
  if ( ((FIELD_U32(a1, 264) & 0xFFFFFFFE) != 6 || (FIELD_U32(a1, 264) | 1) == 7)
    && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1) == 1
    && (sub_601C3E34(a1) == 1 || sub_601C68A8(a1, FIELD_U32(a1, 1056), FIELD_U32(a1, 1060)) == 1) )
  {
    v27 = sub_601C676C(a1, FIELD_U32(a1, 1056), FIELD_U32(a1, 1060));
    sub_601C6184(a1, v27, FIELD_F32(a1, 200));
  }
  if ( sub_601C4270(a1, FIELD_U32(a1, 1056)) != 1 )
    goto LABEL_32;
  v28 = FIELD_U32(a1, 1060);
  v29 = v28 == 145;
  if ( v28 != 145 )
    v29 = v28 == 22;
  if ( v29 )
  {
    if ( FIELD_S32(a1, 432) < 0 )
      FIELD_U32(a1, 432) = sub_601C697C(a1, 11, 0);
  }
  else
  {
LABEL_32:
    sub_601C69B0(a1);
  }
  return 1;
}
