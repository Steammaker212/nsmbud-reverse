/* sub_60134610
 * address: 0x60134610   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60134610(int a1, int a2)
{
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 72))(FIELD_U32(a1, 36));
  StateMgr__changeState((StateMgr *)(FIELD_U32(a1, 36) + 6084), (StateBase *)&dword_60C876B4);
  return sub_6000B690((unsigned int *)a1, a2);
}
