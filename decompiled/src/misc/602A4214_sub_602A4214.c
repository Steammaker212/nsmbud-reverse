/* sub_602A4214
 * address: 0x602A4214   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A4214(unsigned int *a1, int a2)
{
  int result; // r0
  char v4; // r12
  int v5; // r4

  sub_6000B690(a1, a2);
  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  v5 = result;
  if ( result )
  {
    if ( ((unsigned int)dword_60C7B430 & ~(1613382232 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    result = (**(int (__fastcall ***)(int, int *))v5)(v5, &Enemy_RTTI);
    if ( result == 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 72))(v5);
      return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)v5 + 192))(v5, &stru_60C90950);
    }
  }
  return result;
}
