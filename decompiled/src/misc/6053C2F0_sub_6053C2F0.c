/* sub_6053C2F0
 * address: 0x6053C2F0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053C2F0(StateMethodExecuter *result)
{
  if ( result[4371].vtable == (void *)3 )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB834);
  return result;
}
