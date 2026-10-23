/* sub_603DD9F0
 * address: 0x603DD9F0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DD9F0(_DWORD *a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12

  a1[1582] = 85;
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1585]);
  if ( ((unsigned int)&dword_60C90E54 & ~(1614666296 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( v2 && (**v2)(v2, &dword_60C90E50) )
    return sub_603DF4C4(a1, v2);
  else
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C993DC);
}
