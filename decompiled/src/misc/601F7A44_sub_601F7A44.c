/* sub_601F7A44
 * address: 0x601F7A44   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F7A44(StateMgr *a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0

  sub_601F74B4((int)a1);
  result = (StateMethodExecuter *)a1[11].nextState;
  if ( (int)result >= 596523236 )
  {
    a1[56].lastState = (StateBase *)1077936128;
    v3 = sub_608332B0(&a1[5], &a1[52].currentMethodExecuter);
    a1[55].executer = (StateExecuter *)v3;
    a1[12].executer = (StateExecuter *)v3;
    ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
    return StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8BA90);
  }
  return result;
}
