/* sub_605B2030
 * address: 0x605B2030   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605B2030(int a1)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_U16(a1, 6764) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0400);
  result = (StateMethodExecuter *)sub_605B2460(a1);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0400);
  return result;
}
