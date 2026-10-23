/* sub_6050B174
 * address: 0x6050B174   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6050B174(StateMethodExecuter *result)
{
  if ( BYTE2(result[299].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA7E80);
  return result;
}
