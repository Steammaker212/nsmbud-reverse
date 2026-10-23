/* sub_604A7F18
 * address: 0x604A7F18   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A7F18(int a1)
{
  FIELD_U8(a1, 56) = 1;
  return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA14B0);
}
