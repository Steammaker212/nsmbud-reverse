/* sub_605E456C
 * address: 0x605E456C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E456C(int a1, int a2)
{
  StateMethodExecuter *v3; // r5
  char v4; // r12

  v3 = (StateMethodExecuter *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)&dword_60C7B410 & ~(1616790952 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  if ( v3 && (*(int (__fastcall **)(StateMethodExecuter *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C7B40C) == 1 )
    sub_605E4094(v3, a2);
  return 1;
}
