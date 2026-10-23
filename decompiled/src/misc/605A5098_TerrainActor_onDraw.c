/* TerrainActor_onDraw
 * address: 0x605A5098   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall TerrainActor_onDraw(int a1)
{
  if ( !FIELD_U8(a1, 0x1AEC) )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 0x17D8));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 0xD0))(a1);
  }
  if ( FIELD_U8(a1, 0x1AEE) )
    TerrainEffects_draw(a1 + 0x1AF4);
  return 1;
}
