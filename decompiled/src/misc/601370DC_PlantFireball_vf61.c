/* PlantFireball_vf61
 * address: 0x601370DC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf61(int a1)
{
  float v2; // r1
  float v3; // r2
  float v4; // r1
  int v5; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
  if ( !FIELD_U8(a1, 6240) )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_F32(a1, 116);
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    position.z = v3;
    if ( sub_60236FD4((float *)(a1 + 584)) == 1 )
      position.z = 4500.0;
    EffectData_create(4, &position, 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
    FIELD_U8(a1, 6240) = 1;
  }
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  return sub_60813BDC(v5, "SE_EMY_CMN_TOUCH_DISAPPEAR", &out, 1, 0);
}
