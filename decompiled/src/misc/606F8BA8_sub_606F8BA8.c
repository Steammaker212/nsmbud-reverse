/* sub_606F8BA8
 * address: 0x606F8BA8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606F8BA8(StateMethodExecuter *result)
{
  if ( *((_BYTE *)FIELD_U32(result + (512) * 12, 0x0) + 7764) )
  {
    result[511].owner = (void *)1;
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60CBC4B0);
  }
  return result;
}
