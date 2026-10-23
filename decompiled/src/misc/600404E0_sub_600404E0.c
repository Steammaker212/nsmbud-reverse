/* sub_600404E0
 * address: 0x600404E0   size: 1372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600404E0(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r0
  _BYTE *v5; // r5
  float v7; // s4
  float v8; // s2
  float v9; // s16
  float v10; // s0
  ActiveColliderMgr *v11; // r5
  ActiveColliderMgr *v12; // r5
  ActiveColliderMgr *v13; // r5
  float v14; // s2
  int v15; // r1
  int v16; // r0
  CircularColliderInfo info; // [sp+8h] [bp-48h] BYREF

  sub_600D0500();
  v2 = (int (__fastcall ***)(_DWORD, int *))(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  FIELD_U32(a1, 11452) = v2;
  if ( ((unsigned int)&dword_60C80040 & ~(1610876196 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80040) )
  {
    dword_60C8003C = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C80040);
  }
  if ( v2 )
  {
    v4 = (**v2)(v2, &dword_60C8003C);
    if ( v4 )
      v4 = (int)v2;
  }
  else
  {
    v4 = 0;
  }
  FIELD_U32(a1, 11456) = v4;
  v5 = (_BYTE *)(a1 + 11796);
  if ( Actor__getProfileId((Actor *)a1) == 826 )
  {
    *v5 = 1;
LABEL_12:
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U8(a1, 11689) = 1;
    ((void (__fastcall *)(int))loc_60040A94)(a1);
    sub_60041198(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80334);
    return 1;
  }
  if ( *v5 )
    goto LABEL_12;
  FIELD_U32(a1, 116) = 1148846080;
  FIELD_U32(a1, 11048) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 11052) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 11056) = 1148846080;
  FIELD_U32(a1, 144) = 1066443735;
  FIELD_U32(a1, 148) = 1066443735;
  FIELD_U32(a1, 152) = 1066443735;
  FIELD_U8(a1, 11689) = 1;
  ((void (__fastcall *)(int))loc_60040A94)(a1);
  v7 = FIELD_F32(dword_60CC6484, 112);
  v8 = v7 + FIELD_F32(dword_60CC6484, 104);
  FIELD_F32(a1, 11588) = v7 + 64.0;
  FIELD_F32(a1, 11592) = v8 + -64.0;
  FIELD_U8(a1, 11687) = 1;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&dword_60C80464, 0);
  v9 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  v10 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 668))(a1, v9);
  FIELD_F32(a1, 312) = v9;
  FIELD_F32(a1, 316) = v10;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1072902963;
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 340) |= 4u;
  ActiveCollider__init((ActiveCollider *)(a1 + 7724), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC2CFC, 0);
  FIELD_U32(a1, 7856) = 1;
  FIELD_U32(a1, 7876) |= 4u;
  ActiveCollider__init((ActiveCollider *)(a1 + 8028), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC2CFC, 0);
  FIELD_U32(a1, 8160) = 1;
  FIELD_U32(a1, 8180) |= 4u;
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 188));
  }
  v12 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7724))
    && !ActiveColliderMgr_isInCreateList(v12, (ActiveCollider *)(a1 + 7724)) )
  {
    ActiveColliderMgr_addToCreateList(v12, (ActiveCollider *)(a1 + 7724));
  }
  v13 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8028))
    && !ActiveColliderMgr_isInCreateList(v13, (ActiveCollider *)(a1 + 8028)) )
  {
    ActiveColliderMgr_addToCreateList(v13, (ActiveCollider *)(a1 + 8028));
  }
  FIELD_U32(a1, 10832) = -1052770304;
  FIELD_U32(a1, 10836) = 1094713344;
  v14 = FIELD_F32(a1, 11436);
  FIELD_F32(a1, 10840) = v14 + -16.95;
  FIELD_F32(a1, 10844) = v14 + -11.3;
  FIELD_F32(a1, 10848) = v14 + 22.6;
  FIELD_U32(a1, 10852) = 1099405722;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 10832),
    0,
    (CollisionMgr_Sensor *)(a1 + 10844));
  v15 = FIELD_U32(a1, 3184);
  v16 = FIELD_U32(a1, 3176) | 0x10000800;
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3176) = v16;
  FIELD_U32(a1, 3184) = v15 | 0x10000800;
  memset(&info, 0, 24);
  info.radius = (float)((*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1) * 1.08) * 0.9;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 0x18C0), (StageActor *)a1, &info);
  FIELD_U32(a1, 6472) |= 3u;
  memset(&info, 0, 24);
  info.radius = 11.0;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 0x2730), (StageActor *)a1, &info);
  memset(&info, 0, 24);
  info.radius = 11.0;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 0x28C0), (StageActor *)a1, &info);
  sub_60040F08((float *)a1);
  sub_60041050(a1);
  sub_6040EBEC(a1 + 11712, 2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C800A4);
  return 1;
}
