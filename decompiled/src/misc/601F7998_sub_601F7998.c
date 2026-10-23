/* sub_601F7998
 * address: 0x601F7998   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F7998(StateMgr *a1)
{
  StateBase *nextState; // r0
  StateBase *v3; // r0
  StateMethodExecuter *result; // r0

  nextState = a1[44].nextState;
  if ( nextState )
  {
    v3 = (StateBase *)((char *)nextState - 1);
    a1[44].nextState = v3;
    if ( !v3 )
      sub_601E4C88((_DWORD *)dword_60C8B13C, 93, &a1[5].executer);
  }
  ((void (__fastcall *)(StateMgr *, _DWORD))FIELD_U32(a1, 0x0)[20].vtable)(a1, 0);
  result = (StateMethodExecuter *)((char *)&a1[11].nextState[-126761188].vtable + 3);
  if ( (unsigned int)result < 0x38E38E3 )
  {
    ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
    return StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8BA90);
  }
  return result;
}
