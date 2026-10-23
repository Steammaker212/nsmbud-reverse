/* sub_604E0FF8
 * address: 0x604E0FF8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E0FF8(int a1)
{
  sub_604E2228();
  sub_6047572C(a1 + 40, &dword_60CA53F4, FIELD_U32(a1, 5724), 0xEu, 0);
  return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA555C);
}
