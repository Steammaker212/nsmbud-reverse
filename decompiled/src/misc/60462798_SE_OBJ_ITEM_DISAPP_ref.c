/* SE_OBJ_ITEM_DISAPP_ref
 * address: 0x60462798   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ITEM_DISAPP_ref(int a1, int a2, int a3)
{
  float v6; // r1
  int v7; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 6168) == 2 )
    sub_604096C4(dword_60C9A1F0);
  if ( a3 == 1 )
  {
    position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    EffectData_create(573, &position, 0, a1 + 144);
  }
  if ( a2 == 1 )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v7, "SE_OBJ_ITEM_DISAPP", &out.x, 0);
  }
  FIELD_U8(a1, 19) = 1;
  return 1;
}
