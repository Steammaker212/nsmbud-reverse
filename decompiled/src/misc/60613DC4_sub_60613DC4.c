/* sub_60613DC4
 * address: 0x60613DC4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60613DC4(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6760));
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6764));
  if ( !FIELD_U32(a1, 7632) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6768));
  if ( FIELD_U8(a1, 7541) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6772));
  return 1;
}
