/* sub_60516CE0
 * address: 0x60516CE0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60516CE0(int a1)
{
  FIELD_U8(a1, 3672) = 0;
  sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
  sub_60516D28(a1);
  sub_60516E80(a1);
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA871C);
}
