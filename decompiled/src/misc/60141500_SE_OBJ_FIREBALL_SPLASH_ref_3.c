/* SE_OBJ_FIREBALL_SPLASH_ref_3
 * address: 0x60141500   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_SPLASH_ref_3(int a1)
{
  _DWORD *v2; // r4
  int v3; // r7
  float *v4; // r6
  int v5; // r0
  int v6; // r4
  float v7; // r1
  int v8; // r6
  int v9; // r0
  float v10; // r0
  int v11; // r2
  int v12; // r3
  const char *sound; // r0
  float v14; // r1
  int v15; // r6
  int v16; // r0
  Vec2 *p_out; // r1
  int v18; // r2
  float v19; // r0
  float v20; // r0
  int v22; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v23[4]; // [sp+8h] [bp-48h] BYREF
  float v24; // [sp+Ch] [bp-44h]
  float v25; // [sp+10h] [bp-40h]
  int v26; // [sp+14h] [bp-3Ch]
  _DWORD v27[2]; // [sp+18h] [bp-38h] BYREF
  Vec2 out; // [sp+20h] [bp-30h] BYREF
  int v29; // [sp+28h] [bp-28h]
  Vec3 position; // [sp+2Ch] [bp-24h] BYREF

  v2 = (_DWORD *)(a1 + 6100);
  v3 = FIELD_U32(a1, 6100);
  v4 = (float *)(a1 + 6104);
  ((void (__fastcall *)(int *, int, _BYTE *, int, _DWORD))physics_21893E8)(
    &v22,
    a1 + 6104,
    v23,
    a1 + 108,
    FIELD_U8(a1, 86));
  v5 = v22;
  *v2 = v22;
  v6 = 0;
  switch ( v5 )
  {
    case 0:
      if ( v3 == 2 && FIELD_U8(a1, 6748) )
      {
        v7 = FIELD_F32(a1, 112);
        v8 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v7;
        mapPositionToScreen(&out, &position);
        v6 = 0;
        BasicSoundActor2_play(v8, "SE_OBJ_FIREBALL_SPLASH", &out.x, 0);
        position.x = FIELD_F32(a1, 6752);
        position.y = FIELD_F32(a1, 6756);
        position.z = 4500.0;
        v9 = FIELD_U32(a1, 6760);
        out.x = 0.0;
        out.y = 0.0;
        v29 = v9;
        EffectData_create(1106, &position, (int)&out, 0);
        goto LABEL_10;
      }
      break;
    case 1:
      if ( !v3 )
      {
        v10 = *v4;
        v11 = 838;
        v12 = 8;
        position.x = FIELD_F32(a1, 108);
        position.y = v10;
        position.z = 6500.0;
        sound = "SE_OBJ_FIREBALL_SPLASH";
        goto LABEL_18;
      }
      break;
    case 2:
      if ( v23[0] )
      {
        FIELD_U8(a1, 6748) = v23[0];
        FIELD_F32(a1, 6752) = v24;
        FIELD_F32(a1, 6756) = v25;
        FIELD_U32(a1, 6760) = v26;
        if ( !v3 )
        {
          v14 = FIELD_F32(a1, 112);
          v15 = Global_BasicSoundActor2;
          position.x = FIELD_F32(a1, 108);
          position.y = v14;
          mapPositionToScreen(&out, &position);
          v6 = 0;
          BasicSoundActor2_play(v15, "SE_OBJ_FIREBALL_SPLASH", &out.x, 0);
          out.x = 0.0;
          out.y = 0.0;
          position.x = v24;
          position.y = v25;
          position.z = 4500.0;
          v29 = v26;
          EffectData_create(1106, &position, (int)&out, 0);
LABEL_10:
          v16 = TileMgr_instance;
          v27[0] = LODWORD(position.x);
          v27[1] = LODWORD(position.y);
          p_out = (Vec2 *)v27;
          v18 = 8;
          goto LABEL_15;
        }
      }
      break;
    case 3:
      v6 = 1;
      if ( !v3 )
        goto LABEL_14;
      break;
    case 4:
      v6 = 1;
      if ( !v3 )
      {
LABEL_14:
        v19 = *v4;
        position.x = FIELD_F32(a1, 108);
        position.y = v19;
        position.z = 6500.0;
        EffectData_create(840, &position, 0, 0);
        v16 = TileMgr_instance;
        out.x = position.x;
        out.y = position.y;
        p_out = &out;
        v18 = 18;
LABEL_15:
        TileMgr_splashRelated(v16, p_out, v18);
      }
      break;
    case 5:
      v6 = 1;
      if ( !v3 )
      {
        v20 = *v4;
        v11 = 839;
        v12 = 25;
        position.x = FIELD_F32(a1, 108);
        position.y = v20;
        position.z = 6500.0;
        sound = "SE_OBJ_CMN_SPLASH_POISON";
LABEL_18:
        StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)&position, v11, v12, sound);
      }
      break;
    default:
      return v6;
  }
  return v6;
}
