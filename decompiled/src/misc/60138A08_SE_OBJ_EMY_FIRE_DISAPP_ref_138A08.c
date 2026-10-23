/* SE_OBJ_EMY_FIRE_DISAPP_ref_138A08
 * address: 0x60138A08   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_FIRE_DISAPP_ref_138A08(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  float *v6; // r0
  float v7; // s0
  float v8; // s0
  float v9; // s0
  _DWORD *v10; // r0
  float v11; // r1
  float v12; // r2
  int result; // r0
  int v14; // r5
  Vec3 v15; // [sp+0h] [bp-38h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  a5.n64_u32[0] = 1.0;
  v6 = (float *)(a1 + 6164);
  *(float *)&a2 = *v6 + -0.125;
  v7 = vmax_f32(*(float32x2_t *)&a2, a5).n64_f32[0];
  *v6 = v7;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(FIELD_F32(a1, 6160) * v7);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + (float)(v7 * FIELD_F32(a1, 6156));
  if ( FIELD_U8(a1, 6168) )
  {
    v8 = FIELD_F32(a1, 6152) + -0.05;
    FIELD_F32(a1, 6152) = v8;
    v9 = v8 + FIELD_F32(a1, 144);
    FIELD_F32(a1, 144) = v9;
    FIELD_F32(a1, 148) = v9;
    FIELD_F32(a1, 152) = v9;
    v10 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 228))(a1);
    if ( FIELD_F32(a1, 6152) <= 0.0 && FIELD_F32(a1, 144) <= *(float *)v10 )
    {
      FIELD_U32(a1, 144) = *v10;
      FIELD_U32(a1, 148) = v10[1];
      FIELD_U32(a1, 152) = v10[2];
      FIELD_U8(a1, 6168) = 0;
    }
  }
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_F32(a1, 116);
  v15.x = FIELD_F32(a1, 108);
  v15.y = v11;
  v15.z = v12;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    result = FIELD_U8(a1, 19);
    if ( !FIELD_U8(a1, 19) )
    {
      v14 = Global_BasicSoundActor2;
      position.x = v15.x;
      position.y = v15.y;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v14, "SE_OBJ_EMY_FIRE_DISAPP", &out.x, 0);
      EffectData_create(4, &v15, 0, 0);
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
