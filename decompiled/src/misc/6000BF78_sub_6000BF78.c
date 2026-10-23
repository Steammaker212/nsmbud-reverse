/* sub_6000BF78
 * address: 0x6000BF78   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6000BF78(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  int v3; // r5
  char v4; // r12
  float result; // s0
  char v6; // r12
  float v7; // s0
  float v8; // s2
  _DWORD v9[16]; // [sp+0h] [bp-40h] BYREF

  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( v3 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610661824 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B408 & ~(1610661932 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( a2 )
      {
        if ( (**a2)(a2, &dword_60C7B404) == 1 )
        {
          tongue_tip_ref_2(a2, v9);
          v7 = FIELD_F32(v3, 576);
          v8 = *(float *)&v9[7];
          FIELD_U32(v3, 108) = v9[3];
          result = v8 - v7;
          FIELD_F32(v3, 112) = result;
        }
      }
    }
  }
  return result;
}
