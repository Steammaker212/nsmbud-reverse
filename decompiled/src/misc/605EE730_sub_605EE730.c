/* sub_605EE730
 * address: 0x605EE730   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605EE730(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = (int)result[574].vtable + 1;
  result[574].vtable = (void *)v1;
  if ( (void *)v1 == result[574].owner )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB1EE0);
  return result;
}
