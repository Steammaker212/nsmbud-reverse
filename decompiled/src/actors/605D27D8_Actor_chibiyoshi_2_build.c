/* Actor_chibiyoshi_2_build
 * address: 0x605D27D8   size: 504   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_chibiyoshi_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x3BCu);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0B088;
  FIELD_U32(v2, 644) = (unsigned __int8)FIELD_U32(v2, 20) >> 4;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = v2 + 668;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 656) = 5;
  FIELD_U32(v2, 688) = v2 + 704;
  FIELD_U32(v2, 700) = 0;
  FIELD_U32(v2, 696) = 0;
  FIELD_U32(v2, 692) = 6;
  FIELD_U32(v2, 728) = -1;
  FIELD_U32(v2, 756) = 0;
  FIELD_U32(v2, 760) = 0;
  FIELD_U32(v2, 764) = 0;
  FIELD_U8(v2, 752) = 0;
  FIELD_U32(v2, 748) = 0;
  FIELD_U32(v2, 744) = 0;
  FIELD_U32(v2, 740) = 0;
  FIELD_U32(v2, 736) = 0;
  FIELD_U32(v2, 732) = 0;
  FIELD_U32(v2, 768) = 0;
  FIELD_U32(v2, 772) = 0;
  FIELD_U32(v2, 776) = 0;
  FIELD_U32(v2, 780) = 0;
  FIELD_U32(v2, 784) = 0;
  FIELD_U8(v2, 788) = 0;
  FIELD_U32(v2, 800) = 0;
  FIELD_U32(v2, 796) = 0;
  FIELD_U32(v2, 792) = 0;
  FIELD_U32(v2, 804) = 0;
  FIELD_U32(v2, 808) = 1056964608;
  FIELD_U8(v2, 812) = 0;
  FIELD_U32(v2, 816) = 0;
  FIELD_U32(v2, 820) = 0x40000000;
  FIELD_U32(v2, 824) = 1;
  FIELD_U32(v2, 828) = FIELD_U32(a1, 0x1C);
  FIELD_U32(v2, 832) = 0;
  FIELD_U32(v2, 836) = 0;
  FIELD_U32(v2, 844) = 0;
  FIELD_U32(v2, 840) = 0;
  FIELD_U32(v2, 852) = 0;
  FIELD_U32(v2, 848) = 0;
  FIELD_U32(v2, 856) = 0;
  FIELD_U32(v2, 860) = 0;
  FIELD_U32(v2, 864) = 0;
  FIELD_U32(v2, 872) = 0;
  FIELD_U32(v2, 868) = 0;
  FIELD_U32(v2, 876) = 0;
  FIELD_U32(v2, 880) = 0;
  FIELD_U32(v2, 884) = off_60C0B140;
  FIELD_U32(v2, 888) = &ActorScaler_vtable;
  FIELD_U32(v2, 892) = 1065353216;
  FIELD_U32(v2, 896) = 1065353216;
  FIELD_U32(v2, 900) = 1065353216;
  FIELD_U32(v2, 904) = 1065353216;
  FIELD_U32(v2, 908) = 0;
  FIELD_U32(v2, 912) = 0;
  FIELD_U32(v2, 916) = v2;
  FIELD_U32(v2, 920) = &off_60C0B194;
  FIELD_U32(v2, 924) = &off_60C0B1A4;
  FIELD_U32(v2, 928) = &off_60C0B1C8;
  FIELD_U32(v2, 932) = v2;
  FIELD_U32(v2, 936) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 940), (StateExecuter *)(v2 + 924), &NullState);
  FIELD_U32(v2, 920) = &off_60C0B184;
  FIELD_U32(v2, 80) = FIELD_U32(v2, 20) & 1;
  FIELD_U32(v2, 664) = 0;
  FIELD_U32(v2, 660) = 0;
  FIELD_U32(v2, 700) = 0;
  FIELD_U32(v2, 696) = 0;
  return v2;
}
