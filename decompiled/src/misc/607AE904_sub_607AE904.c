/* sub_607AE904
 * address: 0x607AE904   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE904(int a1, int a2, float a3)
{
  int (__fastcall ***v6)(_DWORD, int *); // r6
  char v7; // r12
  int result; // r0

  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12992));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618667852 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v6 && (**v6)(v6, &dword_60C7B370) == 1 )
  {
    result = sub_607AE904(v6, a2, a3);
    if ( a2 == 183 )
      return sub_60794954(a1 + 11356, 183, a3, 0.0);
  }
  else
  {
    result = sub_60794954(a1 + 11356, a2, a3, 0.0);
    if ( a2 == 182 )
      return sub_60793114(*(_DWORD **)(a1 + 11360), 0.0);
  }
  return result;
}
