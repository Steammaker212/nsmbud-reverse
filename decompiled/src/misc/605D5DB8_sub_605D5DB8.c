/* sub_605D5DB8
 * address: 0x605D5DB8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_605D5DB8(int a1))(_DWORD, int *)
{
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( !v1 )
    return 0;
  if ( ((unsigned int)&dword_60C7B364 & ~(1616731640 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !(**v1)(v1, &StageActor_RTTI) )
    return 0;
  return v1;
}
