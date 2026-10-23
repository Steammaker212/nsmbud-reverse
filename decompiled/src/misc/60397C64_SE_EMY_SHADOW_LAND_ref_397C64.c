/* SE_EMY_SHADOW_LAND_ref_397C64
 * address: 0x60397C64   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_LAND_ref_397C64(int a1)
{
  float v2; // r0
  int result; // r0
  int v4; // r0
  float v5; // r1
  float v6; // r1
  int v7; // r5
  int v8; // r3
  int v9; // r0
  __int16 v10; // r1
  bool v11; // zf
  int v12; // r2
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  int *v16; // r0
  float v17; // s0
  float v18; // s2
  float v19; // s2
  float v20; // s2
  float v21; // s2
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  float v26; // s0
  float v27; // s2
  float v28; // s2
  float v29; // s2
  Vec3 position; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  v2 = FIELD_F32(a1, 112);
  position.z = FIELD_F32(a1, 116);
  position.y = v2;
  position.x = FIELD_F32(a1, 108);
  EffectWrapper_update((EffectWrapper *)(a1 + 12776), 1155, &position, 0, 0);
  result = FIELD_U8(a1, 6320);
  if ( (result & 1) != 0 )
  {
    v4 = 1;
    switch ( FIELD_U8(a1, 5957) )
    {
      case 1:
        v4 = 3;
        break;
      case 2:
        v4 = 2;
        break;
      case 4:
        break;
      case 0xB:
        v4 = 4;
        break;
      default:
        v4 = 0;
        break;
    }
    v5 = FIELD_F32(a1, 108);
    position.y = FIELD_F32(a1, 112);
    position.x = v5;
    position.z = 4500.0;
    EffectData_create(dword_60B00980[v4], &position, 0, 0);
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v7, "SE_EMY_SHADOW_LAND", (int)&out, 0);
    v9 = PlayerMgr_instance;
    v10 = FIELD_U16(PlayerMgr_instance, 66);
    v12 = v10 & 1;
    v11 = v12 == 0;
    if ( (v10 & 1) != 0 )
    {
      v8 = FIELD_U32(PlayerMgr_instance, 32);
      v11 = v8 == 0;
    }
    if ( !v11 )
    {
      v17 = FIELD_F32(a1, 108);
      v18 = FIELD_F32(v8, 108) - v17;
      if ( v18 >= 0.0 && v18 <= 160.0 )
        goto LABEL_62;
    }
    v13 = (v10 & 2) == 0;
    if ( (v10 & 2) != 0 )
    {
      v8 = FIELD_U32(PlayerMgr_instance, 36);
      v13 = v8 == 0;
    }
    if ( !v13 )
    {
      v17 = FIELD_F32(a1, 108);
      v19 = FIELD_F32(v8, 108) - v17;
      if ( v19 >= 0.0 && v19 <= 160.0 )
        goto LABEL_62;
    }
    v14 = (v10 & 4) == 0;
    if ( (v10 & 4) != 0 )
    {
      v8 = FIELD_U32(PlayerMgr_instance, 40);
      v14 = v8 == 0;
    }
    if ( !v14 )
    {
      v17 = FIELD_F32(a1, 108);
      v20 = FIELD_F32(v8, 108) - v17;
      if ( v20 >= 0.0 && v20 <= 160.0 )
        goto LABEL_62;
    }
    v15 = (v10 & 8) == 0;
    if ( (v10 & 8) != 0 )
    {
      v8 = FIELD_U32(PlayerMgr_instance, 44);
      v15 = v8 == 0;
    }
    if ( v15 || (v17 = FIELD_F32(a1, 108), v21 = FIELD_F32(v8, 108) - v17, v21 < 0.0) || v21 > 160.0 )
    {
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
      CollisionMgr_vf14(a1 + 648);
      v16 = &dword_60C971A0;
    }
    else
    {
LABEL_62:
      if ( (FIELD_U8(a1, 6320) & 2) == 0 )
      {
        v22 = v12 == 0;
        if ( (v10 & 1) != 0 )
        {
          v12 = FIELD_U32(PlayerMgr_instance, 32);
          v22 = v12 == 0;
        }
        if ( !v22 )
        {
          v27 = FIELD_F32(v12, 108) - v17;
          if ( v27 >= 0.0 && v27 < 48.0 )
            goto LABEL_70;
        }
        v23 = (v10 & 2) == 0;
        if ( (v10 & 2) != 0 )
        {
          v12 = FIELD_U32(PlayerMgr_instance, 36);
          v23 = v12 == 0;
        }
        if ( !v23 )
        {
          v28 = FIELD_F32(v12, 108) - v17;
          if ( v28 >= 0.0 && v28 < 48.0 )
            goto LABEL_70;
        }
        v24 = (v10 & 4) == 0;
        if ( (v10 & 4) != 0 )
        {
          v12 = FIELD_U32(PlayerMgr_instance, 40);
          v24 = v12 == 0;
        }
        if ( !v24 )
        {
          v29 = FIELD_F32(v12, 108) - v17;
          if ( v29 >= 0.0 && v29 < 48.0 )
            goto LABEL_70;
        }
        v25 = (v10 & 8) == 0;
        if ( (v10 & 8) != 0 )
        {
          v9 = FIELD_U32(PlayerMgr_instance, 44);
          v25 = v9 == 0;
        }
        if ( !v25 )
        {
          v26 = FIELD_F32(v9, 108) - v17;
          if ( v26 >= 0.0 && v26 < 48.0 )
          {
LABEL_70:
            if ( FIELD_F32(a1, 112) <= (float)(FIELD_F32(a1, 6604) + 2.0) )
            {
              SE_EMY_SHADOW_JUMP_ref_2(a1);
              goto LABEL_65;
            }
          }
        }
      }
      v16 = &dword_60C975C0;
    }
    FIELD_U32(a1, 6392) = v16;
LABEL_65:
    result = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6604) = result;
  }
  return result;
}
