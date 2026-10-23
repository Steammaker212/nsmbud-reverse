/* sub_60351BF4
 * address: 0x60351BF4   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60351BF4(int a1)
{
  double (__fastcall ***v2)(_DWORD); // r11
  int v3; // s2
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r5
  ActiveColliderMgr *v7; // r7
  unsigned int v8; // r5
  int v9; // r0
  int v10; // s2

  v2 = (double (__fastcall ***)(_DWORD))(a1 + 6420);
  FIELD_F64(a1, 6424) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6420))(a1 + 6420);
  FIELD_U32(a1, 6432) = v3;
  FIELD_U8(a1, 6272) = 7;
  FIELD_U8(a1, 6416) = 0;
  if ( sub_6068C438(MaskMgr_instance) == 1 )
    FIELD_U8(a1, 6416) = 1;
  v4 = FIELD_U32(a1, 20) & 0xF;
  if ( (FIELD_U32(a1, 20) & 0x100) != 0 )
    FIELD_U8(a1, 6329) = 1;
  if ( v4 == 2 )
  {
    v5 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
  }
  else if ( v4 == 1 )
  {
    v5 = 1;
  }
  else if ( v4 )
  {
    v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  }
  else
  {
    v5 = 0;
  }
  FIELD_U32(a1, 80) = v5;
  sub_60351F54(a1, FIELD_U8(a1, 6329));
  v6 = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1126170624;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 620) = a1 + 6332;
  FIELD_U32(a1, 6348) = 3;
  FIELD_U32(a1, 624) = a1 + 6368;
  FIELD_U32(a1, 6396) = 1;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFFE14, &stru_60AFFE20, &stru_60AFFE2C);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEEBA8, a1 + 6452);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6304) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6320) = 0x40000000;
  FIELD_U32(a1, 6324) = -1073741824;
  if ( FIELD_U32(a1, 80) < 2u )
    v6 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 160) = *(_DWORD *)(a1 + 6320 + 4 * v6);
  v8 = FIELD_U32(a1, 20);
  if ( (v8 & 0x10000000) == 0 )
  {
    v9 = EnemyCounterMaybe_instance;
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116)
                         + (float)((float)(FIELD_U32(EnemyCounterMaybe_instance, 960) & 7) * -32.0);
    ++FIELD_U32(v9, 960);
    v8 = FIELD_U32(a1, 20);
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F3C);
  sub_60352120(a1, (v8 >> 4) & 3);
  sub_60003C60(a1, (int)&stru_60AFFE14, 128.0);
  FIELD_F64(a1, 6424) = (**v2)(v2);
  FIELD_U32(a1, 6432) = v10;
  sub_60352424(a1);
  return 1;
}
