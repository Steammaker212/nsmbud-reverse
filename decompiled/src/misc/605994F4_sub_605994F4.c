/* sub_605994F4
 * address: 0x605994F4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605994F4(int a1)
{
  FIELD_U32(a1, 13468) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 13452), &stru_60CAF9BC);
}
