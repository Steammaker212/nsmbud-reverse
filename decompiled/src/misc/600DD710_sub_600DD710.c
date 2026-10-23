/* sub_600DD710
 * address: 0x600DD710   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DD710(unsigned int *a1)
{
  int v2; // r5
  char v3; // r12

  KoopalingBase__vf370((int)a1);
  (*(void (__fastcall **)(unsigned int *))(*a1 + 696))(a1);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2030]);
  if ( ((unsigned int)&dword_60C84B4C & ~(1611519844 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C84B48) == 1 )
    StateMgr__changeState((StateMgr *)(v2 + 6084), (StateBase *)&dword_60C84D6C);
  a1[2031] = 0;
  return 8124;
}
