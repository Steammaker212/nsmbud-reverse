/* Actor_airship_build
 * address: 0x6058F688   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_airship_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x878u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C07250;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 668) = 0;
  FIELD_U32(v2, 672) = 0;
  FIELD_U32(v2, 676) = 0;
  FIELD_U32(v2, 680) = 0;
  sub_607FDA10(v2 + 684, 0);
  sub_6012B2C0(v2 + 712);
  RectCollider_ctor((RectCollider *)(v2 + 1512));
  FIELD_U32(v2, 1512) = off_60BC30D8;
  return v2;
}
