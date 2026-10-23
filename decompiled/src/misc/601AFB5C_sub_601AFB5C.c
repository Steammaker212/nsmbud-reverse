/* sub_601AFB5C
 * address: 0x601AFB5C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AFB5C(int a1)
{
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A72C);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
