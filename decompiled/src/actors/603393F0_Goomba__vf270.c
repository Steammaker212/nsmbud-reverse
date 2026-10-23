/* Goomba__vf270
 * address: 0x603393F0   size: 2016   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033CDA4
// 
// Overridden by: None
int __fastcall Goomba__vf270(Enemy *a1)
{
  _BYTE *v2; // r10
  int ProfileId; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r0
  int vtable; // r1
  char v8; // r12
  char v9; // r11
  unsigned int settings1; // r0
  float y; // r1
  float x; // r0
  TileCheck *v13; // r0
  int *v14; // r1
  Actor *parent; // r5
  char v16; // r12
  int v17; // r0
  Actor *v18; // r5
  char v19; // r12
  int v20; // r0
  _DWORD *v21; // r2
  int result; // r0
  TileCheck_Result v23; // [sp+8h] [bp-B8h] BYREF
  TileCheck v24; // [sp+34h] [bp-8Ch] BYREF
  TileCheck_Param v25; // [sp+80h] [bp-40h] BYREF
  Vec2 positionOffset; // [sp+8Ch] [bp-34h] BYREF
  Vec2 a3; // [sp+94h] [bp-2Ch] BYREF

  v2 = (char *)&a1[1]._._._.aCollider.field_D8 + 1;
  ProfileId = Actor__getProfileId(&FIELD_U32(a1, 0x0)._._._);
  v4 = 0;
  if ( ProfileId == 468 )
  {
    v4 = 1;
    *v2 = 1;
  }
  BYTE2(a1[1]._._._.aCollider.field_D8) = v4;
  a1[1]._._._._.vtable = LoadResource(ResourceMgrRelated_instance, &dword_60C94424[2 * v4]);
  v5 = sub_6033CF5C();
  a1[1]._._._._.heap = v5;
  v6 = **(_DWORD **)(v5 + 20);
  a1[1]._._._._.id = v6;
  vtable = a1[1]._._._._.vtable;
  *(_DWORD *)&v24.field_0 = &sead__SafeStringBase__vtable;
  v24.field_4 = (int)"walk";
  TexAnim_play(v6, vtable, &v24);
  if ( *v2 )
    sub_6033A26C((int)a1, 1);
  FIELD_U32(a1, 0x0)._._.scale.x = 1.0;
  FIELD_U32(a1, 0x0)._._.scale.y = 1.0;
  FIELD_U32(a1, 0x0)._._.scale.z = 1.0;
  CollisionMgr_init(
    (CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr,
    (StateActor *)a1,
    &stru_60AFFAC0,
    &stru_60AFFACC,
    &stru_60AFFAD8);
  *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2552] |= 0x20000u;
  a1[1]._._._.aCollider._.containingHeap = (int)&a1[1]._._._.field_208;
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 752))(a1);
  v9 = 2;
  FIELD_U32(a1, 0x0)._._.effectOffset.x = 0.0;
  FIELD_U32(a1, 0x0)._._.effectOffset.y = 8.0;
  FIELD_U32(a1, 0x0)._._.effectOffset.z = 0.0;
  FIELD_U32(a1, 0x0)._._.field_1EC = 0.0;
  FIELD_U32(a1, 0x0)._._.field_1F0 = 1090519040;
  FIELD_U32(a1, 0x0)._._.field_1F4 = 16.0;
  FIELD_U32(a1, 0x0)._._.field_1F8 = 16.0;
  FIELD_U32(a1, 0x0)._._.field_1FC = 16.0;
  FIELD_U32(a1, 0x0)._._.field_200 = 1098907648;
  FIELD_U32(a1, 0x0)._._.field_26C = (int)&a1[1]._._._.aCollider.field_E4;
  a1[1]._._._.aCollider.field_F4 = 3;
  FIELD_U32(a1, 0x0)._._.field_270 = (int)&a1[1]._._._.aCollider.field_108;
  a1[1]._._._.aCollider.field_124 = 1;
  FIELD_U32(a1, 0x1864) = 1;
  settings1 = FIELD_U32(a1, 0x0)._._._.settings1;
  a1[1]._._._.field_218 = settings1 & 0xF;
  if ( (settings1 & 0x10000) == 0 )
    v9 = 1;
  switch ( settings1 & 0xF )
  {
    case 1u:
      if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) <= 1 )
      {
        a1[1]._._._.field_20C = 0.0;
        a1[1]._._._.field_210 = 0.0;
        *(_DWORD *)&a1[1]._._._.zoneId = 0;
        CollisionMgr_init(
          (CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr,
          (StateActor *)a1,
          (CollisionMgr_Sensor *)&a1[1]._._._.field_20C,
          0,
          &stru_60AFFAD8);
      }
      FIELD_U32(a1, 0x1804) |= 0x10000u;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C942DC);
      break;
    case 2u:
      a1[1]._._._.field_22C = (settings1 >> 4) & 3;
      sub_6015913C(&FIELD_U32(a1, 0x0)._._.aCollider, 8);
      sub_6015913C(&FIELD_U32(a1, 0x0)._._.aCollider, 512);
      sub_6015913C(&FIELD_U32(a1, 0x0)._._.aCollider, 64);
      FIELD_U32(a1, 0x1804) |= 0x10000u;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C942FC);
      break;
    case 3u:
      v24.field_0 = v9;
      FIELD_U32(a1, 0x0)._._.position.z = sub_60022B80(&v24);
      (*(void (__fastcall **)(Enemy *, void *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &unk_60C9433C);
      break;
    case 4u:
      parent = FIELD_U32(a1, 0x0)._._._.parent;
      if ( ((unsigned int)&dword_60C7B364 & ~(1613993944 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( parent && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(parent, 0x0))(parent, &StageActor_RTTI) == 1 )
      {
        if ( ((unsigned int)&dword_60C94400 & ~(1613994060 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C94400) )
        {
          dword_60C943FC = (int)&off_60BED0A0;
          _cxa_guard_release(&dword_60C94400);
        }
        v17 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(parent, 0x0))(parent, &dword_60C943FC);
        if ( v17 )
          v17 = (int)parent;
        a1[1]._._._._.field_4C = v17;
      }
      v24.field_0 = v9;
      FIELD_U32(a1, 0x0)._._.position.z = sub_60022B80(&v24);
      FIELD_U32(a1, 0x0)._._.position.z = FIELD_U32(a1, 0x0)._._.position.z
                           + (float)((float)(int)(((10
                                                  * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32)
                                                - 5)
                                   * 16.0);
      LOBYTE(a1[1]._._._.aCollider.field_DC) = (FIELD_U32(a1, 0x0)._._._.settings1 & 0x1000) != 0;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C9435C);
      break;
    case 5u:
      v18 = FIELD_U32(a1, 0x0)._._._.parent;
      if ( ((unsigned int)&dword_60C7B364 & ~(1613994296 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v18 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v18, 0x0))(v18, &StageActor_RTTI) == 1 )
      {
        if ( ((unsigned int)&dword_60C94400 & ~(1613994412 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C94400) )
        {
          dword_60C943FC = (int)&off_60BED0A0;
          _cxa_guard_release(&dword_60C94400);
        }
        v20 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v18, 0x0))(v18, &dword_60C943FC);
        if ( v20 )
          v20 = (int)v18;
        a1[1]._._._._.field_4C = v20;
      }
      v24.field_0 = v9;
      FIELD_U32(a1, 0x0)._._.position.z = sub_60022B80(&v24);
      FIELD_U32(a1, 0x0)._._.position.z = FIELD_U32(a1, 0x0)._._.position.z
                           + (float)((float)(int)(((10
                                                  * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32)
                                                - 5)
                                   * 16.0);
      LOBYTE(a1[1]._._._.aCollider.field_DC) = (FIELD_U32(a1, 0x0)._._._.settings1 & 0x1000) != 0;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C9437C);
      break;
    case 6u:
      v24.field_0 = v9;
      FIELD_U32(a1, 0x0)._._.position.z = sub_60022B80(&v24);
      (*(void (__fastcall **)(Enemy *, void *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &unk_60C9439C);
      break;
    case 7u:
      FIELD_U32(a1, 0x0)._._.position.z = 2300.0;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C943BC);
      break;
    case 8u:
      if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) <= 1 )
      {
        a1[1]._._._.field_20C = 0.0;
        a1[1]._._._.field_210 = 0.0;
        *(_DWORD *)&a1[1]._._._.zoneId = 0;
        CollisionMgr_init(
          (CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr,
          (StateActor *)a1,
          (CollisionMgr_Sensor *)&a1[1]._._._.field_20C,
          0,
          &stru_60AFFAD8);
      }
      FIELD_U32(a1, 0x1804) |= 0x10000u;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C943DC);
      break;
    default:
      y = FIELD_U32(a1, 0x0)._._.position.y;
      x = FIELD_U32(a1, 0x0)._._.position.x;
      *(_WORD *)&v25.field_0 = 0;
      a3.x = x;
      a3.y = y;
      positionOffset.x = x;
      positionOffset.y = y + -500.0;
      v25.field_2 = FIELD_U32(a1, 0x0)._._.field_56;
      v25.field_3 = FIELD_U32(a1, 0x0)._._.field_57;
      v25.field_4 = 0;
      v25.field_8 = 0;
      v13 = TileCheck_ctor(&v24, &v25);
      v23.field_C = 0;
      v23.field_10 = 0;
      if ( TileCheck_check(v13, &v23, &a3, &positionOffset, 8) == 1 )
      {
        a1[1]._._._.effectOffset.x = FIELD_U32(a1, 0x0)._._.position.y - v23.field_8;
        sub_60003D80();
      }
      v24.field_0 = v9;
      FIELD_U32(a1, 0x0)._._.position.z = sub_60022B80(&v24);
      if ( *v2 )
        v14 = &dword_60C94278;
      else
        v14 = &dword_60C94470;
      (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, v14);
      break;
  }
  if ( a1[1]._._._.field_218 == 2 )
    *(float *)&a1[1]._._._.aCollider.field_C8 = (float)(HIBYTE(FIELD_U32(a1, 0x0)._._._.settings1) & 0xF) * 16.0;
  sub_6033D008(a1, a1[1]._._._._.heap);
  LOBYTE(FIELD_U32(a1, 0x0)._.field_17A8) = 1;
  v21 = (_DWORD *)(EnemyCounterMaybe_instance + 176);
  if ( !*v2 )
    v21 = (_DWORD *)(EnemyCounterMaybe_instance + 172);
  result = *v21 + 1;
  *v21 = result;
  return result;
}
