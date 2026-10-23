/* Actor_mid_rotate_build
 * address: 0x605CCE08   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mid_rotate_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2F8u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0A9BC;
  FIELD_U32(v2, 648) = &off_60C0AA58;
  FIELD_U32(v2, 652) = &off_60C0AA68;
  FIELD_U32(v2, 656) = &off_60C0AA8C;
  FIELD_U32(v2, 660) = v2 + 648;
  FIELD_U32(v2, 664) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 668), (StateExecuter *)(v2 + 652), &NullState);
  FIELD_U32(v2, 648) = &off_60C0AA48;
  FIELD_U32(v2, 684) = 0;
  FIELD_U32(v2, 688) = 0;
  memset(v2 + 696, 0, 61);
  return v2;
}
