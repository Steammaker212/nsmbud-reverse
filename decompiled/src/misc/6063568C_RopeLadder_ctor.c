/* RopeLadder_ctor
 * address: 0x6063568C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RopeLadder_ctor(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x500u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = &RopeLadder_vtable;
  SwingingCollider_ctor((ColliderBase *)(v2 + 648));
  memset((void *)(v2 + 1080), 0, 198);
  return v2;
}
