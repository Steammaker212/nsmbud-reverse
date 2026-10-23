/* attack_st_ref
 * address: 0x6031C664   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall attack_st_ref(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r1
  int v11; // r5
  char v12; // r12
  unsigned int v13; // r0
  int v14; // s10
  float *v15; // r1
  float *result; // r0
  float v17; // s0
  float v18; // s4
  float v19; // s2
  float v20; // s6
  int v21; // r1
  float v22; // s10
  float v23; // s12
  float v24; // s10
  float v25; // s4
  float v26; // s6
  float v27; // s0
  float v28; // s2
  float v29; // s8
  float v30; // s10
  _DWORD v31[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 7124);
  v2 = *(_DWORD **)(a1 + 7124);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v31[0] = &sead__SafeStringBase__vtable;
  v31[1] = "attack_st";
  sub_60421938(v2, ResArchiveById, (int)v31);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v7 + 4));
  v9 = v3[1366] - 1;
  if ( v9 <= 3 )
  {
    v10 = *(_DWORD *)(a1 + 4 * v9 + 6336);
    if ( v10 )
    {
      v11 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v10);
      if ( ((unsigned int)&dword_60C7B364 & ~(1613875040 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &StageActor_RTTI) == 1 )
        FIELD_U32(v11, 6136) = FIELD_U32(a1, 12584);
    }
  }
  v13 = FIELD_U32(a1, 12584);
  if ( (float)(*(float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0))
             + (float)((float)((float)(v13 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v13 >> 20) & 0xFF0)))
                     * 0.000000059605)) < 0.0 )
    v13 = -v13;
  v14 = v13 & 0xFFFFFF;
  v15 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0 ^ 0x800));
  result = (float *)(a1 + 6880);
  v17 = *v15;
  v18 = v15[1];
  v19 = v15[2];
  v20 = v15[3];
  v21 = 32;
  v22 = (float)(unsigned int)v14;
  v23 = v18 * v22;
  v24 = v20 * v22;
  v25 = FIELD_F32(a1, 108);
  v26 = FIELD_F32(a1, 112);
  v27 = v17 + (float)(v23 * 0.000000059605);
  v28 = v19 + (float)(v24 * 0.000000059605);
  do
  {
    v29 = v28 + v25;
    v30 = v27 + v26;
    v21 -= 2;
    v25 = v28 + (float)(v28 + v25);
    v26 = v27 + (float)(v27 + v26);
    *(result - 3) = v29;
    *(result - 2) = v30;
    *(result - 1) = v25;
    *result = v26;
    result += 4;
  }
  while ( v21 );
  return result;
}
