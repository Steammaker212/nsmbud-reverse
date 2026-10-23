/* sub_60398E9C
 * address: 0x60398E9C   size: 1224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60398E9C(int a1)
{
  int v2; // r5
  int v3; // r0
  __int16 v4; // r1
  int v5; // r7
  int v6; // r0
  int v7; // r0
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  char v13; // r12
  int v14; // r0
  int v16[10]; // [sp+8h] [bp-28h] BYREF

  v2 = 2;
  if ( !FIELD_U32(dword_60C96478, 104) && damage_ref_399D50(a1) == 1 )
  {
    FIELD_U32(a1, 116) = 1158455296;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    v3 = sub_6078A50C(PlayerMgr_instance);
    v4 = 3;
    LOWORD(v5) = 0;
    if ( v3 > 1 )
      v4 = 6;
    HIWORD(v5) = 16672;
    FIELD_U16(a1, 6348) = v4;
    FIELD_U16(a1, 6336) = 0;
    FIELD_U16(a1, 6352) = 6;
    FIELD_U16(a1, 6354) = 0;
    FIELD_U16(a1, 6356) = 0;
    FIELD_U32(a1, 100) = -1100585370;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = -1065353216;
    FIELD_U32(a1, 140) = 0;
    FIELD_U32(a1, 80) = 0;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 6560) = 0;
    FIELD_U32(a1, 6564) = 0;
    FIELD_U32(a1, 6568) = 0;
    v6 = FIELD_U32(a1, 20);
    if ( (v6 & 0x100000) != 0 )
      FIELD_U8(a1, 6397) = 1;
    FIELD_U32(a1, 6320) = 0;
    FIELD_U32(a1, 6324) = 0;
    FIELD_U8(a1, 6526) = HIBYTE(v6) & 1;
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = v5;
    FIELD_U32(a1, 580) = 0;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B008D0, 0, 0);
    FIELD_U32(a1, 3200) |= 0x90000800;
    CollisionMgr_init((CollisionMgr *)(a1 + 7216), (StateActor *)a1, 0, 0, &stru_60B008DC);
    v7 = FIELD_U32(a1, 9752) | 0x10000800;
    FIELD_U32(a1, 9744) |= 0x10000800u;
    FIELD_U32(a1, 9752) = v7;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B008E8, 0);
    FIELD_U32(a1, 304) = 0;
    FIELD_U32(a1, 308) = v5;
    FIELD_U32(a1, 312) = 1090519040;
    FIELD_U32(a1, 316) = v5;
    FIELD_U32(a1, 292) = 0;
    FIELD_U32(a1, 300) = a1 + 13296;
    v8 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 188));
    }
    ActiveCollider__init((ActiveCollider *)(a1 + 6608), (StageActor *)a1, &stru_60B00914, 0);
    FIELD_U32(a1, 6712) = 1;
    FIELD_F32(a1, 6724) = (float)byte_60AFE3F4[FIELD_U32(a1, 80) ^ 1] * 48.0;
    FIELD_U32(a1, 6728) = v5;
    FIELD_U32(a1, 6732) = 1111490560;
    FIELD_U32(a1, 6736) = 1109393408;
    v9 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6608))
      && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 6608)) )
    {
      ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 6608));
    }
    ActiveCollider__init((ActiveCollider *)(a1 + 6912), (StageActor *)a1, &stru_60B00940, 0);
    FIELD_U32(a1, 7016) = 2;
    FIELD_F32(a1, 7028) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 48.0;
    FIELD_U32(a1, 7032) = 1105199104;
    FIELD_U32(a1, 7036) = 1111490560;
    FIELD_U32(a1, 7040) = 1105199104;
    v10 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6912))
      && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 6912)) )
    {
      ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 6912));
    }
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1115684864;
    FIELD_U32(dword_60C96478, 104) = a1;
    v11 = (_DWORD *)operator_new(0x28u);
    v12 = sub_602A8564(v11, FIELD_U32(a1, 8));
    *v12 = off_60BF4358;
    v12[9] = a1;
    v12[4] = 2;
    FIELD_U32(a1, 620) = v12;
    if ( ((unsigned int)dword_60C97694 & ~(1614385840 << v13) & 1) == 0 && _cxa_guard_acquire(dword_60C97694) )
    {
      byte_60C97690 = 1;
      byte_60C97691 = 1;
      byte_60C97692 = 1;
      _cxa_guard_release(dword_60C97694);
    }
    EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C97690);
    FIELD_U32(a1, 6244) = 0;
    v14 = FIELD_U32(a1, 20);
    v16[0] = (unsigned __int8)v14;
    v16[1] = BYTE1(v14);
    sub_60378BC4(a1 + 6444, v16);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97120);
    sub_603993B8(a1);
    return 1;
  }
  return v2;
}
