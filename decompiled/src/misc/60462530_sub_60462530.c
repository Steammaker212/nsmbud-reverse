/* sub_60462530
 * address: 0x60462530   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60462530(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r6
  const char *v5; // r1
  float v6; // r1
  int v8; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v9[4]; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+Ch] [bp-24h] BYREF
  Vec2 out; // [sp+18h] [bp-18h] BYREF

  ((void (__fastcall *)(int *, _BYTE *, int, _DWORD))checkLiquidCollisions)(
    &v8,
    v9,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( v8 == 5 )
  {
    if ( FIELD_U32(a1, 6168) == 2 )
      sub_604096C4(dword_60C9A1F0);
    position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    EffectData_create(573, &position, 0, a1 + 144);
    v2 = 1;
    FIELD_U8(a1, 19) = 1;
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    v5 = "SE_OBJ_CMN_SPLASH_POISON";
    goto LABEL_13;
  }
  if ( v8 == 4 )
  {
    if ( FIELD_U32(a1, 6168) == 2 )
      sub_604096C4(dword_60C9A1F0);
    goto LABEL_12;
  }
  v2 = 0;
  if ( v8 == 3 )
  {
    if ( FIELD_U32(a1, 6168) == 2 )
      sub_604096C4(dword_60C9A1F0);
LABEL_12:
    position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    EffectData_create(573, &position, 0, a1 + 144);
    v2 = 1;
    FIELD_U8(a1, 19) = 1;
    v6 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    v5 = "SE_OBJ_CMN_SPLASH_LAVA";
LABEL_13:
    BasicSoundActor2_play(v4, v5, &out.x, 0);
  }
  return v2;
}
