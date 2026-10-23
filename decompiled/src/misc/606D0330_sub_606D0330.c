/* sub_606D0330
 * address: 0x606D0330   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D0330(int a1)
{
  void *v2; // r5
  int v3; // r6
  unsigned int i; // r7
  unsigned int v5; // r0

  v2 = DrawMgr_instance;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6324));
  DrawMgr_drawModel(v2, *(void **)(a1 + 6456));
  v3 = FIELD_U8(a1, 12564) * FIELD_U8(a1, 12565);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = 0;
      if ( i < 0x20 )
        v5 = i;
      DrawMgr_drawModel(v2, *(void **)(a1 + 4 * v5 + 6328));
    }
  }
  return 1;
}
