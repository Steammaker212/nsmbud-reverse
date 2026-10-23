/* sub_6050B0CC
 * address: 0x6050B0CC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6050B0CC(StateMethodExecuter *result)
{
  if ( BYTE1(result[299].vtable) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA7E40);
  return result;
}
