/* sub_604B5D24
 * address: 0x604B5D24   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604B5D24(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604B81E4();
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 3748), (StateBase *)&dword_60CA1D98);
  return result;
}
