/* sub_602166AC
 * address: 0x602166AC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602166AC(int a1)
{
  _DWORD *v1; // r1

  v1 = *(_DWORD **)(a1 + 276);
  if ( v1 )
    DrawMgr_drawModel2(DrawMgr_instance, v1);
  return 1;
}
