/* sub_603B1634
 * address: 0x603B1634   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B1634(int a1)
{
  int v2; // r1

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6308));
  if ( FIELD_U8(a1, 6496) )
    v2 = 6312;
  else
    v2 = 6304;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + v2));
  return 1;
}
