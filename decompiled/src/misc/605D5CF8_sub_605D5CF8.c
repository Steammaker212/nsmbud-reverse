/* sub_605D5CF8
 * address: 0x605D5CF8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D5CF8(int a1)
{
  int result; // r0
  char v2; // r12
  int v3; // r4

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  v3 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1616731448 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI);
    if ( result == 1 )
    {
      FIELD_U8(v3, 19) = 1;
      return 1;
    }
  }
  return result;
}
