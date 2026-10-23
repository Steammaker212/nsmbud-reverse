/* sub_603EB374
 * address: 0x603EB374   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603EB374(int a1)
{
  sub_6077A44C(dword_60CBFA90);
  return StateMgr__changeState((StateMgr *)(a1 + 56), (StateBase *)&dword_60C99A48);
}
