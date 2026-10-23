/* Actor_toten_StaffRoll_build
 * address: 0x6074D4C0   size: 256   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_toten_StaffRoll_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2F0u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C23AB4;
  FIELD_U32(v2, 644) = LoadResource(ResourceMgrRelated_instance, &dword_60CBEA28);
  FIELD_U32(v2, 712) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 656) = 0;
  FIELD_U32(v2, 652) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 716) = &off_60C23B64;
  FIELD_U32(v2, 720) = &off_60C23B74;
  FIELD_U32(v2, 724) = &off_60C23B98;
  FIELD_U32(v2, 728) = v2;
  FIELD_U32(v2, 732) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 736), (StateExecuter *)(v2 + 720), &NullState);
  FIELD_U32(v2, 716) = &off_60C23B54;
  FIELD_U32(v2, 160) = FIELD_U32(a1, 0x1C);
  FIELD_U64(v2, 664) = 1065353216;
  FIELD_U64(v2, 672) = 0;
  FIELD_U64(v2, 680) = 0x3F80000000000000LL;
  FIELD_U64(v2, 688) = 0;
  FIELD_U64(v2, 696) = 0;
  FIELD_U64(v2, 704) = 1065353216;
  return v2;
}
