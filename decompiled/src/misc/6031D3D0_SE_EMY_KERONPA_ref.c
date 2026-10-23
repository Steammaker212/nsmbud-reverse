/* SE_EMY_KERONPA_ref
 * address: 0x6031D3D0   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KERONPA_ref(int a1)
{
  _BYTE *v2; // r6
  int v3; // r0
  float v4; // r1
  int v5; // r5
  int v6; // r6
  int v7; // r9
  int v8; // r7
  Vec2 out; // [sp+18h] [bp-30h] BYREF
  Vec3 position; // [sp+20h] [bp-28h] BYREF

  v2 = (_BYTE *)(a1 + 12604);
  if ( FIELD_U8(a1, 12604) )
  {
    LightSource_update1((LightSource *)(a1 + 12920), 58, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
    LightSource_unkUpdate3((LightSource *)(a1 + 12920));
    if ( !FIELD_U16(a1, 6276) )
      FIELD_U8(a1, 19) = 1;
  }
  else
  {
    sub_6031C22C(a1);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
    sub_6031C374(a1);
    EffectWrapper_update((EffectWrapper *)(a1 + 12480), 19, (Vec3 *)(a1 + 108), 0, 0);
    v3 = FIELD_U32(a1, 12600) - 1;
    FIELD_U32(a1, 12600) = v3;
    v4 = FIELD_F32(a1, 112);
    if ( v3 )
    {
      v5 = FIELD_U32(a1, 8);
      v6 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v6, "SE_EMY_KERONPA_ALARM", v5, &out, 0);
    }
    else
    {
      v7 = FIELD_S16(a1, 12608);
      v8 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      sub_60813810(v8, (int)"SE_EMY_KERONPA_BOMB", (int)&out, v7, 0);
      EffectData_create(20, (Vec3 *)(a1 + 108), 0, 0);
      sub_6031AC74(a1, 1);
      FIELD_U32(a1, 500) = 1108344832;
      FIELD_U32(a1, 504) = 1108344832;
      sub_60158FA8((ActiveCollider *)(a1 + 188), 0);
      FIELD_U32(a1, 312) = 1099956224;
      FIELD_U32(a1, 316) = 1099956224;
      FIELD_U16(a1, 6276) = 16;
      *v2 = 1;
    }
  }
  return j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
}
