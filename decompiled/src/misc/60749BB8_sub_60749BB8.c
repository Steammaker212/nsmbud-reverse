/* sub_60749BB8
 * address: 0x60749BB8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60749BB8(StateMethodExecuter *result)
{
  if ( !result[56].owner )
    return StateMgr__changeState((StateMgr *)&result[59].owner, (StateBase *)&dword_60CBE760);
  return result;
}
