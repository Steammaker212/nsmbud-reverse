/* Actor_furutsukuki_build
 * address: 0x6060EAF4   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_furutsukuki_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2ACu);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0FC50;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = &off_60C0FD00;
  FIELD_U32(v2, 652) = &off_60C0FD10;
  FIELD_U32(v2, 656) = &off_60C0FD34;
  FIELD_U32(v2, 660) = v2;
  FIELD_U32(v2, 664) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 668), (StateExecuter *)(v2 + 652), &NullState);
  FIELD_U32(v2, 648) = &off_60C0FCF0;
  return v2;
}
