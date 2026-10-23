/* sub_604DF140
 * address: 0x604DF140   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604DF140(StateMethodExecuter *result)
{
  int v1; // r1
  bool v2; // nf

  v1 = (int)result[524].owner + 1;
  v2 = (int)result[524].owner - 119 < 0;
  result[524].owner = (void *)v1;
  if ( v2 == __OFSUB__(v1, 120) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA5194);
  return result;
}
