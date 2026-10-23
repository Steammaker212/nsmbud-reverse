/* SE_EMY_KAMECK_FLY_MAGIC_ref_2
 * address: 0x60062330   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KAMECK_FLY_MAGIC_ref_2(int a1)
{
  float v2; // r1
  int v3; // r6
  int v4; // r5
  _DWORD *v5; // r6
  float v6; // s0
  float v7; // r0
  int result; // r0
  int v10; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  FIELD_F32(a1, 124) = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v4, "SE_BOSS_JR_CLOWN_MOVE", v3, &out, 0);
  v5 = (_DWORD *)(a1 + 7764);
  if ( FIELD_U32(a1, 7764) == 2 )
  {
    v6 = FIELD_F32(dword_60CC6484, 112);
    if ( FIELD_F32(a1, 108) >= v6 && FIELD_F32(a1, 584) < v6 )
    {
      v7 = FIELD_F32(dword_60CC6484, 128);
      position.x = FIELD_F32(dword_60CC6484, 116);
      position.y = v7;
      (*(void (__fastcall **)(int, const char *, Vec3 *, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 36))(
        Global_BasicSoundActor1,
        "SE_EMY_KAMECK_FLY_MAGIC",
        &position,
        0);
    }
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    if ( (*v5)-- < 2 )
    {
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81034);
    }
    else
    {
      FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 120) + 48.0;
      FIELD_U32(a1, 80) ^= 1u;
      FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
      v10 = FIELD_U32(a1, 6304);
      LODWORD(position.x) = &sead__SafeStringBase__vtable;
      LODWORD(position.y) = "jc_demo_W8_magic";
      sub_60421AE4(v10, &position, 1);
      FIELD_F32(a1, 112) = FIELD_F32(dword_60CC6484, 128) + 96.0;
      FIELD_U32(a1, 136) = -1070945620;
      FIELD_U64(a1, 120) = 0xC02AAAAC40C00000LL;
      if ( FIELD_U32(a1, 80) == 1 )
        FIELD_U32(a1, 120) = -1061158912;
      FIELD_U32(a1, 100) = 1026951913;
      FIELD_U16(a1, 6276) = 120;
      return 120;
    }
  }
  return result;
}
