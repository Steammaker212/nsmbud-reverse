/* SE_EMY_BOOMERANG_BROS_BOOMERANG_ref
 * address: 0x601321AC   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_EMY_BOOMERANG_BROS_BOOMERANG_ref(int a1)
{
  int v2; // r0
  int v3; // r2
  ActiveColliderMgr *v4; // r5
  int v5; // r1
  float v6; // s0
  int v7; // r1
  int v8; // r0
  float v9; // s0
  float v10; // s4
  float v12; // r1
  int v13; // r5
  int v14; // r6
  bool v15; // zf
  int v16; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  if ( FIELD_U8(dword_60CC6D8C, 17) )
    CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = FIELD_U32(a1, 11952);
  FIELD_U32(a1, 11952) = v2 - 1;
  if ( v2 <= 1 )
    FIELD_U32(a1, 116) = 1166909440;
  if ( FIELD_U32(a1, 6584) )
  {
    v3 = FIELD_U32(a1, 6588);
    if ( !v3 || (FIELD_U32(a1, 6588) = v3 - 1, v3 <= 1) )
    {
      FIELD_U32(a1, 6584) = 0;
      v4 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
      }
    }
  }
  FIELD_U32(a1, 156) += 0x8000000;
  v5 = FIELD_U32(a1, 6496);
  if ( v5 < 1 )
  {
    v6 = FIELD_F32(a1, 124) + -0.0625;
    FIELD_F32(a1, 124) = v6;
    if ( v6 < -1.125 )
      FIELD_U32(a1, 124) = -1081081856;
  }
  else
  {
    FIELD_U32(a1, 6496) = v5 - 1;
  }
  v7 = FIELD_U32(a1, 6492);
  if ( v7 < 1 )
  {
    v8 = FIELD_U32(a1, 80);
    v9 = flt_60AF1EF8[v8 == 0] + FIELD_F32(a1, 120);
    v10 = *(float *)&dword_60AF1EC0[v8];
    FIELD_F32(a1, 120) = v9;
    if ( (float)(v9 * v10) < 0.0 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C875E4);
  }
  else
  {
    FIELD_U32(a1, 6492) = v7 - 1;
  }
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v12 = FIELD_F32(a1, 112);
  v13 = FIELD_U32(a1, 8);
  v14 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v12;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v14, "SE_EMY_BOOMERANG_BROS_BOOMERANG", v13, &out, 0);
  v15 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v15 = FIELD_U8(a1, 6592) == 0;
  if ( v15 )
  {
    if ( (nullsub_7(a1 + 6600), v16 = FIELD_U32(a1, 8824), (v16 & 0x10400) == 0x400)
      || (v16 & 0x440000) != 0 && (v16 & 0x10000000) == 0
      || (v16 & 1) != 0
      || !(((v16 & 0x880000) == 0) | ((v16 & 0x20000000u) >> 29)) )
    {
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87644);
    }
  }
  return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
