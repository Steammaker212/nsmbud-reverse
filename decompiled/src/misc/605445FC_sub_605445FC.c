/* sub_605445FC
 * address: 0x605445FC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605445FC(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1

  result = *(StateMethodExecuter **)(dword_60C99DD0 + 3668);
  if ( !result )
    goto LABEL_5;
  if ( BYTE2(result[86].currentState) )
    return result;
  if ( sub_604B6F58((int)result, BYTE2(result[86].currentState)) )
    v3 = *(StateBase **)(a1 + 40);
  else
LABEL_5:
    v3 = (StateBase *)&dword_60CAC1FC;
  return StateMgr__changeState((StateMgr *)(a1 + 24), v3);
}
