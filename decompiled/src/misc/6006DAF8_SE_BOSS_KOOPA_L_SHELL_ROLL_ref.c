/* SE_BOSS_KOOPA_L_SHELL_ROLL_ref
 * address: 0x6006DAF8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_L_SHELL_ROLL_ref(int a1)
{
  float v2; // s16
  float v3; // r1
  float v4; // r1
  float v5; // r2
  int result; // r0
  int speed; // [sp+8h] [bp-30h] BYREF
  Vec3 target[3]; // [sp+Ch] [bp-2Ch] BYREF

  v2 = FIELD_F32(a1, 124);
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 112);
  target[0].x = FIELD_F32(a1, 108);
  target[0].y = v3;
  target[0].z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 25896), 1103, target, 0, (Vec3 *)(a1 + 144));
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  target[0].x = FIELD_F32(a1, 108);
  target[0].y = v4;
  target[0].z = v5;
  EffectWrapper_update((EffectWrapper *)(a1 + 26000), 1104, target, 0, (Vec3 *)(a1 + 144));
  sub_608134C8(a1 + 6332, "SE_BOSS_KOOPA_L_SHELL_ROLL", 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  LODWORD(target[0].x) = dword_60C817A0;
  speed = dword_60C817A4;
  moveValueTo((int *)(a1 + 26108), (int *)target, &speed);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 26108);
  target[0].x = 0.0;
  speed = dword_60C81794;
  result = moveValueTo((int *)(a1 + 164), (int *)target, &speed);
  if ( FIELD_F32(a1, 124) <= *(float *)&dword_60C817A8 && v2 >= *(float *)&dword_60C817A8 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8164C);
  return result;
}
