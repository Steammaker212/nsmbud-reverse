/* SE_BOSS_SANBO_CRASH_ref
 * address: 0x600F6214   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_SANBO_CRASH_ref(int a1)
{
  int v2; // r1
  bool v3; // zf
  int v4; // r0
  int result; // r0
  int v6; // r0
  float v7; // r2
  float x; // s0
  float v9; // s2
  float v10; // r1
  int v11; // r5
  Vec3 v12; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  FIELD_F32(a1, 108) = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  v2 = dword_60C85B44;
  v3 = (FIELD_U32(a1, 6308) & 1) == 0;
  v4 = FIELD_U32(a1, 160);
  if ( v3 )
    v2 = -dword_60C85B44;
  FIELD_U32(a1, 160) = v2 + v4;
  if ( !FIELD_U8(a1, 6304) )
    FIELD_U32(a1, 156) += dword_60C85B4C;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0
    || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
  {
    v6 = FIELD_U32(a1, 80);
    FIELD_U32(a1, 80) = v6 ^ 1;
    FIELD_U32(a1, 120) = 1036831949;
    v7 = FIELD_F32(a1, 112);
    v12.x = FIELD_F32(a1, 108);
    v12.y = v7;
    x = v12.x;
    v12.z = 4500.0;
    if ( v6 )
    {
      v9 = -10.0;
    }
    else
    {
      v9 = 10.0;
      FIELD_U32(a1, 120) = -1110651699;
    }
    v12.x = v9 + x;
    EffectData_create(329, &v12, 0, 0);
    v10 = FIELD_F32(a1, 112);
    v11 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v10;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v11, "SE_BOSS_SANBO_CRASH", (int)&out, 0);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85B18);
  }
  return result;
}
