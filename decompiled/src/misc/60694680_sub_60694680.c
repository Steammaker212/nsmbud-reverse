/* sub_60694680
 * address: 0x60694680   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60694680(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r6

  v2 = FIELD_U32(a1, 132);
  v3 = DrawMgr_instance;
  if ( v2 )
  {
    v4 = 0;
    do
    {
      DrawMgr_drawModel2(v3, *(_DWORD **)(a1 + 60 + 4 * v4));
      v3 = DrawMgr_instance;
      ++v4;
    }
    while ( v4 != FIELD_U32(a1, 132) );
  }
  DrawMgr_drawModel2(v3, *(_DWORD **)(a1 + 1224));
  return DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 1228));
}
