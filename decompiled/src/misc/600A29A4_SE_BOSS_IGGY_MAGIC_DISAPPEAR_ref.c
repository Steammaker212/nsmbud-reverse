/* SE_BOSS_IGGY_MAGIC_DISAPPEAR_ref
 * address: 0x600A29A4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_BOSS_IGGY_MAGIC_DISAPPEAR_ref(StageActor *a1)
{
  float x; // s0
  int v3; // r0
  float y; // r1
  int v5; // r6
  StateBase *CurrentState; // r0
  int v7; // r5
  _BYTE a2[76]; // [sp+10h] [bp-78h] BYREF
  Vec3 position; // [sp+5Ch] [bp-2Ch] BYREF
  Vec2 out; // [sp+68h] [bp-20h] BYREF

  StageActor__cullCheck(a1, 0);
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  CollisionMgr_process(&a1[1]._.heap);
  if ( (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 300))(a1) )
  {
    if ( !LOBYTE(a1[10].aCollider.info.field_10) )
    {
      x = FIELD_F32(a1, 0x6C);
      if ( x > (float)(FIELD_F32(dword_60CC6484, 112) + -8.0) || x < (float)(FIELD_F32(dword_60CC6484, 120) + 8.0) )
      {
        v3 = a1[10].aCollider.info.field_14;
        *(float *)a2 = FIELD_F32(a1, 0x6C);
        *(_DWORD *)&a2[4] = v3;
        *(_DWORD *)&a2[8] = 1166843904;
        StageActor__createWaterSplash(a1, (Vec2 *)a2, 1025, 18, "SE_OBJ_CMN_SPLASH_LAVA");
        y = FIELD_F32(a1, 0x70);
        v5 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 0x6C);
        position.y = y;
        mapPositionToScreen(&out, &position);
        BasicSoundActor1_playSound(v5, "SE_BOSS_IGGY_MAGIC_DISAPPEAR", (int)&out, 0);
        LOBYTE(a1[10].aCollider.info.field_10) = 1;
      }
    }
  }
  position.x = FIELD_F32(a1, 0x6C) + FIELD_F32(a1, 0x23C);
  position.y = FIELD_F32(a1, 0x70) + FIELD_F32(a1, 0x240);
  position.z = FIELD_F32(a1, 0x74) + FIELD_F32(a1, 0x244);
  if ( BYTE1(a1[10].aCollider.info.field_10)
    && (CurrentState = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v7 != (*(int (**)(void))(dword_60C835FC + 8))()) )
  {
    qmemcpy(a2, **(const void ***)(FIELD_U32(dword_60C9A698, 229616) + 128), sizeof(a2));
    LightSource_update2(
      (LightSource *)&a1[9].aCollider.info.distToEdge.y,
      &position,
      0,
      (float *)&a2[28],
      0,
      (float *)&a2[12],
      0,
      0);
  }
  else
  {
    LightSource_update2((LightSource *)&a1[9].aCollider.info.distToEdge.y, &position, 0, 0, 0, 0, 0, 0);
  }
  return 1;
}
