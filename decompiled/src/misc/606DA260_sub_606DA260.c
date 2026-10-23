/* sub_606DA260
 * address: 0x606DA260   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DA260(StateMethodExecuter *result)
{
  void *v1; // r1

  v1 = *(void **)(dword_60C995D0 + 32);
  if ( v1 )
  {
    if ( v1 == result[550].owner )
      return StateMgr__changeState((StateMgr *)&result[507], &stru_60CBB93C);
  }
  return result;
}
