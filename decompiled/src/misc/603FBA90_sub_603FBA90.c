/* sub_603FBA90
 * address: 0x603FBA90   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603FBA90(int a1)
{
  StateMethodExecuter *result; // r0

  result = *(StateMethodExecuter **)(a1 + 204);
  if ( result )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD9B4);
  return result;
}
