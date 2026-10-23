/* sub_604EFEF8
 * address: 0x604EFEF8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EFEF8(StateMethodExecuter *result)
{
  if ( HIBYTE(result[3927].owner) && !result[3926].owner )
    return StateMgr__changeState((StateMgr *)&result[3542], &stru_60CA6420);
  if ( !BYTE2(result[3927].owner) && (result[4015].currentState & 0x4000) != 0 )
    return StateMgr__changeState((StateMgr *)&result[3542], &stru_60CA6400);
  return result;
}
