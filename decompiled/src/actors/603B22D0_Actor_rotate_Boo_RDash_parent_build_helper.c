/* Actor_rotate_Boo_RDash_parent_build_helper
 * address: 0x603B22D0   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_Boo_RDash_parent_build_helper(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = BooCircle_vtable;
  MovementHandler__ctor((MovementHandler *)(a1 + 6104));
  memset((void *)(a1 + 6352), 0, 144);
  memset((void *)(a1 + 6500), 0, 68);
  return a1;
}
