/* BoomBoomBase__onExecute
 * address: 0x60050DFC   size: 68   group: misc
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
int __fastcall BoomBoomBase__onExecute(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_602A33AC((_BYTE *)a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1208))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1132))(a1);
  return 1;
}
