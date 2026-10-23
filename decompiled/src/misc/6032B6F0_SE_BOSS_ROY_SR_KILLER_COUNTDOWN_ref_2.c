/* SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref_2
 * address: 0x6032B6F0   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref_2(int a1)
{
  float v3; // r0
  int v4; // r6
  Vec3 *v5; // r5
  float v6; // t1
  _DWORD *result; // r0
  int v8; // r1
  int v9; // r2
  float v10; // s0
  float *v11; // r0
  float v12; // s2
  float v13; // s4
  float v14; // s0
  float v15; // s2
  float v16; // r1
  int v17; // r5
  Vec3 position; // [sp+14h] [bp-Ch] BYREF
  Vec2 out; // [sp+20h] [bp+0h] BYREF

  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 8);
  v6 = FIELD_F32(a1, 108);
  v5 = (Vec3 *)(a1 + 108);
  position.x = v6;
  position.y = v3;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(a1 + 13560, "SE_BOSS_ROY_SR_KILLER_COUNTDOWN", v4, &out, 0);
  result = (_DWORD *)(a1 + 13072);
  v8 = FIELD_U32(a1, 13072);
  if ( !v8 || (*result = v8 - 1, v8 <= 1) )
  {
    SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref_2_helper(a1);
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF864, &stru_60AFF870, &stru_60AFF87C);
    FIELD_U32(a1, 3200) |= 0x10000800u;
    FIELD_U32(a1, 3192) |= 0x10000800u;
    v9 = FIELD_U32(a1, 3184);
    FIELD_U32(a1, 3176) |= 0x10000800u;
    FIELD_U32(a1, 3184) = v9 | 0x10000800;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
    v10 = FIELD_F32(a1, 108);
    v11 = (float *)((char *)&unk_60AF2694 + 8 * FIELD_U32(a1, 80));
    v12 = *v11;
    position.x = v10 + v11[1];
    v13 = FIELD_F32(a1, 112);
    out.x = v10 + v12;
    position.y = v13 + 15.0;
    out.y = v13 + 1.0;
    ((void (__fastcall *)(int, Vec3 *, Vec2 *))loc_60151A7C)(a1 + 648, &position, &out);
    v14 = FIELD_F32(a1, 108);
    position.x = v14 + -8.0;
    v15 = FIELD_F32(a1, 112);
    out.x = v14 + 8.0;
    position.y = v15 + 31.0;
    out.y = v15 + -15.0;
    ((void (__fastcall *)(int, Vec3 *, Vec2 *))loc_60151A7C)(a1 + 648, &position, &out);
    EffectData_create(14, v5, 0, 0);
    v16 = FIELD_F32(a1, 112);
    v17 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v16;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v17, "SE_EMY_BH_BOMB", (int)&out, 0);
    position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    LightSource_update1((LightSource *)(a1 + 13160), 17, &position, 0, 0, 0, 0, 0, 0);
    LightSource_unkUpdate3((LightSource *)(a1 + 13160));
    return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93D10);
  }
  return result;
}
