/* SE_EMY_KOTON_LAND_ref
 * address: 0x603365FC   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KOTON_LAND_ref(int a1, double a2, double a3, float32x2_t a4)
{
  float v5; // r1
  float v6; // r2
  float v7; // s0
  float v8; // s0
  int result; // r0
  float v10; // r1
  float v11; // r1
  int v12; // r5
  Vec3 speed; // [sp+8h] [bp-68h] BYREF
  float v14; // [sp+14h] [bp-5Ch]
  int v15; // [sp+18h] [bp-58h]
  int v16; // [sp+1Ch] [bp-54h]
  int v17; // [sp+20h] [bp-50h]
  float v18; // [sp+24h] [bp-4Ch]
  int v19; // [sp+28h] [bp-48h]
  int v20; // [sp+2Ch] [bp-44h]
  int v21; // [sp+30h] [bp-40h]
  float v22; // [sp+34h] [bp-3Ch]
  Vec2 out; // [sp+38h] [bp-38h] BYREF
  unsigned int v24; // [sp+40h] [bp-30h] BYREF
  Vec3 position; // [sp+48h] [bp-28h] BYREF

  FIELD_U32(a1, 136) = -1061695783;
  *(float *)&a3 = FIELD_F32(a1, 100) * FIELD_F32(a1, 6320);
  *(float *)&a2 = FIELD_F32(a1, 6420) + *(float *)&a3;
  FIELD_F32(a1, 6420) = *(float *)&a2;
  if ( FIELD_U8(a1, 6436) )
  {
    a4.n64_u32[0] = -1061695783;
    *(float *)&a2 = *(float *)&a3 + FIELD_F32(a1, 124);
    LODWORD(a3) = 1085787865;
    LODWORD(a2) = vmin_f32(vmax_f32(*(float32x2_t *)&a2, a4), *(float32x2_t *)&a3).n64_u32[0];
  }
  else
  {
    LODWORD(a3) = -1061695783;
    a4.n64_u32[0] = 1085787865;
    LODWORD(a2) = vmin_f32(vmax_f32(*(float32x2_t *)&a2, *(float32x2_t *)&a3), a4).n64_u32[0];
  }
  FIELD_U32(a1, 124) = LODWORD(a2);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  speed.x = 1.5046e-36;
  position.x = 0.0;
  moveValueTo((int *)(a1 + 164), (int *)&position, (int *)&speed);
  EffectData_setEffectId((EffectData *)(a1 + 6536), 370);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  position.z = v6;
  v24 = FIELD_U32(a1, 164);
  out = *(Vec2 *)(a1 + 156);
  speed.x = 1.0;
  speed.y = 0.0;
  speed.z = 0.0;
  v15 = 0;
  v16 = 1065353216;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 1065353216;
  v14 = position.x + 0.0;
  v18 = v5 + 8.0;
  v22 = v6 + 0.0;
  Mtx34_rotateY((float32x2_t *)&speed, (unsigned int *)&out.y);
  Mtx34_rotateX((float32x2_t *)&speed, (unsigned int *)&out);
  Mtx34_rotateZ((float32x2_t *)&speed, &v24);
  position.x = v14;
  position.y = v18;
  position.z = 4500.0;
  sub_60237208(a1 + 6520, &position, (Vec3i *)(a1 + 156), 0);
  v8 = CollisionMgr_process((_BYTE *)(a1 + 648), v7);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C9419C, v8);
    v10 = FIELD_F32(a1, 112);
    speed.x = FIELD_F32(a1, 108);
    speed.y = v10;
    speed.z = 4500.0;
    sub_602375C4((EffectData *)(a1 + 6456), 369, &speed, 0, 0);
    v11 = FIELD_F32(a1, 112);
    v12 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    mapPositionToScreen(&out, &position);
    return BasicSoundActor1_playSound(v12, "SE_EMY_KOTON_LAND", (int)&out, 0);
  }
  return result;
}
