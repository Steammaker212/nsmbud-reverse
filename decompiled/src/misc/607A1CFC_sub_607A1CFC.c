/* sub_607A1CFC
 * address: 0x607A1CFC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A1CFC(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int result; // r0

  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12792));
  if ( ((unsigned int)dword_60CC42F8 & ~(1618615608 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CC42F8) )
  {
    dword_60CC42F4 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CC42F8);
  }
  if ( !v2 || (result = (**v2)(v2, &dword_60CC42F4)) == 0 )
  {
    FIELD_U32(a1, 1204) &= ~0x10u;
    return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 0);
  }
  return result;
}
