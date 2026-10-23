/* sub_60630B04
 * address: 0x60630B04   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60630B04(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 8);
  if ( result )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)a1);
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4));
    return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 8));
  }
  return result;
}
