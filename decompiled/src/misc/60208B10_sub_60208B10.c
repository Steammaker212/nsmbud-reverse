/* sub_60208B10
 * address: 0x60208B10   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60208B10(int a1)
{
  if ( !FIELD_U8(a1, 404) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 372));
  return 1;
}
