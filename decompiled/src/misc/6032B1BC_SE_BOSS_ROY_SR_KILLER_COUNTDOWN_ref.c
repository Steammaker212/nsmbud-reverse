/* SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref
 * address: 0x6032B1BC   size: 1176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  int v5; // r0
  __int16 v6; // r1
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r3
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  float *v13; // r0
  float v14; // s18
  float v15; // s16
  unsigned int v16; // r0
  float *v17; // r1
  float v18; // s8
  float v19; // r1
  float v20; // r1
  float v21; // r1
  int v22; // r5
  unsigned int v23; // r0
  float v24; // r1
  int v25; // r5
  __int16 v26; // r1
  int *v27; // r1
  int v29; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+8h] [bp-38h] BYREF
  Vec3 position; // [sp+10h] [bp-30h] BYREF

  v4 = FIELD_U16(a1, 13056);
  v2 = (_WORD *)(a1 + 13056);
  v3 = v4;
  if ( v4 )
  {
    *v2 = v3 - 1;
    v5 = dword_60AFF678[FIELD_U32(a1, 80)];
    FIELD_U32(a1, 120) = v5;
    FIELD_U32(a1, 132) = v5;
  }
  else
  {
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 13064) + 12));
    v12 = StageActor__distanceToPlayer((StateActor *)a1, (Vec2 *)&position);
    if ( v12 != -1 )
    {
      if ( v12 >= 4 )
        v12 = 0;
      v13 = *(float **)(PlayerMgr_instance + 4 * v12 + 32);
      v14 = (float)(v13[28] + v13[144]) - FIELD_F32(a1, 112);
      v15 = (float)(v13[27] + v13[143]) - FIELD_F32(a1, 108);
      LODWORD(position.x) = sub_6000F7B8(v14, v15);
      out.x = 4.3363e-38;
      moveValueTo((int *)(a1 + 13152), (int *)&position, (int *)&out);
      v16 = FIELD_U32(a1, 13152);
      v17 = (float *)((char *)sinLutTable + ((v16 >> 20) & 0xFF0));
      v18 = (float)(v16 & 0xFFFFFF);
      FIELD_F32(a1, 120) = 1.0 * (float)(v17[2] + (float)((float)(v18 * v17[3]) * 0.000000059605));
      FIELD_F32(a1, 124) = 1.0 * (float)(*v17 + (float)((float)(v18 * v17[1]) * 0.000000059605));
      ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
        &v29,
        0,
        a1 + 108,
        FIELD_U8(a1, 86));
      if ( v29 )
      {
        FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.4;
        FIELD_F32(a1, 124) = 0.4 * FIELD_F32(a1, 124);
      }
      LODWORD(position.x) = sub_6000F7B8(-v14, v15 * (float)byte_60AFE3F4[FIELD_U32(a1, 80)]);
      out.x = 4.3363e-38;
      moveValueTo((int *)(a1 + 156), (int *)&position, (int *)&out);
      if ( !FIELD_U32(a1, 6328) )
      {
        if ( (int)abs32(FIELD_U32(a1, 156)) >= 1090519040 )
          v19 = -0.0;
        else
          v19 = 0.0;
        position.x = v19;
        out.x = 3.8519e-34;
        moveValueTo((int *)(a1 + 164), (int *)&position, (int *)&out);
        v20 = FIELD_F32(a1, 13156);
        if ( (float)(FIELD_F32(a1, 120) * (float)byte_60AFE3F4[FIELD_U32(a1, 80)]) <= 0.0 )
          LODWORD(v20) = 0x80000000 - LODWORD(v20);
        position.x = v20;
        out.x = 3.8519e-34;
        moveValueTo((int *)(a1 + 160), (int *)&position, (int *)&out);
      }
    }
  }
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  sub_60322150(a1);
  if ( FIELD_U32(a1, 6348) && !FIELD_U32(a1, 6352) )
    sub_60321D0C(a1, 1);
  sub_60321B48(a1);
  if ( FIELD_U32(a1, 7332) )
  {
    if ( FIELD_U16(a1, 13076) )
    {
      v6 = FIELD_U16(a1, 13076) - 1;
      FIELD_U16(a1, 13076) = v6;
      if ( !v6 )
      {
        v7 = a1 + 13064;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 13064) + 28) + 24) = 1065353216;
        v8 = FIELD_U32(a1, 13064);
        v9 = FIELD_U32(v8, 16);
        v10 = FIELD_U32(v8, 20);
        if ( v9 > 1 )
          v10 += 4;
        *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
        v11 = *(_DWORD *)(*(_DWORD *)v7 + 28);
        if ( *(_DWORD *)(*(_DWORD *)v7 + 24) > 1u )
          v11 += 4;
        *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
      }
    }
    else
    {
      v21 = FIELD_F32(a1, 112);
      v22 = FIELD_U32(a1, 8);
      position.x = FIELD_F32(a1, 108);
      position.y = v21;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(a1 + 13560, "SE_BOSS_ROY_SR_KILLER_COUNTDOWN", v22, &out, 0);
    }
    v23 = FIELD_U32(a1, 13068) - 1;
    FIELD_U32(a1, 13068) = v23;
    if ( v23 <= 0x12C )
    {
      v24 = FIELD_F32(a1, 112);
      v25 = FIELD_U32(a1, 8);
      position.x = FIELD_F32(a1, 108);
      position.y = v24;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(a1 + 13560, "SE_BOSS_ROY_SR_KILLER_COUNTDOWN", v25, &out, 0);
      if ( !FIELD_U32(a1, 13068) )
      {
        FIELD_U32(a1, 13072) = 16;
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C93CF0);
      }
    }
  }
  if ( FIELD_U16(a1, 6324) )
  {
    v26 = FIELD_U16(a1, 6324) - 1;
    FIELD_U16(a1, 6324) = v26;
    if ( !v26 )
    {
      v27 = dword_6032B680;
      if ( (FIELD_U32(a1, 24) & 0xF0) != 0 )
        v27 = &dword_6032B680[1];
      FIELD_U32(a1, 116) = *v27;
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
}
