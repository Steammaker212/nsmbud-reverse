/* sub_60544144
 * address: 0x60544144   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60544144(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = *(StateMethodExecuter **)(dword_60C99DD0 + 3668);
  if ( !result )
    goto LABEL_5;
  if ( BYTE2(result[86].currentState) )
    return result;
  if ( sub_604B6F58((int)result, BYTE2(result[86].currentState)) )
    v3 = &dword_60CAC0BC;
  else
LABEL_5:
    v3 = &dword_60CAC1FC;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
}
