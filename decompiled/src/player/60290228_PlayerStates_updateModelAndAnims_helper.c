/* PlayerStates_updateModelAndAnims_helper
 * address: 0x60290228   size: 32   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_updateModelAndAnims_helper(int a1, int a2)
{
  FIELD_U32(a1, 108) = a2;
  StateMgr__execute((StateMgr *)(a1 + 20));
  return sub_60290130(a1);
}
