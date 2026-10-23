/* SE_BOSS_KOOPA_L_SHELL_ref
 * address: 0x6006D2EC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_L_SHELL_ref(int a1)
{
  _BOOL4 v2; // r5
  int result; // r0
  float v4; // r1
  int v5; // r2
  int speed; // [sp+8h] [bp-20h] BYREF
  Vec3 target[2]; // [sp+Ch] [bp-1Ch] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7116));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  LODWORD(target[0].x) = dword_60C817A0;
  speed = dword_60C817A4;
  v2 = moveValueTo((int *)(a1 + 26108), (int *)target, &speed);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 26108);
  sub_608134C8(a1 + 6332, "SE_BOSS_KOOPA_L_SHELL_ROLL", 0);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 21, 3, 0, 0);
    v4 = FIELD_F32(a1, 112);
    target[0].x = FIELD_F32(a1, 108);
    target[0].y = v4;
    target[0].z = 4500.0;
    EffectData_create(1102, target, 0, a1 + 144);
    sub_60813430(a1 + 6332, "SE_BOSS_KOOPA_L_SHELL_LAND", 0);
    v5 = FIELD_U32(a1, 26112);
    result = v5 - 1;
    FIELD_U32(a1, 26112) = v5 - 1;
    if ( v5 < 2 )
    {
      if ( v2 )
      {
        FIELD_U32(a1, 124) = 0;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8160C);
      }
    }
    else
    {
      result = dword_60AF2304[result];
      FIELD_U32(a1, 124) = result;
    }
  }
  return result;
}
