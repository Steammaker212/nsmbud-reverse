/* sub_607335A4
 * address: 0x607335A4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607335A4(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r4
  char v3; // r12
  int result; // r0
  int v5; // r5
  char v6; // r12
  char v7; // r12

  if ( !FIELD_U32(a1, 84) )
  {
    v5 = *(_DWORD *)sub_60008598(ActorMgr__instance, 831, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C7B364 & ~(1618163336 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1 )
    {
      if ( ((unsigned int)&dword_60CBDBDC & ~(1618163452 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
      {
        dword_60CBDBD8 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60CBDBDC);
      }
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CBDBD8) == 1 )
        FIELD_U32(a1, 84) = FIELD_U32(v5, 8);
    }
  }
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 84));
  if ( ((unsigned int)&dword_60CBDBDC & ~(1618163176 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
  {
    dword_60CBDBD8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBDBDC);
  }
  if ( !v2 )
    return 0;
  result = (**v2)(v2, &dword_60CBDBD8);
  if ( result )
    return (int)v2;
  return result;
}
