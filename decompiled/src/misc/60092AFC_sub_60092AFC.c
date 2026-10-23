/* sub_60092AFC
 * address: 0x60092AFC   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60092AFC(int a1)
{
  float v2; // s18
  float v3; // s0
  ActiveColliderMgr *v4; // r6
  float v5; // s16
  float v6; // s0
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r3
  float v11; // s16
  int v12; // r0
  _DWORD v14[4]; // [sp+8h] [bp-88h] BYREF
  CircularColliderInfo info; // [sp+18h] [bp-78h] BYREF
  ShapedColliderInfo v16[2]; // [sp+38h] [bp-58h] BYREF

  sub_600D0500();
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 116) = -1018691584;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&dword_60C82374, 0);
  v2 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1) * 0.8;
  v3 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  FIELD_F32(a1, 312) = v2;
  FIELD_F32(a1, 316) = v3 * 0.8;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7964), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC7A00, 0);
  FIELD_U32(a1, 8088) = 1094713344;
  FIELD_U32(a1, 8092) = 1082130432;
  FIELD_U32(a1, 8084) = -1044381696;
  FIELD_U32(a1, 7460) = a1 + 15908;
  FIELD_U32(a1, 7464) = 0;
  FIELD_U32(a1, 7468) = 0;
  v5 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  v6 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 668))(a1, v5);
  FIELD_F32(a1, 7472) = v5;
  FIELD_F32(a1, 7476) = v6;
  FIELD_U32(a1, 6736) = -1054867456;
  FIELD_U32(a1, 6740) = 1092616192;
  FIELD_U32(a1, 6744) = -1049624576;
  FIELD_U32(a1, 6748) = -1054867456;
  FIELD_U32(a1, 6752) = 1092616192;
  FIELD_U32(a1, 6756) = 1097859072;
  FIELD_U32(a1, 6760) = -1054867456;
  FIELD_U32(a1, 6764) = 1092616192;
  FIELD_F32(a1, 6768) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1) + 1.0;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6736),
    (CollisionMgr_Sensor *)(a1 + 6748),
    (CollisionMgr_Sensor *)(a1 + 6760));
  v7 = FIELD_U32(a1, 3200) | 0x4400240;
  FIELD_U32(a1, 3204) |= 0x8000u;
  FIELD_U32(a1, 3200) = v7;
  v8 = FIELD_U32(a1, 3192) | 0xA40;
  FIELD_U32(a1, 3196) |= 0x8000u;
  v9 = FIELD_U32(a1, 3176);
  v10 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3180) |= 0x8000u;
  FIELD_U32(a1, 3188) |= 0x8000u;
  FIELD_U32(a1, 3192) = v8 | 0x14000000;
  FIELD_U32(a1, 3176) = v9 | 0x4000A40;
  FIELD_U32(a1, 3184) = v10 | 0x4000A40;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 9888),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6736),
    (CollisionMgr_Sensor *)(a1 + 6748),
    (CollisionMgr_Sensor *)(a1 + 6760));
  FIELD_U32(a1, 12440) |= 0x800000u;
  v11 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  memset(v16, 0, 16);
  v16[0].topLeft.x = -15.0;
  v16[0].topLeft.y = v11 + -8.0;
  v16[0].bottomRight.x = 15.0;
  v16[0].bottomRight.y = 0.0;
  v16[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 8272), (StageActor *)a1, v16);
  FIELD_U32(a1, 8408) |= 0x80u;
  FIELD_U32(a1, 8584) = SE_OBJ_NO_DAMAGE_BOUND_ref;
  FIELD_U32(a1, 8592) = sub_600FFBD0;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8272));
  memset(&info, 0, 24);
  info.radius = v11;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 8928), (StageActor *)a1, &info);
  FIELD_U32(a1, 9064) |= 0x80u;
  FIELD_U32(a1, 9240) = SE_OBJ_NO_DAMAGE_BOUND_ref;
  FIELD_U32(a1, 9248) = sub_600FFBD0;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8928));
  v12 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 7656) + 132))(**(_DWORD **)(a1 + 7656), 0);
  v14[0] = 1028443341;
  v14[1] = 1028443341;
  v14[2] = 1028443341;
  v14[3] = 1056964608;
  (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v12 + 20))(v12, 0, v14);
  sub_600D17F4(a1);
  ((void (__fastcall *)(int))loc_601005C0)(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81FA0);
  return 1;
}
