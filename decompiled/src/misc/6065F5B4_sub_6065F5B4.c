/* sub_6065F5B4
 * address: 0x6065F5B4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065F5B4(int a1)
{
  sub_606456E4(a1 + 6112);
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6104));
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6108));
  return 1;
}
