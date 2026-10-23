/* sub_6000BBD4
 * address: 0x6000BBD4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6000BBD4(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  int v3; // r4
  char v4; // r12
  __n128 result; // q0
  char v6; // r12
  float v7; // s4
  float v8; // s6
  float v9; // s14
  float v10[16]; // [sp+0h] [bp-40h] BYREF

  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( v3 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610660892 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B408 & ~(1610661000 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( a2 )
      {
        if ( (**a2)(a2, &dword_60C7B404) == 1 )
        {
          mouth_1_ref_3(a2, v10);
          result.n128_f32[0] = v10[3]
                             + (float)((float)((float)(v10[0] * 10.0) - (float)(v10[1] * 7.0)) + (float)(v10[2] * 0.0));
          result.n128_f32[2] = v10[4];
          v7 = v10[5];
          v8 = v10[6];
          v9 = v10[7];
          FIELD_U32(v3, 108) = result.n128_u32[0];
          FIELD_F32(v3, 112) = v9
                               + (float)((float)((float)(result.n128_f32[2] * 10.0) - (float)(v7 * 7.0))
                                       + (float)(v8 * 0.0));
        }
      }
    }
  }
  return result;
}
