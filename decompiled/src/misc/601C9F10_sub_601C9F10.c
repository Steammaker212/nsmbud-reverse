/* sub_601C9F10
 * address: 0x601C9F10   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601C9F10(int a1)
{
  char v1; // r12
  int v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r5
  StateMethodExecuter *result; // r0

  v2 = a1;
  while ( 1 )
  {
    v2 = FIELD_U32(v2, 272);
    if ( ((unsigned int)&dword_60C8AB28 & ~(1612488556 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
    {
      dword_60C8AB24 = (int)&off_60BD4BBC;
      _cxa_guard_release(&dword_60C8AB28);
    }
    if ( !v2 || (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8AB24) != 1 )
      break;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 92))(v2) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 904));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (StateMethodExecuter *)(*((int (__fastcall **)(StateBase *))stru_60C8ADFC.vtable + 2))(&stru_60C8ADFC);
      if ( (StateMethodExecuter *)v4 != result )
        return result;
    }
  }
  return sub_601B1FA4(a1, (StateBase *)&unk_60C8AA04);
}
