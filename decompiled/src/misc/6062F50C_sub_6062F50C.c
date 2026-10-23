/* sub_6062F50C
 * address: 0x6062F50C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6062F50C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_6062FCAC();
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB40A8);
  return result;
}
