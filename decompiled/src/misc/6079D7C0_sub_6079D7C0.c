/* sub_6079D7C0
 * address: 0x6079D7C0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6079D7C0(int a1)
{
  int v1; // r4
  char v2; // r12

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618597880 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  return v1 && (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B370) == 1 && FIELD_U32(v1, 1320) == 3;
}
