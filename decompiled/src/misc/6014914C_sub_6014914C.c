/* sub_6014914C
 * address: 0x6014914C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6014914C(int a1)
{
  int v2; // r5
  char v3; // r12
  StateMethodExecuter *result; // r0

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11872));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611960712 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) && !FIELD_U8(v2, 536) )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 11864);
    if ( FIELD_U8(a1, 11864) )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C881B0);
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
    return (StateMethodExecuter *)1;
  }
  return result;
}
