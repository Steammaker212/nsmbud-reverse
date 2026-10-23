/* sub_60635B1C
 * address: 0x60635B1C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60635B1C(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // s16
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  float *v9; // r0
  int *v10; // r2

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 794, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1617124192 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = 0.0;
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
    v4 = FIELD_F32(v2, 644);
  v5 = (int)(float)(v4 * 536870000.0);
  v6 = v5 + FIELD_U32(a1, 1272);
  v7 = v6 + ((v5 >> 31) & 0xF8000000 | 0x4000000);
  v8 = v6 & 0xFFFFFF;
  FIELD_U32(a1, 1272) = v7;
  v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v10 = dword_60635C98;
  if ( (float)(v4 * 268440000.0) < 0.0 )
    v10 = &dword_60635C98[1];
  FIELD_U32(a1, 164) = (int)(float)((float)((float)((float)(v4 * 268440000.0) + *(float *)v10)
                                             * (float)(*v9
                                                     + (float)((float)(v9[1] * (float)(unsigned int)v8) * 0.000000059605)))
                                     + (float)(v4 * 1073700000.0));
  return v4;
}
