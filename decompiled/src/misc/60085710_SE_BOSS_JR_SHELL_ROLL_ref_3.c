/* SE_BOSS_JR_SHELL_ROLL_ref_3
 * address: 0x60085710   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_SHELL_ROLL_ref_3(int a1)
{
  float v2; // r1
  float v3; // r8
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r5
  int result; // r0
  int speed; // [sp+8h] [bp-28h] BYREF
  Vec3 target[3]; // [sp+Ch] [bp-24h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_608134C8(a1 + 6332, "SE_BOSS_JR_SHELL_ROLL", 0);
  v2 = FIELD_F32(a1, 112);
  target[0].x = FIELD_F32(a1, 108);
  target[0].y = v2;
  target[0].z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 7708), 1083, target, 0, 0);
  EffectWrapper_update((EffectWrapper *)(a1 + 7812), 1084, (Vec3 *)(a1 + 108), 0, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
    {
      v3 = FIELD_F32(a1, 112);
      target[0].x = FIELD_F32(a1, 108);
      target[0].y = v3;
      target[0].z = 4500.0;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v5 == (*(int (**)(void))(dword_60C81D8C + 8))()
        || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
            v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
            v7 == (*(int (**)(void))(dword_60C81D6C + 8))()) )
      {
        target[0].y = v3 + 2.0;
      }
      EffectData_create(1082, target, 0, 0);
    }
    FIELD_U32(a1, 124) = 0;
  }
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7620);
  target[0].x = 0.0;
  speed = 23860929;
  moveValueTo((int *)(a1 + 7620), (int *)target, &speed);
  target[0].x = 0.0;
  speed = dword_60C81F40;
  moveValueTo((int *)(a1 + 164), (int *)target, &speed);
  result = a1 + 120;
  if ( FIELD_F32(a1, 120) == 0.0 )
  {
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1060))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81D0C);
  }
  return result;
}
