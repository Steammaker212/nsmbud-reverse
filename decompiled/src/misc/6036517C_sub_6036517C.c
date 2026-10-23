/* sub_6036517C
 * address: 0x6036517C   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036517C(int a1)
{
  void *Resource; // r5
  void *Model2; // r8
  int v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  _DWORD *v7; // r8
  _DWORD *v8; // r7
  int v9; // r0
  StateBase *CurrentState; // r0
  int v11; // r5
  CollisionMgr_Sensor sensor; // [sp+18h] [bp-30h] BYREF

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, algn_60C95A14);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C95A1C, 1, 0, 0, 0, 0, 0, 0);
  v4 = operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor((ModelWrapper *)v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)Resource, 0, 0);
  FIELD_U32(a1, 7504) = v4;
  SkeletalAnim_play(**(_DWORD **)(v4 + 12), (int)Resource, (int)&dword_60C95A24);
  v7 = (_DWORD *)(a1 + 6352);
  v6 = FIELD_U32(a1, 6352);
  if ( v6 != 2 )
  {
    FIELD_U32(a1, 6356) = v6;
    *v7 = 2;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  if ( Actor__getProfileId((Actor *)a1) == 515 )
  {
    v8 = (_DWORD *)(a1 + 20);
    if ( BYTE1(FIELD_U32(a1, 20)) )
      FIELD_F32(a1, 6844) = (float)((unsigned int)(unsigned __int8)BYTE1(FIELD_U32(a1, 20)) - 1) * 16.0;
  }
  else
  {
    v8 = (_DWORD *)(a1 + 20);
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1098907648;
    FIELD_U32(a1, 500) = 1161527296;
    FIELD_U32(a1, 504) = 1161527296;
    FIELD_U8(a1, 534) = 0;
  }
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B002B4, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B002C0, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B002CC, 0);
  sensor.b = 8.0;
  sensor.a = 4.0;
  sensor.c = -6.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 1);
  if ( (*v8 & 0x10000) != 0 )
  {
    FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 160) = sub_6035C8A0(a1);
    (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopTroopa_StateID_FrozenRelated);
  }
  else
  {
    v9 = (*v8 >> 4) & 3;
    if ( v9 == 2 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9598C);
    }
    else if ( v9 == 1 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C959AC);
    }
    else
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C959CC);
    }
  }
  if ( *v7 == 2 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v11 != (*((int (**)(void))KoopTroopa_StateID_FrozenRelated._.vtable + 2))() )
      sub_6035B720(a1);
  }
  return sub_6035C8CC(a1, FIELD_U32(a1, 80));
}
