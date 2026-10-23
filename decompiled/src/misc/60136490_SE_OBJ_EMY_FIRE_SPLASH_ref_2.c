/* SE_OBJ_EMY_FIRE_SPLASH_ref_2
 * address: 0x60136490   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_FIRE_SPLASH_ref_2(int a1, int a2)
{
  float v4; // r1
  int v5; // r6
  int v6; // r0
  _DWORD v8[2]; // [sp+0h] [bp-8h] BYREF
  Vec2 v9; // [sp+8h] [bp+0h] BYREF
  int v10; // [sp+10h] [bp+8h]
  Vec3 position; // [sp+14h] [bp+Ch] BYREF

  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor2_play(v5, "SE_OBJ_EMY_FIRE_SPLASH", &v9.x, 0);
  position.x = FIELD_F32(a2, 4);
  position.y = FIELD_F32(a2, 8);
  position.z = 4500.0;
  v6 = FIELD_U32(a2, 12);
  v9.x = 0.0;
  v9.y = 0.0;
  v10 = v6;
  EffectData_create(1106, &position, (int)&v9, 0);
  v8[0] = LODWORD(position.x);
  v8[1] = LODWORD(position.y);
  TileMgr_splashRelated(TileMgr_instance, v8, 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
  FIELD_U8(a1, 6240) = 1;
  return 6240;
}
