/* sub_6077BE40
 * address: 0x6077BE40   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077BE40(int a1, void (__fastcall ***a2)(_DWORD, int *))
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  char v5; // r12

  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618460284 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v3 && (**v3)(v3, &dword_60C7B370) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B408 & ~(1618460400 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( a2 )
      (**a2)(a2, &dword_60C7B404);
    JUMPOUT(0x607AA0B0);
  }
  return 0;
}
