/* sub_60100090
 * address: 0x60100090   size: 1276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60100090(int a1)
{
  float v2; // s16
  float v3; // s0
  ActiveColliderMgr *v4; // r6
  float v5; // s18
  float v6; // s0
  ActiveColliderMgr *v7; // r6
  float v8; // s16
  float v9; // s0
  int v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r0
  float v14; // s16
  int v15; // r0
  int *v16; // r1
  _DWORD v18[4]; // [sp+8h] [bp-88h] BYREF
  CircularColliderInfo info; // [sp+18h] [bp-78h] BYREF
  ShapedColliderInfo v20[2]; // [sp+38h] [bp-58h] BYREF

  sub_600D0500((_DWORD *)a1);
  FIELD_U32(a1, 116) = -988004352;
  FIELD_U32(a1, 144) = 1066192077;
  FIELD_U32(a1, 148) = 1066192077;
  FIELD_U32(a1, 152) = 1066192077;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&dword_60C86034, 0);
  v2 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  v3 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 668))(a1, v2);
  FIELD_F32(a1, 312) = v2;
  FIELD_F32(a1, 316) = v3;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7660), (StageActor *)a1, (ActiveColliderInfo *)&dword_60C86060, 0);
  v5 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1) * 0.9;
  v6 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  FIELD_F32(a1, 7784) = v5;
  FIELD_F32(a1, 7788) = v6 * 0.9;
  FIELD_U32(a1, 7780) = 1098907648;
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7660))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 7660)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 7660));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7964), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCFA78, 0);
  FIELD_U32(a1, 8088) = 1094713344;
  FIELD_U32(a1, 8092) = 1082130432;
  FIELD_U32(a1, 8084) = -1044381696;
  FIELD_U32(a1, 7464) = 0;
  FIELD_U32(a1, 7468) = 0;
  v8 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  v9 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 668))(a1, v8);
  FIELD_F32(a1, 7472) = v8;
  FIELD_F32(a1, 7476) = v9;
  FIELD_U32(a1, 6736) = -1054867456;
  FIELD_U32(a1, 6740) = 1092616192;
  FIELD_F32(a1, 6744) = -(*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  FIELD_U32(a1, 6748) = -1054867456;
  FIELD_U32(a1, 6752) = 1092616192;
  FIELD_U32(a1, 6756) = 1107558400;
  FIELD_U32(a1, 6760) = -1051512012;
  FIELD_U32(a1, 6764) = 1104360244;
  FIELD_F32(a1, 6768) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1) + 1.0;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6736),
    (CollisionMgr_Sensor *)(a1 + 6748),
    (CollisionMgr_Sensor *)(a1 + 6760));
  v10 = FIELD_U32(a1, 3200) | 0x4400240;
  FIELD_U32(a1, 3204) |= 0x8000u;
  FIELD_U32(a1, 3200) = v10;
  v11 = FIELD_U32(a1, 3192);
  FIELD_U32(a1, 3196) |= 0x8000u;
  FIELD_U32(a1, 3192) = v11 | 0x14000A40;
  v12 = FIELD_U32(a1, 3184);
  v13 = FIELD_U32(a1, 3176) | 0x14000A40;
  FIELD_U32(a1, 3180) |= 0x8000u;
  FIELD_U32(a1, 3188) |= 0x8000u;
  FIELD_U32(a1, 3176) = v13;
  FIELD_U32(a1, 3184) = v12 | 0x14000A40;
  v14 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  memset(v20, 0, 16);
  v20[0].topLeft.x = -v14;
  v20[0].topLeft.y = v14 * 1.8;
  v20[0].bottomRight.x = v14;
  v20[0].bottomRight.y = 0.0;
  v20[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 8272), (StageActor *)a1, v20);
  FIELD_U32(a1, 8408) |= 0x80u;
  FIELD_U32(a1, 8584) = SE_OBJ_NO_DAMAGE_BOUND_ref_FF9B4;
  FIELD_U32(a1, 8592) = sub_600FFBD0;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8272));
  memset(&info, 0, 24);
  info.radius = v14;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 8928), (StageActor *)a1, &info);
  FIELD_U32(a1, 9064) |= 0x80u;
  FIELD_U32(a1, 9240) = SE_OBJ_NO_DAMAGE_BOUND_ref_FF9B4;
  FIELD_U32(a1, 9248) = sub_600FFBD0;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8928));
  v15 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 7656) + 132))(**(_DWORD **)(a1 + 7656), 0);
  v18[0] = 1028443341;
  v18[1] = 1028443341;
  v18[2] = 1028443341;
  v18[3] = 1058642330;
  (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v15 + 20))(v15, 0, v18);
  sub_600D17F4(a1);
  ((void (__fastcall *)(int))loc_601005C0)(a1);
  if ( (FIELD_U8(dword_60C99DD4, 848) & 1) != 0 )
    v16 = &dword_60C85E94;
  else
    v16 = &dword_60C85D54;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v16);
  return 1;
}
