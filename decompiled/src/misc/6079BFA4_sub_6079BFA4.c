/* sub_6079BFA4
 * address: 0x6079BFA4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079BFA4(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12

  FIELD_U32(a1, 12992) = FIELD_U32(a2, 8);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12996));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618591724 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v3 && (**v3)(v3, &dword_60C7B370) == 1 )
    return sub_60794954(a1 + 11356, 183, 5.0, 0.0);
  else
    return sub_60794954(a1 + 11356, 140, 30.0, 0.0);
}
