/* sub_60352A30
 * address: 0x60352A30   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60352A30(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  if ( FIELD_U8(a1, 6329) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6412));
  return 1;
}
