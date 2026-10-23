/* sub_606F8A54
 * address: 0x606F8A54   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606F8A54(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  char v4; // r12
  int v5; // r0

  v2 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                694,
                                                *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1617922708 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**v2)(v2, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C84734 & ~(1617922824 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84734) )
    {
      dword_60C84730 = (int)&off_60BC8314;
      _cxa_guard_release(&dword_60C84734);
    }
    v5 = (**v2)(v2, &dword_60C84730);
    if ( v5 )
      v5 = (int)v2;
    FIELD_U32(a1, 6144) = v5;
  }
}
