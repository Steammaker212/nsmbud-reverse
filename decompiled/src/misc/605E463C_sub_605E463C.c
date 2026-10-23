/* sub_605E463C
 * address: 0x605E463C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605E463C(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12

  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C7B410 & ~(1616791160 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  if ( v3 )
  {
    if ( (**v3)(v3, &dword_60C7B40C) == 1 )
      sub_605E40C0((int)v3, a2);
  }
}
