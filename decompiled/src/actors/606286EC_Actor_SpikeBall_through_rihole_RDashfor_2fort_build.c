/* Actor_SpikeBall_through_rihole_RDashfor_2fort_build
 * address: 0x606286EC   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_SpikeBall_through_rihole_RDashfor_2fort_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x518u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C11F00;
  FIELD_U32(v2, 644) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 648));
  FIELD_U32(v2, 648) = off_60BC30D8;
  return v2;
}
