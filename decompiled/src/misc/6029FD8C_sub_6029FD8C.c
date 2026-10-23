/* sub_6029FD8C
 * address: 0x6029FD8C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029FD8C(int a1)
{
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6308));
  if ( FIELD_U8(a1, 6472) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6312));
  return 1;
}
