/* Actor_airship_RDash_build_helper
 * address: 0x6058F710   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_airship_RDash_build_helper(int a1, ActorBuildInfo *a2)
{
  StageActor__ctor((StageActor *)a1, a2);
  *(_DWORD *)a1 = off_60C07250;
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 664) = 0;
  FIELD_U32(a1, 668) = 0;
  FIELD_U32(a1, 672) = 0;
  FIELD_U32(a1, 676) = 0;
  FIELD_U32(a1, 680) = 0;
  sub_607FDA10(a1 + 684, 0);
  sub_6012B2C0(a1 + 712);
  RectCollider_ctor((RectCollider *)(a1 + 1512));
  FIELD_U32(a1, 1512) = off_60BC30D8;
  return a1;
}
