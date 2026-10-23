/* sub_601A2104
 * address: 0x601A2104   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMgr *__fastcall sub_601A2104(StateMgr *result)
{
  int currentMethodExecuter; // r1

  currentMethodExecuter = (int)result[18700].currentMethodExecuter;
  result[18700].currentMethodExecuter = (StateMethodExecuter *)(currentMethodExecuter - 1);
  if ( currentMethodExecuter <= 1 )
    return (StateMgr *)StateMgr__changeState(result + 179, (StateBase *)&dword_60C89FDC);
  return result;
}
