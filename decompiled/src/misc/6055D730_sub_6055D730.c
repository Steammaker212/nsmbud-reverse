/* sub_6055D730
 * address: 0x6055D730   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055D730(StateMethodExecuter *result)
{
  if ( !BYTE2(result[394].owner) )
  {
    result[3].owner = &dword_60CADF10;
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CADEB0);
  }
  return result;
}
