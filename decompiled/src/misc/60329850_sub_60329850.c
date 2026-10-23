/* sub_60329850
 * address: 0x60329850   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60329850(int a1)
{
  if ( !FIELD_U8(a1, 86961) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  return 1;
}
