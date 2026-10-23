/* sub_60681EB8
 * address: 0x60681EB8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60681EB8(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6112));
  if ( !FIELD_U8(a1, 7596) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6116));
  return 1;
}
