/* sub_607F4AB0
 * address: 0x607F4AB0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F4AB0(int a1)
{
  if ( FIELD_U32(dword_60C99E60, 4688) )
    StateMgr__changeState((StateMgr *)(a1 + 212), (StateBase *)&dword_60CC62C0);
  return sub_60238B84(dword_60C8D9DC, 0);
}
