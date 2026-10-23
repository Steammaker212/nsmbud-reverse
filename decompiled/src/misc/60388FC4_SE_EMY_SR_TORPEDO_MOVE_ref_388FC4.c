/* SE_EMY_SR_TORPEDO_MOVE_ref_388FC4
 * address: 0x60388FC4   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SR_TORPEDO_MOVE_ref_388FC4(int a1)
{
  float32x2_t v1; // d8
  float v3; // s0
  float v4; // s2
  unsigned int v5; // r0
  int v6; // r3
  int v7; // r2
  float v8; // s2
  float v9; // s0
  float v10; // s3
  float v11; // s12
  float v12; // s4
  float v13; // s8
  float v14; // s1
  float v15; // s3
  float v16; // s10
  float v17; // s6
  float v18; // s0
  float v19; // s2
  float v20; // s6
  float v21; // s0
  float v22; // s2
  float v23; // r1
  int v24; // r5
  int v25; // r6
  float32x2_t v26; // d0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  v3 = FIELD_F32(a1, 124);
  v4 = FIELD_F32(a1, 136);
  if ( v3 >= v4 )
  {
    if ( v3 > v4 )
    {
      v3 = v3 - FIELD_F32(a1, 100);
      if ( v3 < v4 )
        v3 = FIELD_F32(a1, 136);
    }
  }
  else
  {
    v3 = v3 + FIELD_F32(a1, 100);
    if ( v3 > v4 )
      v3 = FIELD_F32(a1, 136);
  }
  FIELD_F32(a1, 124) = v3;
  if ( !FIELD_U8(a1, 6054) )
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.5;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( !FIELD_U8(a1, 6054) )
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) + FIELD_F32(a1, 120);
  v5 = FIELD_U32(a1, 156) + 0x40000000;
  FIELD_U32(a1, 80) = v5 > 0x80000000;
  v6 = FIELD_U32(a1, 6680) + 0x4000000;
  FIELD_U32(a1, 6680) = v6;
  FIELD_U32(a1, 164) -= 0x4000000;
  if ( v6 >= 0x20000000 )
    FIELD_U32(a1, 6680) = 0;
  v7 = FIELD_U32(a1, 8216);
  if ( v7 == 3 )
  {
    v18 = FIELD_F32(a1, 120);
    if ( v5 <= 0x80000000 )
    {
      if ( v18 > 0.0 )
        goto LABEL_37;
    }
    else if ( v18 < 0.0 )
    {
      goto LABEL_37;
    }
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C96D4C);
    goto LABEL_37;
  }
  if ( v7 == 2 )
  {
    v8 = FIELD_F32(a1, 108);
    v9 = FIELD_F32(a1, 120);
    v10 = FIELD_F32(a1, 8264) + (float)(FIELD_F32(a1, 124) * 15.0);
    v11 = FIELD_F32(dword_60CC6484, 124);
    v12 = FIELD_F32(dword_60CC6484, 112);
    v13 = v12 + FIELD_F32(dword_60CC6484, 104);
    v14 = (float)(v11 - FIELD_F32(dword_60CC6484, 108)) + -32.0;
    if ( v11 >= v10
      && v14 <= v10
      && (v15 = FIELD_F32(a1, 8260) + (float)((float)(v9 * 15.0) * 0.5), v12 <= v15)
      && v13 >= v15
      || (v16 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576), v11 < v16)
      || v14 > v16
      || (v17 = v8 + FIELD_F32(a1, 572), v12 > v17)
      || v13 < v17 )
    {
      if ( !FIELD_U8(a1, 8284) || fabsf(v8 - FIELD_F32(a1, 8132)) < 112.0 )
      {
        if ( sub_6038C924(a1, 100.0) != 1 )
          goto LABEL_37;
        v9 = FIELD_F32(a1, 120);
      }
    }
    FIELD_U32(a1, 132) = 0;
    FIELD_F32(a1, 8196) = fabsf(v9 / 15.0);
    FIELD_F32(a1, 8180) = fabsf(v9);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96DCC);
    goto LABEL_37;
  }
  if ( v7 == 1 && FIELD_F32(a1, 124) >= 0.0 )
  {
    FIELD_U32(a1, 116) = 1158250496;
    FIELD_U32(a1, 8216) = 2;
  }
LABEL_37:
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  v19 = FIELD_F32(a1, 112) - FIELD_F32(a1, 588);
  v20 = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  v21 = v19 * v19;
  v22 = FIELD_F32(a1, 116) - FIELD_F32(a1, 592);
  v1.n64_f32[0] = sqrtf((float)(v21 + (float)(v20 * v20)) + (float)(v22 * v22));
  v23 = FIELD_F32(a1, 112);
  v24 = FIELD_U32(a1, 8);
  v25 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v23;
  mapPositionToScreen(&out, &position);
  v26.n64_u32[0] = 1036831949;
  return SE_EMY_LIFT_LINE_MOVE_ref_2(
           v25,
           "SE_EMY_SR_TORPEDO_MOVE",
           v24,
           &out,
           (int)(float)(vmax_f32(v1, v26).n64_f32[0] * 50.0),
           0);
}
