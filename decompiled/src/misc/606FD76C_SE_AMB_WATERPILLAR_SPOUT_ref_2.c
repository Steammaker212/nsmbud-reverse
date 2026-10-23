/* SE_AMB_WATERPILLAR_SPOUT_ref_2
 * address: 0x606FD76C   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref_2(int a1)
{
  float v2; // r0
  float v3; // r0
  float v4; // r1
  int v5; // r6
  int v6; // r5
  Vec3 v8; // [sp+4h] [bp-4Ch] BYREF
  Vec2 out; // [sp+10h] [bp-40h] BYREF
  Vec3 position; // [sp+18h] [bp-38h] BYREF
  float v11; // [sp+24h] [bp-2Ch]
  float v12; // [sp+28h] [bp-28h]

  Animation_update(FIELD_U32(a1, 6116));
  Animation_update(FIELD_U32(a1, 6124));
  Animation_update(FIELD_U32(a1, 6120));
  if ( !FIELD_U8(a1, 6185) )
  {
    SE_AMB_WATERPILLAR_SPOUT_ref_2_helper(a1);
    if ( !FIELD_U8(a1, 6181) && FIELD_F32(a1, 6128) >= (float)(FIELD_F32(a1, 6136) * 0.4) )
    {
      FIELD_U8(a1, 6181) = 1;
      v2 = FIELD_F32(a1, 108);
      v11 = FIELD_F32(a1, 112);
      position.z = v2;
      v11 = v11 + 48.0;
      v12 = 6500.0;
      v8.x = 1.0 * 0.8;
      v8.y = 1.0 * 0.8;
      v8.z = 1.0 * 0.8;
      EffectData_create(28, (Vec3 *)&position.z, 0, (int)&v8);
    }
  }
  position.z = 1.0 * 0.8;
  v11 = 1.0 * 0.8;
  v12 = 1.0 * 0.8;
  EffectWrapper_update((EffectWrapper *)(a1 + 7516), 27, (Vec3 *)(a1 + 7724), 0, (Vec3 *)&position.z);
  v3 = FIELD_F32(a1, 108);
  v11 = FIELD_F32(a1, 112);
  position.z = v3;
  v11 = v11 + 48.0;
  v12 = 6500.0;
  v8.x = 1.0 * 0.8;
  v8.y = 1.0 * 0.8;
  v8.z = 1.0 * 0.8;
  EffectWrapper_update((EffectWrapper *)(a1 + 7620), 29, (Vec3 *)&position.z, 0, &v8);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 8);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v6, "SE_AMB_WATERPILLAR_SPOUT", v5, &out, 0);
}
