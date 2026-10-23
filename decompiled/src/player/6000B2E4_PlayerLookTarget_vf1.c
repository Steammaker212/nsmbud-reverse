/* PlayerLookTarget_vf1
 * address: 0x6000B2E4   size: 68   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall PlayerLookTarget_vf1(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = PlayerLookTarget_vtable;
  if ( PlayerLookTargetList_instance )
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
