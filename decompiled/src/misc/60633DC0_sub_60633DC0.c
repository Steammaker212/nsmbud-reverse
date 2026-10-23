/* sub_60633DC0
 * address: 0x60633DC0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60633DC0(int a1)
{
  int v2; // r5
  char v3; // r12

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 371, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C80058 & ~(1617116672 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C80054) == 1 )
  {
    if ( FIELD_U8(v2, 11679) )
    {
      FIELD_U8(a1, 6796) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB4404);
    }
  }
}
