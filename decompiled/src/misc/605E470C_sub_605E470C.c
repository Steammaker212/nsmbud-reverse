/* sub_605E470C
 * address: 0x605E470C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605E470C(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r5
  char v2; // r12

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C7B410 & ~(1616791368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  if ( v1 )
  {
    if ( (**v1)(v1, &dword_60C7B40C) == 1 )
      sub_605E41BC((int)v1);
  }
}
