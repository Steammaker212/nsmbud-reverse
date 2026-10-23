/* sub_6060CCD8
 * address: 0x6060CCD8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060CCD8(int a1)
{
  sub_60630B04(a1 + 6108);
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6104));
  return 1;
}
