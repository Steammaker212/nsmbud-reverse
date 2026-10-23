/* sub_604C40D4
 * address: 0x604C40D4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C40D4(int a1)
{
  FIELD_U32(a1, 40) = &dword_60CA2E4C;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2E0C);
}
