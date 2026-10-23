/* sub_60288960
 * address: 0x60288960   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60288960(int a1)
{
  ActiveColliderMgr *v2; // r6
  signed int v3; // r0
  int v4; // r4
  double (__fastcall **v5)(int); // t1
  int v6; // s2

  sub_60288BA4((int *)a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 144);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1108344832;
  FIELD_U32(a1, 500) = 1098907648;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 508) = 1098907648;
  FIELD_U32(a1, 512) = 1115684864;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDE2D4, a1 + 6384);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 340) |= 0x1000u;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFDED8, &stru_60AFDEE4, &stru_60AFDEF0);
  FIELD_U32(a1, 6568) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_F32(a1, 132) = -2.0 + 4.0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v3];
  FIELD_U8(a1, 6607) = 0;
  FIELD_U8(a1, 6608) = 0;
  FIELD_U16(a1, 6596) = 0;
  FIELD_U32(a1, 6580) = 0;
  FIELD_U16(a1, 6592) = (0xFFFF * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  FIELD_U32(a1, 6332) = 3;
  FIELD_U32(a1, 620) = a1 + 6316;
  FIELD_U32(a1, 6244) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F1CC);
  sub_60288D08(a1);
  v5 = *(double (__fastcall ***)(int))(a1 + 6352);
  v4 = a1 + 6352;
  FIELD_F64(v4, 4) = (*v5)(v4);
  FIELD_U32(v4, 12) = v6;
  *(_BYTE *)(v4 - 296) = 1;
  return 1;
}
