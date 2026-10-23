/* SE_OBJ_ICICLE_BREAK_ref
 * address: 0x600AD5C4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICICLE_BREAK_ref(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  Vec3 v5; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_600AF29C(a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = FIELD_U8(a1, 19);
    if ( !FIELD_U8(a1, 19) )
    {
      sub_600AEAC4(a1);
      v3 = FIELD_F32(a1, 112);
      v5.x = FIELD_F32(a1, 108);
      v5.y = v3;
      v5.z = 4500.0;
      EffectData_create(1055, &v5, 0, 0);
      v4 = Global_BasicSoundActor2;
      position.x = v5.x;
      position.y = v5.y;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v4, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
