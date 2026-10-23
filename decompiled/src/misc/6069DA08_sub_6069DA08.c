/* sub_6069DA08
 * address: 0x6069DA08   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069DA08(int a1)
{
  int result; // r0
  _DWORD *v3; // r1

  result = sub_60630B04(a1);
  v3 = *(_DWORD **)(a1 + 20);
  if ( v3 )
    return DrawMgr_drawModel2(DrawMgr_instance, v3);
  return result;
}
