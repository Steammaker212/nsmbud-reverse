/* sub_6017A688
 * address: 0x6017A688   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017A688(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 268));
  if ( FIELD_U8(a1, 418) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 272));
  if ( FIELD_U8(a1, 419) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 276));
  return 1;
}
