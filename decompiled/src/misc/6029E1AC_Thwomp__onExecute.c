/* Thwomp__onExecute
 * address: 0x6029E1AC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
signed int __fastcall Thwomp__onExecute(int a1)
{
  int v2; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  Thwomp_updateModel(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v2 == 1 )
    FIELD_U8(a1, 19) = 1;
  ((void (__fastcall *)(int, int))loc_602A3F7C)(a1 + 6768, 2);
  FIELD_U32(a1, 6340) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6344) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 116);
  return 1;
}
