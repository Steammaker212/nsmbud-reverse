/* sub_6038AC64
 * address: 0x6038AC64   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038AC64(int a1)
{
  char v2; // r12
  int v3; // r0
  signed int v4; // r0
  int v5; // r5
  int v6; // r0
  int *v7; // r1
  int v8; // r0
  int v9; // r1
  ActiveColliderMgr *v10; // r6
  int v11; // r8
  ActiveColliderMgr *v12; // r6
  int v13; // r3
  int v14; // r1
  int v15; // r0
  unsigned int v16; // r2
  bool v17; // zf
  int v18; // r2

  sub_6038B0F8();
  v3 = (FIELD_U32(a1, 20) >> 8) & 3;
  FIELD_U8(a1, 6672) = v3;
  if ( v3 == 2 )
  {
    v4 = 0;
  }
  else if ( v3 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  }
  FIELD_U32(a1, 80) = v4;
  v5 = FIELD_U32(a1, 56);
  if ( v5 )
  {
    if ( (FIELD_U32(a1, 20) & 0x8000) != 0 )
    {
      FIELD_U8(a1, 8284) = (FIELD_U32(a1, 20) & 0x4000) != 0;
      FIELD_U8(a1, 8285) = 1;
      if ( ((unsigned int)&dword_60C96DF8 & ~(1614327200 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C96DF8) )
      {
        dword_60C96DF4 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C96DF8);
      }
      v8 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C96DF4);
      if ( v8 )
        v8 = v5;
      FIELD_U32(a1, 8276) = v8;
      if ( FIELD_U32(a1, 80) )
        v9 = -1082130432;
      else
        v9 = 1065353216;
      FIELD_U32(a1, 8164) = v9;
      FIELD_U32(a1, 8168) = 0;
    }
    else
    {
      FIELD_U8(a1, 8285) = 0;
      if ( ((unsigned int)&dword_60C86B30 & ~(1614327020 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
      {
        dword_60C86B2C = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C86B30);
      }
      v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C86B2C);
      v7 = (int *)(a1 + 8272);
      if ( v6 )
      {
        *v7 = v5;
        FIELD_U8(a1, 8287) = FIELD_U8(v5, 9268);
      }
      else
      {
        *v7 = 0;
      }
    }
  }
  else
  {
    FIELD_U8(a1, 8285) = 2;
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF3CA4, 0);
  FIELD_U32(a1, 292) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 6912), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF3CD0, 0);
  FIELD_U32(a1, 7016) = 1;
  ActiveCollider__init((ActiveCollider *)(a1 + 7216), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF3CFC, 0);
  FIELD_U32(a1, 7348) = 1;
  FIELD_U32(a1, 7320) = 2;
  ActiveCollider__init((ActiveCollider *)(a1 + 7520), (StageActor *)a1, &stru_60B007E0, 0);
  FIELD_U32(a1, 7632) = a1 + 6908;
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7520))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 7520)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 7520));
  }
  v11 = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 7824), (StageActor *)a1, &stru_60B0080C, 0);
  FIELD_U32(a1, 7936) = a1 + 6908;
  v12 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7824))
    && !ActiveColliderMgr_isInCreateList(v12, (ActiveCollider *)(a1 + 7824)) )
  {
    ActiveColliderMgr_addToCreateList(v12, (ActiveCollider *)(a1 + 7824));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  v13 = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v14 = FIELD_U32(a1, 80);
  v15 = dword_60AF1FB8[v14];
  FIELD_U32(a1, 8244) = v15;
  FIELD_U32(a1, 156) = v15;
  if ( !FIELD_U8(a1, 8285) )
    v13 = 805306368;
  v16 = 0x80000000;
  if ( !FIELD_U8(a1, 8285) )
    v16 = 1342177280;
  dword_60C96DEC[0] = v13;
  v17 = v14 == 1;
  dword_60C96DF0 = v16;
  if ( v14 == 1 )
    v11 = 1;
  v18 = dword_60C96DEC[v14];
  if ( v14 == 1 )
    v14 = 8248;
  FIELD_U32(a1, 160) = v18;
  if ( v17 )
  {
    *(_DWORD *)(a1 + v14) = 0x80000000;
    FIELD_U32(a1, 164) = 0x80000000;
  }
  FIELD_U32(a1, 8280) = v11;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 516) = 1098907648;
  FIELD_U32(a1, 520) = 1098907648;
  FIELD_U32(a1, 524) = 1149239296;
  FIELD_U32(a1, 528) = 1149239296;
  skl_root_ref_38B2A8(a1);
  FIELD_U32(a1, 8132) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 8136) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 8140) = FIELD_U32(a1, 116);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96CEC);
}
