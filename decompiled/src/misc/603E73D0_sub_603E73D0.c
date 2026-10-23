/* sub_603E73D0
 * address: 0x603E73D0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E73D0(int a1)
{
  return StateMgr__changeState((StateMgr *)(FIELD_U32(a1, 116) + 6084), (StateBase *)&dword_60C964FC);
}
