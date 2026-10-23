/* sub_6065D324
 * address: 0x6065D324   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D324(int a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0

  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C14914;
  FIELD_U32(a1, 6104) = 0;
  memset((void *)(a1 + 6240), 0, 92);
  FIELD_U32(a1, 6332) = 1065353216;
  FIELD_U8(a1, 6336) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6340));
  FIELD_U32(a1, 6340) = off_60BC6E38;
  FIELD_U32(a1, 6356) = 0;
  memset((void *)(a1 + 6108), 0, 132);
  FIELD_U32(a1, 6360) = 0;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6368) = 32;
  FIELD_U32(a1, 6372) = 0x20000;
  FIELD_U32(a1, 6376) = 0x8000000;
  FIELD_U32(a1, 6380) = 0x80000;
  FIELD_U32(a1, 6384) = 0x800000;
  FIELD_U32(a1, 6388) = 0x400000;
  FIELD_U8(a1, 6392) = 0;
  FIELD_U32(a1, 6396) = 0;
  FIELD_U32(a1, 6400) = 0;
  FIELD_U32(a1, 6404) = 32;
  FIELD_U32(a1, 6408) = 0x20000;
  FIELD_U32(a1, 6412) = 0x8000000;
  FIELD_U32(a1, 6416) = 0x80000;
  FIELD_U32(a1, 6420) = 0x800000;
  FIELD_U32(a1, 6424) = 0x400000;
  FIELD_U8(a1, 6428) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6432));
  FIELD_U32(a1, 6432) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 6800, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 6816));
  FIELD_U32(a1, 6868) = 0;
  FIELD_U32(a1, 6864) = 0;
  FIELD_U32(a1, 6860) = 0;
  FIELD_U32(a1, 6856) = 0;
  FIELD_U32(a1, 6852) = 0;
  FIELD_U32(a1, 6872) = 0;
  FIELD_U32(a1, 6876) = 0;
  FIELD_U32(a1, 6848) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 6848));
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6808) = 0;
  FIELD_U32(a1, 6804) = 0;
  FIELD_U32(a1, 6800) = 0;
  v3 = FIELD_U32(a1, 6740);
  v4 = FIELD_U32(a1, 6736);
  FIELD_U32(a1, 6844) = v3;
  FIELD_U32(a1, 6840) = v4;
  FIELD_U32(a1, 6876) = v3;
  FIELD_U32(a1, 6872) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6432), 1, a1 + 6800, a1 + 6816, v5);
  memset((void *)(a1 + 6880), 0, 42);
  FIELD_U32(a1, 6936) = 0;
  FIELD_U32(a1, 6932) = 0;
  FIELD_U32(a1, 6928) = 0;
  FIELD_U32(a1, 6924) = 0;
  FIELD_U32(a1, 6940) = 1065353216;
  FIELD_U8(a1, 6944) = 0;
  FIELD_U16(a1, 6946) = 0;
  FIELD_U32(a1, 6948) = 0;
  FIELD_U32(a1, 6972) = &off_60C14A04;
  FIELD_U32(a1, 6976) = &off_60C14A14;
  FIELD_U32(a1, 6980) = &off_60C14A38;
  FIELD_U32(a1, 6984) = a1;
  FIELD_U32(a1, 6988) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 6992), (StateExecuter *)(a1 + 6976), &NullState);
  FIELD_U32(a1, 6972) = &off_60C149F4;
  FIELD_U32(a1, 7008) = &off_60C14A04;
  FIELD_U32(a1, 7012) = &off_60C14A14;
  FIELD_U32(a1, 7016) = &off_60C14A38;
  FIELD_U32(a1, 7020) = a1;
  FIELD_U32(a1, 7024) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 7028), (StateExecuter *)(a1 + 7012), &NullState);
  FIELD_U32(a1, 7008) = &off_60C149F4;
  FIELD_U32(a1, 6968) = 0;
  FIELD_U32(a1, 6964) = 0;
  FIELD_U32(a1, 6960) = 0;
  FIELD_U32(a1, 6956) = 0;
  FIELD_U32(a1, 6952) = 0;
  return a1;
}
