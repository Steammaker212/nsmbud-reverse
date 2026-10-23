/* sub_60107548
 * address: 0x60107548   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60107548(StateMethodExecuter *result)
{
  int owner; // r2
  void *v2; // r2

  owner = (int)result[557].owner;
  if ( owner >= 1 )
  {
    v2 = (void *)(owner - 1);
    result[557].owner = v2;
    if ( !v2 )
      return StateMgr__changeState((StateMgr *)&result[507], &stru_60C862A4);
  }
  return result;
}
