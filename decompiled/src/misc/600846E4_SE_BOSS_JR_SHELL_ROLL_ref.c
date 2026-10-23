/* SE_BOSS_JR_SHELL_ROLL_ref
 * address: 0x600846E4   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_SHELL_ROLL_ref(int a1)
{
  int result; // r0
  float v3; // r7
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r5
  int v8; // r2
  int v9; // [sp+0h] [bp-28h] BYREF
  Vec3 target[3]; // [sp+4h] [bp-24h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7612));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  target[0].x = 4.3082e-26;
  v9 = 23860929;
  moveValueTo((int *)(a1 + 7620), (int *)target, &v9);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7620);
  sub_608134C8(a1 + 6332, "SE_BOSS_JR_SHELL_ROLL", 0);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    sub_60813430(a1 + 6332, "SE_BOSS_JR_SHELL_LAND", 0);
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
    v8 = FIELD_U32(a1, 7624);
    FIELD_U32(a1, 7624) = v8 - 1;
    if ( v8 < 2 )
    {
      FIELD_U32(a1, 124) = 0;
      FIELD_U16(a1, 6276) = 300;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81C8C);
    }
    else
    {
      result = dword_60AF2304[v8 - 1];
      FIELD_U32(a1, 124) = result;
    }
  }
  return result;
}
