/* sub_6054434C
 * address: 0x6054434C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6054434C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604B7FC8(dword_60C99DD0 + 16);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAC23C);
  return result;
}
