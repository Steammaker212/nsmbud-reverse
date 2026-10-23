/* sub_607467B8
 * address: 0x607467B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607467B8(StateMgr *a1)
{
  change_tex_ref();
  StateMgr__changeState(a1 + 47, (StateBase *)&dword_60CBE500);
  return 1;
}
