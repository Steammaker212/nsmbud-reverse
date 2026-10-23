/* sub_602694F8
 * address: 0x602694F8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602694F8(int a1)
{
  int v2; // r1

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
  if ( FIELD_U32(a1, 6956) )
    v2 = 6304;
  else
    v2 = 6308;
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + v2));
  return 1;
}
