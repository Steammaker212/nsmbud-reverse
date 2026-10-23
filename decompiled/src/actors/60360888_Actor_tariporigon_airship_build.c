/* Actor_tariporigon_airship_build
 * address: 0x60360888   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tariporigon_airship_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x528u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60BEF63C;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 656));
  FIELD_U32(v2, 656) = off_60BC30D8;
  FIELD_U8(v2, 1316) = 0;
  return v2;
}
