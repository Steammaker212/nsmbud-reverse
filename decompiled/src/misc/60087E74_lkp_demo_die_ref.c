/* lkp_demo_die_ref
 * address: 0x60087E74   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall lkp_demo_die_ref(_DWORD *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r0
  int v5; // r5
  char v6; // r12
  _DWORD v8[8]; // [sp+0h] [bp-20h] BYREF

  v2 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                374,
                                                *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611169468 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v2 )
    (**v2)(v2, &dword_60C81734);
  v4 = a1[1775];
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lkp_demo_die";
  sub_60421AE4(v4, v8, 0);
  a1[39] = 0;
  a1[41] = 0;
  v5 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( ((unsigned int)&dword_60C81200 & ~(1611169708 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
  {
    dword_60C811FC = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C81200);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C811FC) == 1 )
    FIELD_U8(v5, 6220) = 1;
  a1[29] = -1018691584;
  return PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, (int)(a1 + 1661));
}
