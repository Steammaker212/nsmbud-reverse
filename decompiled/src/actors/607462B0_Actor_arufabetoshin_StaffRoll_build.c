/* Actor_arufabetoshin_StaffRoll_build
 * address: 0x607462B0   size: 288   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_arufabetoshin_StaffRoll_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int settings1; // r2
  int settings2; // r3
  int parentId; // r5

  v2 = operator_new(0x300u);
  StageActor__ctor((StageActor *)v2, a1);
  a1 = (ActorBuildInfo *)((char *)a1 + 16);
  *(_DWORD *)v2 = off_60C233D0;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = 0;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 656) = 0;
  settings1 = FIELD_U32(a1, 0x0);
  settings2 = FIELD_U32(a1, 0x4);
  parentId = FIELD_U32(a1, 0x8);
  FIELD_U32(v2, 668) = settings1;
  FIELD_U32(v2, 672) = settings2;
  FIELD_U32(v2, 676) = parentId;
  FIELD_U32(v2, 680) = 0;
  FIELD_U32(v2, 684) = 0;
  FIELD_U32(v2, 688) = 0;
  FIELD_U32(v2, 700) = 0;
  FIELD_U32(v2, 696) = 0;
  FIELD_U32(v2, 692) = 0;
  FIELD_U32(v2, 704) = 0;
  FIELD_U8(v2, 708) = 0;
  FIELD_U32(v2, 724) = 0;
  FIELD_U32(v2, 720) = 0;
  FIELD_U32(v2, 716) = 0;
  FIELD_U32(v2, 712) = 0;
  FIELD_U32(v2, 728) = (FIELD_U32(v2, 20) >> 29) & 1;
  FIELD_U32(v2, 732) = &off_60C23480;
  FIELD_U32(v2, 736) = &off_60C23490;
  FIELD_U32(v2, 740) = &off_60C234B4;
  FIELD_U32(v2, 744) = v2;
  FIELD_U32(v2, 748) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 752), (StateExecuter *)(v2 + 736), &NullState);
  FIELD_U32(v2, 732) = &off_60C23470;
  FIELD_U32(v2, 80) = (FIELD_U32(v2, 20) >> 28) & 1;
  return v2;
}
