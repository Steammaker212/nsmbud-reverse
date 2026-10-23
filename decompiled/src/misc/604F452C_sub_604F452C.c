/* sub_604F452C
 * address: 0x604F452C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F452C(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = (int)result[803].owner - 1;
  result[803].owner = (void *)v1;
  if ( !v1 )
    return StateMgr__changeState((StateMgr *)&result[2], &stru_60CA691C);
  return result;
}
