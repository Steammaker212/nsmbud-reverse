/* SE_PLY_LAND_ROCK_ref
 * address: 0x6072F858   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_LAND_ROCK_ref(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  float v5; // r5
  float v6; // r6
  float v7; // s0
  int *v8; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDB20);
      v3 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v3;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v4, "SE_PLY_LAND_ROCK", (int)&out, 0);
      v5 = FIELD_F32(a1, 108);
      v6 = FIELD_F32(a1, 112);
      v7 = sub_600024C4(a1);
      position.x = v5;
      position.y = v6;
      position.z = v7;
      EffectData_create(54, &position, 0, 0);
    }
    v8 = (int *)(a1 + 6320);
    result = FIELD_U32(a1, 6320);
    if ( !result && FIELD_F32(a1, 124) < 0.0 )
    {
      (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 6300) + 4) + 84))(
        *(_DWORD *)(FIELD_U32(a1, 6300) + 4),
        6,
        1.0,
        0.0,
        0.0);
      result = *v8 + 1;
      *v8 = result;
    }
  }
  return result;
}
