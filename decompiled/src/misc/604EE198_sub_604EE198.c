/* sub_604EE198
 * address: 0x604EE198   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EE198(int a1)
{
  FIELD_U8(a1, 10832) = 1;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA61E0);
}
