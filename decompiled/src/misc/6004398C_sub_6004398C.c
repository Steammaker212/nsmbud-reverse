/* sub_6004398C
 * address: 0x6004398C   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004398C(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r7
  unsigned int v7; // r6
  int v8; // r5
  float *v9; // r0
  float *v10; // r2
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  int **v20; // r7
  int *v21; // r0
  int v22; // r6
  char v23; // r12
  int v24; // r1
  float *v25; // r2
  float *v26; // r3
  float v27; // s10
  float v28; // s4
  float *v29; // r7
  float v30; // s2
  StateBase *CurrentState; // r0
  int v32; // r6
  StateBase *v33; // r0
  int v34; // r5
  float v36[20]; // [sp+0h] [bp-50h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
  v15 = v10[2] + (float)(v12 * v10[3]);
  v16 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
  v17 = *v10 + (float)(v12 * v10[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = v9[2] + (float)(v13 * v9[3]);
  v36[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v36[4] = v19 * v16;
  v36[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v36[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v36[5] = v19 * v14;
  v36[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v36[2] = v19 * v17;
  v36[6] = -v18;
  v36[10] = v19 * v15;
  v36[3] = v2;
  v36[7] = v3;
  v36[11] = v4;
  v20 = (int **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), v36);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v20 + 68))(**v20, a1 + 144);
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6304) + 12));
  v21 = *(int **)(FIELD_U32(a1, 6304) + 12);
  if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > 1u )
    ++v21;
  Animation_update(*v21);
  Animation_update(FIELD_U32(a1, 6308));
  Animation_update(FIELD_U32(a1, 6312));
  sub_6040EB64(a1 + 11712);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v20 + 52))(**v20);
  v22 = **v20;
  if ( ((unsigned int)&dword_60C80400 & ~(1610890092 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v22 && (**(int (__fastcall ***)(int, int *))v22)(v22, &dword_60C803FC) == 1 )
  {
    v24 = FIELD_U32(v22, 68);
    FIELD_U32(v24, 44) = a1 + 7656;
    FIELD_U16(v24, 42) = -1;
  }
  sub_6040EC24(a1 + 11712, **v20);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v20 + 56))(**v20);
  sub_60043D90(a1, 0);
  v25 = (float *)(a1 + 11360);
  v26 = (float *)(a1 + 11288);
  if ( !FIELD_U32(a1, 11468) )
  {
    v25 = (float *)(a1 + 11252);
    v26 = (float *)(a1 + 11180);
  }
  v27 = v25[2];
  v28 = v26[2];
  v29 = (float *)(a1 + 11164);
  v30 = v25[1] - v26[1];
  FIELD_F32(a1, 11156) = *v25 - *v26;
  FIELD_F32(a1, 11160) = v30;
  FIELD_F32(a1, 11164) = v27 - v28;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v32 == (*(int (**)(void))(dword_60C80248 + 8))() )
  {
    *v29 = 0.0;
  }
  else
  {
    v33 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33);
    if ( v34 == (*(int (**)(void))(dword_60C80288 + 8))() && !FIELD_U8(a1, 11678) )
      *v29 = 0.0;
  }
  FIELD_F32(a1, 11620) = sqrtf(
                             (float)((float)(FIELD_F32(a1, 11160) * FIELD_F32(a1, 11160))
                                   + (float)(FIELD_F32(a1, 11156) * FIELD_F32(a1, 11156)))
                           + (float)(*v29 * *v29));
  return sub_60044328(a1);
}
