/* PlayerLookTarget_vf0
 * address: 0x6000B29C   size: 64   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall PlayerLookTarget_vf0(_DWORD *a1)
{
  *a1 = PlayerLookTarget_vtable;
  if ( PlayerLookTargetList_instance )
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1);
  return sead__IDisposer__dtor(a1);
}
