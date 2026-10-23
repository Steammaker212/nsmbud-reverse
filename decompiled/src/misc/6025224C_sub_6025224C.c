/* sub_6025224C
 * address: 0x6025224C   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025224C(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  signed int v5; // r0
  int v6; // s2
  int *v7; // r1

  FIELD_U32(a1, 116) = 1153138688;
  kuriboMini_ref((int *)a1);
  v2 = FIELD_U32(a1, 6368);
  FIELD_U32(a1, 144) = v2;
  FIELD_U32(a1, 148) = v2;
  FIELD_U32(a1, 152) = v2;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD7E0, &stru_60AFD7EC, &stru_60AFD7F8);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDA7AC, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6468), (StageActor *)a1, &stru_60AFD804, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6468))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6468)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6468));
  }
  FIELD_U32(a1, 6580) = a1 + 6808;
  FIELD_U8(a1, 6272) = 1;
  FIELD_U8(a1, 6356) = -1;
  FIELD_U16(a1, 6348) = -1;
  FIELD_U32(a1, 620) = a1 + 6396;
  FIELD_U32(a1, 6412) = 3;
  FIELD_U32(a1, 624) = a1 + 6432;
  FIELD_U32(a1, 6460) = 1;
  FIELD_U32(a1, 6244) = 1;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = 1082130432;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1082130432;
  FIELD_U32(a1, 580) = 0;
  v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v5;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v5];
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1111490560;
  FIELD_U32(a1, 504) = 1111490560;
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1111490560;
  FIELD_F64(a1, 6780) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6776))(a1 + 6776);
  FIELD_U32(a1, 6788) = v6;
  sub_6025261C(a1);
  FIELD_U8(a1, 6056) = 1;
  if ( FIELD_U32(a1, 20) == 1 )
    v7 = &dword_60C8DF98;
  else
    v7 = &dword_60C8DEF4;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v7);
  return 1;
}
