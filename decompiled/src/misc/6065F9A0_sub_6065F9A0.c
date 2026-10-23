/* sub_6065F9A0
 * address: 0x6065F9A0   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065F9A0(int a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r0

  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C14B2C;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6112));
  FIELD_U32(a1, 6112) = off_60BEE598;
  memset(a1 + 6480, 0, 128);
  ColliderNode_ctor((ColliderNode *)(a1 + 6512));
  ColliderNode_ctor((ColliderNode *)(a1 + 6544));
  ColliderNode_ctor((ColliderNode *)(a1 + 6576));
  memset(a1 + 6608, 0, 96);
  ColliderNode_ctor((ColliderNode *)(a1 + 6608));
  ColliderNode_ctor((ColliderNode *)(a1 + 6640));
  ColliderNode_ctor((ColliderNode *)(a1 + 6672));
  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6480) = 0;
  v3 = FIELD_U32(a1, 6420);
  v4 = FIELD_U32(a1, 6416);
  FIELD_U32(a1, 6540) = v3;
  FIELD_U32(a1, 6536) = v4;
  FIELD_U32(a1, 6636) = v3;
  FIELD_U32(a1, 6632) = v4;
  FIELD_U32(a1, 6572) = v3;
  FIELD_U32(a1, 6568) = v4;
  FIELD_U32(a1, 6668) = v3;
  FIELD_U32(a1, 6664) = v4;
  FIELD_U32(a1, 6604) = v3;
  FIELD_U32(a1, 6600) = v4;
  FIELD_U32(a1, 6700) = v3;
  FIELD_U32(a1, 6696) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6112), 3, a1 + 6480, a1 + 6512, a1 + 6608);
  FIELD_U32(a1, 6704) = 0;
  memset((void *)(a1 + 6840), 0, 92);
  FIELD_U32(a1, 6932) = 1065353216;
  FIELD_U8(a1, 6936) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6940));
  FIELD_U32(a1, 6940) = off_60BC6E38;
  memset((void *)(a1 + 6708), 0, 132);
  memset((void *)(a1 + 6956), 0, 36);
  FIELD_U32(a1, 6992) = 32;
  FIELD_U32(a1, 6996) = 0x20000;
  FIELD_U32(a1, 7000) = 0x8000000;
  FIELD_U32(a1, 7004) = 0x80000;
  FIELD_U32(a1, 7008) = 0x800000;
  FIELD_U32(a1, 7012) = 0x400000;
  FIELD_U8(a1, 7016) = 0;
  memset(a1 + 7024, 0, 34);
  sub_60379668((sead_IDisposer *)(a1 + 7060));
  FIELD_U8(a1, 7021) = 0;
  FIELD_U8(a1, 7020) = 0;
  FIELD_U8(a1, 7023) = 0;
  FIELD_U8(a1, 7022) = 0;
  return a1;
}
