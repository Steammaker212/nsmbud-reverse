/* sub_605476D0
 * address: 0x605476D0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605476D0(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0

  v2 = dword_60C99DD0 + 16;
  result = (StateMethodExecuter *)sub_604B82EC(dword_60C99DD0 + 16);
  if ( !result )
  {
    result = (StateMethodExecuter *)sub_604B80D0(v2);
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAC600);
  }
  return result;
}
