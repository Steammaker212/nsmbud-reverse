/* sub_602D2240
 * address: 0x602D2240   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D2240(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  char v9; // r12
  char v10; // r12
  float32x2_t v11; // d0
  float32x2_t v12; // d2
  int v13; // r0
  int v14; // r0
  float v15; // s16
  float v16; // s20
  float v17; // s18
  float v18; // s0
  float v19; // s0
  float v20; // s0
  float v21; // s2
  float v22; // s4
  int v23; // r0
  float v24; // r6
  float v25; // r7
  float v26; // s18
  int v27; // r0
  int v28; // r0
  float v29; // s20
  float v30; // s24
  float v31; // s18
  float v32; // s0
  float v33; // s0
  float v34; // s0

  v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 80));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613570696 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
  {
    FIELD_U32(a1, 100) = a3;
    if ( ((unsigned int)dword_60C91A84 & ~(1613570816 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C91A84) )
    {
      dword_60C91A84[1] = 0x4000000;
      dword_60C91A84[2] = -67108864;
      _cxa_guard_release(dword_60C91A84);
    }
    FIELD_U32(a1, 24) += dword_60C91A84[FIELD_U32(v8, 80) + 1];
    v13 = FIELD_U32(a1, 96);
    if ( v13 == 2 )
    {
      if ( a2 != 1 )
      {
        v12.n64_u32[0] = -5.0;
        v11.n64_f32[0] = FIELD_F32(a1, 36) + -0.1875;
        v34 = vmax_f32(v11, v12).n64_f32[0];
        FIELD_F32(a1, 36) = v34;
        FIELD_F32(a1, 8) = FIELD_F32(a1, 8) + FIELD_F32(a1, 32);
        FIELD_F32(a1, 12) = FIELD_F32(a1, 12) + v34;
        FIELD_F32(a1, 16) = FIELD_F32(a1, 16) + FIELD_F32(a1, 40);
        return 1;
      }
    }
    else
    {
      if ( v13 != 1 )
        return 1;
      if ( a2 == 1 )
      {
        v14 = a4 + 12 * FIELD_U32(a1, 100);
        v15 = *(float *)(v14 - 8) - FIELD_F32(a1, 12);
        v16 = *(float *)(v14 - 12) - FIELD_F32(a1, 8);
        v17 = *(float *)(v14 - 4) - FIELD_F32(a1, 16);
        v18 = sqrtf((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v17 * v17));
        if ( v18 > 0.0 )
        {
          v19 = 1.0 / v18;
          v17 = v17 * v19;
          v15 = v15 * v19;
          v16 = v16 * v19;
        }
        FIELD_F32(a1, 32) = v16;
        FIELD_F32(a1, 36) = v15;
        FIELD_F32(a1, 40) = v17;
        return 1;
      }
      v20 = FIELD_F32(a1, 8) + FIELD_F32(a1, 32);
      FIELD_F32(a1, 8) = v20;
      v21 = FIELD_F32(a1, 12) + FIELD_F32(a1, 36);
      FIELD_F32(a1, 12) = v21;
      v22 = FIELD_F32(a1, 16) + FIELD_F32(a1, 40);
      FIELD_F32(a1, 16) = v22;
      v23 = a4 + 12 * FIELD_U32(a1, 100);
      v24 = *(float *)(v23 - 8);
      v25 = *(float *)(v23 - 4);
      v26 = *(float *)(v23 - 12);
      if ( sqrtf(
             (float)((float)((float)(v24 - v21) * (float)(v24 - v21)) + (float)((float)(v26 - v20) * (float)(v26 - v20)))
           + (float)((float)(v25 - v22) * (float)(v25 - v22))) >= 1.0 )
        return 1;
      FIELD_U32(a1, 8) = *(_DWORD *)(v23 - 12);
      FIELD_F32(a1, 12) = v24;
      FIELD_F32(a1, 16) = v25;
      v27 = FIELD_U32(a1, 100);
      FIELD_U32(a1, 100) = v27 - 1;
      if ( v27 >= 2 )
      {
        v28 = a4 + 12 * v27;
        v29 = *(float *)(v28 - 20) - v24;
        v30 = *(float *)(v28 - 24) - v26;
        v31 = *(float *)(v28 - 16) - v25;
        v32 = sqrtf((float)((float)(v29 * v29) + (float)(v30 * v30)) + (float)(v31 * v31));
        if ( v32 > 0.0 )
        {
          v33 = 1.0 / v32;
          v31 = v31 * v33;
          v29 = v29 * v33;
          v30 = v30 * v33;
        }
        FIELD_F32(a1, 32) = v30;
        FIELD_F32(a1, 36) = v29;
        FIELD_F32(a1, 40) = v31;
        return 1;
      }
      FIELD_U32(a1, 96) = 2;
    }
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 36) = 1082130432;
    FIELD_U32(a1, 40) = 0;
  }
  return 1;
}
