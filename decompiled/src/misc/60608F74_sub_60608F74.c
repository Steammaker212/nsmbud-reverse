/* sub_60608F74
 * address: 0x60608F74   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60608F74(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  unsigned int v5; // r6
  unsigned int v6; // r1

  v3 = (_DWORD *)(a1 + 6120);
  v2 = FIELD_U32(a1, 6120);
  v4 = DrawMgr_instance;
  if ( v2 >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = 0;
      if ( v5 < 3 )
        v6 = v5;
      DrawMgr_drawModel2(v4, *(_DWORD **)(a1 + 4 * v6 + 6100));
      v4 = DrawMgr_instance;
      ++v5;
    }
    while ( (signed int)v5 < *v3 );
  }
  DrawMgr_drawModel2(v4, *(_DWORD **)(a1 + 6112));
  return 1;
}
