/* sub_6070D6F8
 * address: 0x6070D6F8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070D6F8(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r1

  v2 = DrawMgr_instance;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6120));
  v3 = *(_DWORD **)(a1 + 6124);
  if ( v3 )
    DrawMgr_drawModel2(v2, v3);
  return 1;
}
