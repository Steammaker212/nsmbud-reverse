/* sub_6012DCB0
 * address: 0x6012DCB0   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012DCB0(int a1)
{
  float v2; // s2
  float v3; // s4
  float v4; // s6
  unsigned int v5; // r1
  float v6; // r1
  Actor *v7; // r5
  float v8; // s18
  float v9; // s16
  int result; // r0
  Actor *v11; // r6
  int v12; // r2
  float v13; // s20
  float v14; // s22
  float v15; // s0
  float v16; // s2
  float v17; // s16
  float v18; // s18
  int v19; // r0
  bool v20; // zf
  float v21; // r1
  float v22; // s0
  int v23; // r5
  int v24; // r0
  bool v25; // zf
  int v26; // r0
  bool v27; // zf
  float v28; // r1
  float v29; // s0
  int v30; // r4
  Vec3 v31; // [sp+8h] [bp-60h] BYREF
  Vec3 v32; // [sp+14h] [bp-54h] BYREF
  Vec2 out; // [sp+20h] [bp-48h] BYREF
  Vec3 position; // [sp+28h] [bp-40h] BYREF

  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 144) + (float)((float)(0.7 - FIELD_F32(a1, 144)) * 0.2);
  v3 = FIELD_F32(a1, 148) + (float)((float)(0.7 - FIELD_F32(a1, 148)) * 0.2);
  v4 = FIELD_F32(a1, 152) + (float)((float)(0.7 - FIELD_F32(a1, 152)) * 0.2);
  FIELD_F32(a1, 144) = v2;
  FIELD_F32(a1, 148) = v3;
  FIELD_F32(a1, 152) = v4;
  FIELD_F32(a1, 312) = v2 * 12.0;
  FIELD_F32(a1, 316) = v3 * 12.0;
  v5 = FIELD_U32(a1, 11464);
  if ( v5 <= 0x20 )
    FIELD_U32(a1, 11464) = v5 + 1;
  v6 = FIELD_F32(a1, 112);
  v31.x = FIELD_F32(a1, 108);
  v31.y = v6;
  v31.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 11784), 793, &v31, 0, 0);
  v7 = (Actor *)(a1 + 6112);
  CollisionMgr_process((_BYTE *)(a1 + 6112));
  v8 = FIELD_F32(a1, 108);
  v9 = FIELD_F32(a1, 112);
  v11 = (Actor *)(a1 + 8336);
  result = FIELD_U32(a1, 8336);
  v12 = a1 + 576;
  v13 = FIELD_F32(a1, 576);
  v14 = FIELD_F32(a1, 572);
  if ( (result & 1) != 0 )
  {
    if ( sub_6014C4A4(a1 + 6112) == 0x20000000 )
    {
LABEL_11:
      v15 = (float)((float)((float)(-0.01714 * 0.0) * 0.000000059605) + -0.70711) * 1.5;
      v16 = (float)((float)((float)(-0.017566 * 0.0) * 0.000000059605) + 0.70711) * 1.5;
LABEL_22:
      result = 0;
      FIELD_U32(a1, 128) = 0;
      FIELD_F32(a1, 120) = v15;
      FIELD_F32(a1, 124) = v16;
      return result;
    }
    result = FIELD_U32(v11, 0x0);
  }
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 || (result & 0x880000) != 0 && (result & 0x20000000) == 0 )
  {
    if ( sub_6014C658(a1 + 6112, FIELD_U32(a1, 80)) == 0x20000000 )
      goto LABEL_11;
    result = FIELD_U32(v11, 0x0);
  }
  if ( (result & 1) != 0 )
  {
    if ( sub_6014C4A4(a1 + 6112) == -536870912 )
    {
LABEL_21:
      v15 = (float)((float)((float)(-0.017566 * 0.0) * 0.000000059605) + 0.70711) * 1.5;
      v16 = (float)((float)((float)(0.01714 * 0.0) * 0.000000059605) + 0.70711) * 1.5;
      goto LABEL_22;
    }
    result = FIELD_U32(v11, 0x0);
  }
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 || (result & 0x880000) != 0 && (result & 0x20000000) == 0 )
  {
    if ( sub_6014C658(a1 + 6112, FIELD_U32(a1, 80)) == -536870912 )
      goto LABEL_21;
    result = FIELD_U32(v11, 0x0);
  }
  v17 = v9 + v13;
  v18 = v8 + v14;
  if ( (result & 1) != 0 && FIELD_F32(a1, 124) < 0.0 || (result & 0x10400) == 0x400 && FIELD_F32(a1, 124) > 0.0 )
  {
    v19 = sub_6014B69C(a1 + 6112);
    v20 = v19 == 0;
    if ( v19 )
    {
      v11 = *(Actor **)(v19 + 144);
      v20 = v11 == 0;
    }
    if ( !v20 && Actor__getProfileId(v11) == 369 )
    {
      sub_6012CE5C((int)v11);
      v21 = FIELD_F32(a1, 112);
      v32.x = FIELD_F32(a1, 108);
      v32.y = v21;
      v32.z = 4500.0;
      EffectData_create(794, &v32, 0, 0);
      v22 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      v23 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      position.y = v22;
      mapPositionToScreen(&out, &position);
LABEL_48:
      BasicSoundActor2_play(v23, "SE_BOSS_WENDY_RING_DISAPP", &out.x, 0);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
    v26 = sub_6014B6F8(a1 + 6112);
    v27 = v26 == 0;
    if ( v26 )
    {
      v7 = *(Actor **)(v26 + 144);
      v27 = v7 == 0;
    }
    if ( !v27 && Actor__getProfileId(v7) == 369 )
    {
LABEL_47:
      sub_6012CE5C((int)v7);
      v28 = FIELD_F32(a1, 112);
      v32.x = FIELD_F32(a1, 108);
      v32.y = v28;
      v32.z = 4500.0;
      EffectData_create(794, &v32, 0, 0);
      v29 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      v23 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      position.y = v29;
      mapPositionToScreen(&out, &position);
      goto LABEL_48;
    }
    FIELD_F32(a1, 124) = -FIELD_F32(a1, 124);
    v32.x = v18;
    v32.y = v17;
    v30 = Global_BasicSoundActor2;
    mapPositionToScreen((Vec2 *)&position, &v32);
    return BasicSoundActor2_play(v30, "SE_BOSS_WENDY_RING_BOUND", &position.x, 0);
  }
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0
    || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
  {
    v24 = sub_6014B758(a1 + 6112, FIELD_U32(a1, 80), v12);
    v25 = v24 == 0;
    if ( v24 )
    {
      v7 = *(Actor **)(v24 + 144);
      v25 = v7 == 0;
    }
    if ( !v25 && Actor__getProfileId(v7) == 369 )
      goto LABEL_47;
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    v32.x = v18;
    v32.y = v17;
    v30 = Global_BasicSoundActor2;
    mapPositionToScreen((Vec2 *)&position, &v32);
    return BasicSoundActor2_play(v30, "SE_BOSS_WENDY_RING_BOUND", &position.x, 0);
  }
  return result;
}
