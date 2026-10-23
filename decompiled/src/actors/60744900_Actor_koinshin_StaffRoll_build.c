/* Actor_koinshin_StaffRoll_build
 * address: 0x60744900   size: 428   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_koinshin_StaffRoll_build(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3

  v2 = operator_new(0x378u);
  StageActor__ctor((StageActor *)v2, (ActorBuildInfo *)a1);
  *(_DWORD *)v2 = off_60C2326C;
  FIELD_U32(v2, 644) = LoadResource(ResourceMgrRelated_instance, &dword_60CBE4B0);
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = 0;
  FIELD_U32(v2, 656) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 668) = 0;
  FIELD_U32(v2, 700) = 0;
  FIELD_U32(v2, 696) = 0;
  FIELD_U32(v2, 692) = 0;
  FIELD_U32(v2, 688) = 0;
  FIELD_U32(v2, 672) = 1065353216;
  FIELD_U32(v2, 676) = 1065353216;
  FIELD_U32(v2, 680) = 1065353216;
  FIELD_U32(v2, 684) = 0;
  FIELD_U32(v2, 712) = 0;
  FIELD_U32(v2, 708) = 0;
  FIELD_U32(v2, 704) = 0;
  v3 = FIELD_U32(a1, 20);
  v4 = FIELD_U32(a1, 24);
  FIELD_U32(v2, 716) = FIELD_U32(a1, 16);
  FIELD_U32(v2, 720) = v3;
  FIELD_U32(v2, 724) = v4;
  FIELD_U32(v2, 728) = 0;
  FIELD_U32(v2, 732) = 0;
  FIELD_U32(v2, 736) = 0;
  FIELD_U32(v2, 748) = 1065353216;
  FIELD_U32(v2, 744) = 1065353216;
  FIELD_U32(v2, 740) = 1065353216;
  FIELD_U8(v2, 752) = 0;
  FIELD_U32(v2, 756) = 0;
  FIELD_U32(v2, 760) = v2 + 776;
  FIELD_U32(v2, 772) = 0;
  FIELD_U32(v2, 768) = 0;
  FIELD_U32(v2, 764) = 10;
  FIELD_U8(v2, 816) = 0;
  FIELD_U32(v2, 820) = (FIELD_U32(v2, 20) >> 29) & 1;
  FIELD_U32(v2, 824) = 0;
  FIELD_U32(v2, 828) = 0;
  FIELD_U32(v2, 836) = 0;
  FIELD_U32(v2, 832) = 0;
  FIELD_U32(v2, 844) = 0;
  FIELD_U32(v2, 840) = 0;
  FIELD_U32(v2, 848) = off_60C23324;
  FIELD_U32(v2, 852) = &off_60C23378;
  FIELD_U32(v2, 856) = &off_60C23388;
  FIELD_U32(v2, 860) = &off_60C233AC;
  FIELD_U32(v2, 864) = v2;
  FIELD_U32(v2, 868) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 872), (StateExecuter *)(v2 + 856), &NullState);
  FIELD_U32(v2, 852) = &off_60C23368;
  FIELD_U32(v2, 80) = (FIELD_U32(v2, 20) >> 28) & 1;
  FIELD_U32(v2, 772) = 0;
  FIELD_U32(v2, 768) = 0;
  return v2;
}
