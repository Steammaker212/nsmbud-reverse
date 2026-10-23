/* SE_BOSS_JR_SHELL_LAND_ref
 * address: 0x60085F88   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_SHELL_LAND_ref(int a1)
{
  Actor *v1; // r6
  int result; // r0
  float v4; // r8
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r0
  bool v9; // zf
  int speed; // [sp+4h] [bp-2Ch] BYREF
  CollisionMgr_Sensor sensor; // [sp+8h] [bp-28h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sensor.a = -2.0;
  speed = 35791394;
  moveValueTo((int *)(a1 + 156), (int *)&sensor, &speed);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    if ( FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
    {
      v4 = FIELD_F32(a1, 112);
      sensor.a = FIELD_F32(a1, 108);
      sensor.b = v4;
      sensor.c = 4500.0;
      v1 = (Actor *)(a1 + 6084);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 == (*(int (**)(void))(dword_60C81D8C + 8))()
        || (v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
            v1 = (Actor *)(*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
            v1 == (Actor *)(*(int (**)(void))(dword_60C81D6C + 8))()) )
      {
        sensor.b = v4 + 2.0;
      }
      EffectData_create(1082, (Vec3 *)&sensor, 0, 0);
      sub_60813430(a1 + 6332, "SE_BOSS_JR_SHELL_LAND", 0);
    }
    v8 = sub_6014B69C(a1 + 648);
    v9 = v8 == 0;
    if ( v8 )
    {
      v1 = *(Actor **)(v8 + 144);
      v9 = v1 == 0;
    }
    if ( v9 || Actor__getProfileId(v1) != 392 )
    {
      FIELD_U32(a1, 7616) = FIELD_U32(a1, 7616) & 0xFFFFFFFC | 2;
      FIELD_U32(a1, 304) = 0;
      FIELD_U32(a1, 308) = 1092616192;
      FIELD_U32(a1, 312) = 1092616192;
      FIELD_U32(a1, 316) = 1092616192;
      FIELD_U32(a1, 320) = 1;
      FIELD_U32(a1, 6836) = 0;
      FIELD_U32(a1, 6840) = 1094713344;
      FIELD_U32(a1, 6844) = 1094713344;
      FIELD_U32(a1, 6848) = 1094713344;
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF55A0, 2);
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF55AC, 0);
      sensor.b = 10.0;
      sensor.a = 10.0;
      sensor.c = -8.0;
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 1);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81D6C);
      FIELD_U32(a1, 7696) = 240;
      return 7696;
    }
    else
    {
      result = sub_602EE904(v1);
      if ( !result )
        return sub_602EE7B8(v1, FIELD_U32(a1, 80), -1);
    }
  }
  return result;
}
