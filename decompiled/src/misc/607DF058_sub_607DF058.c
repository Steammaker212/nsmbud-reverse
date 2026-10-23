/* sub_607DF058
 * address: 0x607DF058   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607DF058(int a1, int a2)
{
  sead__TaskMgr__destroyTaskSync(FIELD_U32(a1, 92), a2);
  FIELD_U8(a1, 3952) = 1;
  return 1;
}
