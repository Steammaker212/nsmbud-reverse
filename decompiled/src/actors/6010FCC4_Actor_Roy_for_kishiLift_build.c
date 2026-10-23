/* Actor_Roy_for_kishiLift_build
 * address: 0x6010FCC4   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Roy_for_kishiLift_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x2D4u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60BD05C4;
  FIELD_U8(v2, 664) = 0;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = 0;
  FIELD_U32(v2, 656) = 0;
  FIELD_U32(v2, 660) = 0;
  memset((void *)(v2 + 668), 0, 0x35u);
  return v2;
}
