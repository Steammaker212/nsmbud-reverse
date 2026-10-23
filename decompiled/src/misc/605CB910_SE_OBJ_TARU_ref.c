/* SE_OBJ_TARU_ref
 * address: 0x605CB910   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_TARU_ref(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r5
  float v5; // r1
  int v6; // r5
  int v7; // r6
  int v8; // r5
  int v9; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 2872);
  sub_605CC4D8(a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( (FIELD_U8(a1, 6124) & 8) != 0 )
      return SE_OBJ_TARU_BREAK_ref(a1, 0);
    FIELD_U32(a1, 124) = 0;
    if ( (v2 & 1) == 0 )
    {
      v3 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v3;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v4, "SE_OBJ_TARU_LAND", &out.x, 0);
    }
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_U32(a1, 8);
    v7 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v7, "SE_OBJ_TARU_ROLL", v6, &out, 0);
  }
  v8 = a1 + 648;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
  v9 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v9 + 18) >> 5) + 2224) & (1 << ((v9 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v8 + 4 * ((v9 + 22) >> 5) + 2224) & (1 << ((v9 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v8 + 4 * ((v9 + 28) >> 5) + 2224) & (1 << ((v9 + 28) & 0x1F))) == 0 )
  {
    SE_OBJ_TARU_BREAK_ref(a1, 0);
  }
  return (StateMethodExecuter *)ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6152));
}
