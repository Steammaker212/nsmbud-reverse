/* sub_606447C8
 * address: 0x606447C8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606447C8(_DWORD **a1)
{
  sub_60630B04((int)(a1 + 1));
  return DrawMgr_drawModel2(DrawMgr_instance, *a1);
}
