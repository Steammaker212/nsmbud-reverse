/* Quicksand_vf12
 * address: 0x605AAE08   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Quicksand_vf12(int a1)
{
  _DWORD *v2; // r1

  v2 = *(_DWORD **)(a1 + 72324);
  if ( v2 )
  {
    DrawMgr_drawModel2(DrawMgr_instance, v2);
    FIELD_U8(dword_60CBD830, 1508) = 1;
  }
  return TerrainActor_onDraw(a1);
}
