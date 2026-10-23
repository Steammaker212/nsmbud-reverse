/* sub_600DD80C
 * address: 0x600DD80C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DD80C(int *a1)
{
  int result; // r0
  int v3; // r5
  char v4; // r12

  KoopalingBase__vf36C(a1);
  result = (*(int (__fastcall **)(int *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2030]);
    if ( ((unsigned int)&dword_60C84B4C & ~(1611520100 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
    {
      dword_60C84B48 = (int)&off_60BCCA60;
      _cxa_guard_release(&dword_60C84B4C);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B48) == 1 )
        StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60C84D6C);
    }
    a1[2031] = 0;
    return 8124;
  }
  return result;
}
