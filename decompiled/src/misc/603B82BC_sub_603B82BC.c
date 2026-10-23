/* sub_603B82BC
 * address: 0x603B82BC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B82BC(int a1)
{
  if ( FIELD_U8(a1, 536) )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6304));
    return 1;
  }
  else
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
    if ( FIELD_U8(a1, 22648) )
      DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6308));
    return 1;
  }
}
