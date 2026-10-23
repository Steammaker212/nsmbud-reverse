/* sub_603844D8
 * address: 0x603844D8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603844D8(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int result; // r0

  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C96AA0 & ~(1614300436 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C96AA0) )
  {
    dword_60C96A9C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96AA0);
  }
  if ( v3 )
  {
    result = (**v3)(v3, &dword_60C96A9C);
    if ( result )
      result = (int)v3;
  }
  else
  {
    result = 0;
  }
  if ( !FIELD_U8(result, 6389) )
    return sub_60383BAC(result, a2);
  return result;
}
