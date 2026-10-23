/* Actor_ne_2_build
 * address: 0x6066C21C   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ne_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0xCC8u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C15494;
  RectCollider_ctor((RectCollider *)(v2 + 648));
  FIELD_U32(v2, 648) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 1304));
  FIELD_U32(v2, 1304) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 1960));
  FIELD_U32(v2, 1960) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 2616));
  FIELD_U32(v2, 2616) = off_60BC30D8;
  return v2;
}
