/* sub_60745BF8
 * address: 0x60745BF8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60745BF8(int a1)
{
  void *v2; // r4
  void *v3; // r1

  v2 = DrawMgr_instance;
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 648));
  DrawMgr_drawModel(v2, **(void ***)(a1 + 652));
  if ( (FIELD_U8(a1, 20) & 1) == 0 )
  {
    v3 = *(void **)(a1 + 656);
    if ( v3 )
      DrawMgr_drawModel(v2, v3);
  }
  return 1;
}
