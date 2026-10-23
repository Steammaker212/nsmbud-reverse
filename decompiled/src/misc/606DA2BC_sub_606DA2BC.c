/* sub_606DA2BC
 * address: 0x606DA2BC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DA2BC(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = (int)result[547].vtable - 1;
  result[547].vtable = (void *)v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60CBB93C);
  return result;
}
