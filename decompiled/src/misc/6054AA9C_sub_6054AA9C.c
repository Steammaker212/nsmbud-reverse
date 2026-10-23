/* sub_6054AA9C
 * address: 0x6054AA9C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6054AA9C()
{
  int v0; // r5
  int *v1; // r0
  char v2; // r12
  int v3; // r4
  int *v4; // r1
  bool v5; // zf
  float v6; // s2
  float v7; // s4
  float v8; // s8
  float v9; // s2
  float v10; // s0
  float v11; // s4

  v1 = (int *)sub_60008598(ActorMgr__instance, 459, FIELD_U32(ActorMgr__instance, 27172));
  v3 = 0;
  v4 = *(int **)(ActorMgr__instance + 27180);
  v5 = v1 == v4;
  if ( v1 != v4 )
  {
    v0 = *v1;
    v5 = *v1 == 0;
  }
  if ( !v5 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1616161524 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v0)(v0, &StageActor_RTTI) == 1 )
    {
      v3 = 1;
      if ( (float)((float)((float)(FIELD_F32(dword_60CC6484, 40) + FIELD_F32(dword_60CC6484, 48)) * 0.5)
                 - (float)((float)((float)(FIELD_F32(dword_60CC6484, 48) - FIELD_F32(dword_60CC6484, 40)) + 200.0)
                         * 0.5)) <= FIELD_F32(v0, 108) )
      {
        v6 = FIELD_F32(dword_60CC6484, 44);
        v7 = FIELD_F32(dword_60CC6484, 52);
        v8 = v7 - v6;
        v9 = (float)(v6 + v7) * 0.5;
        v10 = (float)(v8 + 50.0) * 0.5;
        v11 = FIELD_F32(v0, 112);
        if ( (float)(v9 - v10) <= v11 )
          return v11 > (float)(v9 + v10);
      }
    }
  }
  return v3;
}
