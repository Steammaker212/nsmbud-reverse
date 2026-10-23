/* sub_60138278
 * address: 0x60138278   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60138278(int a1)
{
  int v1; // r4
  char v2; // r12

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)dword_60C87964 & ~(1611891376 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
  {
    dword_60C87960 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C87964);
  }
  if ( v1 && (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C87960) == 1 )
    StateMgr__changeState((StateMgr *)(v1 + 6084), &stru_60C8793C);
  return 1;
}
