/* sub_601F6A94
 * address: 0x601F6A94   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F6A94(int a1)
{
  if ( FIELD_U8(a1, 932) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 304));
  if ( FIELD_U8(a1, 933) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 768));
  return 1;
}
