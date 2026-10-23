/* Water_onDraw
 * address: 0x605AC930   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Water_onDraw(int a1)
{
  int *v2; // r0
  int *v3; // r0
  _DWORD *v4; // r1

  Water_onDraw_helper(a1);
  if ( !FIELD_U8(a1, 6894) && !FIELD_U32(a1, 6836) )
    sub_60445608(*(_DWORD **)(*((_DWORD *)DrawMgr_instance + 73) + 420), **(_DWORD **)(a1 + 6104), 2, -1);
  v2 = *(int **)(a1 + 72328);
  if ( v2 )
  {
    sub_60418078(*v2, 0, 0);
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 72328));
  }
  v3 = *(int **)(a1 + 72336);
  if ( v3 )
  {
    sub_60418078(*v3, 0, 0);
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 72336));
  }
  v4 = *(_DWORD **)(a1 + 72332);
  if ( v4 )
    DrawMgr_drawModel2(DrawMgr_instance, v4);
  return TerrainActor_onDraw(a1);
}
