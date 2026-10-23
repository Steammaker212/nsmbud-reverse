/* TerrainActor_onExecute
 * address: 0x605A4DEC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall TerrainActor_onExecute(int a1)
{
  if ( !FIELD_U32(dword_60C995D0, 32) || (FIELD_U8(a1, 27) & 0x20) != 0 && FIELD_U32(dword_60C99DD4, 764) )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    if ( FIELD_U8(a1, 0x1AED) )
      ShapedCollider_execute((ColliderBase *)(a1 + 0x17F8));
    if ( !FIELD_U8(a1, 0x1AEC) )
    {
      ((void (__fastcall *)(int))loc_605A4EAC)(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 0xCC))(a1);
    }
  }
  if ( FIELD_U8(a1, 0x1AEE) )
    TerrainEffects_update(a1 + 6900);
  return 1;
}
