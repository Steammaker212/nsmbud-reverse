/* sub_6053367C
 * address: 0x6053367C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053367C(StateMethodExecuter *result)
{
  char *owner; // r2

  owner = (char *)result[1300].owner;
  if ( result[1300].vtable > (void *)1 )
    owner += 20;
  if ( owner[16] )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAAE64);
  return result;
}
