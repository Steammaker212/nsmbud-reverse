/* sub_606C47E8
 * address: 0x606C47E8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C47E8(int a1)
{
  FIELD_U8(a1, 96) = 0;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 88);
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CBAB20);
}
