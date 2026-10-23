/* sub_6069120C
 * address: 0x6069120C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6069120C(StateMethodExecuter *result)
{
  char *owner; // r2
  char *v2; // r2

  owner = (char *)result[512].owner;
  if ( !owner )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB9068);
  v2 = owner - 1;
  result[512].owner = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB9068);
  return result;
}
