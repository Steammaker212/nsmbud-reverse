/* sub_602187E0
 * address: 0x602187E0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602187E0(int a1)
{
  FIELD_U8(a1, 532) = 1;
  StateMgr__changeState((StateMgr *)(a1 + 288), &stru_60C8D368);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 304) + 52))(**(_DWORD **)(a1 + 304));
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 304) + 56))(**(_DWORD **)(a1 + 304));
}
