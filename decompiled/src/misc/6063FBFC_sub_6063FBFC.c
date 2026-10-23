/* sub_6063FBFC
 * address: 0x6063FBFC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063FBFC(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
  if ( FIELD_U8(a1, 6160) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6108));
  return 1;
}
