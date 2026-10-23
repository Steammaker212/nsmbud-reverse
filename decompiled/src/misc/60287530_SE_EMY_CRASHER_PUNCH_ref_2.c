/* SE_EMY_CRASHER_PUNCH_ref_2
 * address: 0x60287530   size: 1496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CRASHER_PUNCH_ref_2(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r0
  int v9; // r8
  float v10; // r1
  float v11; // r1
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  int v18; // r0
  float v19; // s2
  float v20; // s4
  int v21; // r0
  float v22; // s2
  int v23; // r1
  float v24; // s4
  signed int v25; // r0
  float32x2_t v26; // d0
  float32x2_t v27; // d2
  int v28; // r6
  _DWORD *v29; // r0
  int v30; // r1
  unsigned int v31; // r2
  unsigned int v32; // r0
  char *v33; // r7
  char v34; // r0
  __int16 v35; // r1
  int v36; // r0
  _DWORD *v37; // r0
  int v38; // r1
  unsigned int v39; // r2
  unsigned int v40; // r0
  int result; // r0
  bool v42; // zf
  float v43; // r1
  int v44; // r5
  Vec2 out; // [sp+8h] [bp-38h] BYREF
  Vec3 position; // [sp+10h] [bp-30h] BYREF

  v4 = FIELD_U32(a1, 6588);
  v2 = (_DWORD *)(a1 + 6588);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( !v5 )
    {
      FIELD_U32(a1, 3196) |= 0x20000u;
      FIELD_U32(a1, 3192) |= 0xE00u;
      v6 = FIELD_U32(a1, 3188);
      v7 = FIELD_U32(a1, 3184);
      v8 = FIELD_U32(a1, 3176) | 0xE40;
      FIELD_U32(a1, 3180) |= 0x1428000u;
      FIELD_U32(a1, 3188) = v6 | 0x1428000;
      FIELD_U32(a1, 3176) = v8;
      FIELD_U32(a1, 3184) = v7 | 0xE40;
    }
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_602890D0(a1);
  sub_602892A4(a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v9 = a1 + 648;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v10 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v10;
    position.z = 4500.0;
    sub_60237208(a1 + 6452, &position, 0, 0);
    if ( (FIELD_U8(a1, 2880) & 1) == 0 )
    {
      v11 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v11;
      position.z = 4500.0;
      EffectWrapper_update((EffectWrapper *)(a1 + 6452), 661, &position, 0, 0);
    }
  }
  v12 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v9 + 4 * ((v12 + 18) >> 5) + 2224) & (1 << ((v12 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v9 + 4 * ((v12 + 22) >> 5) + 2224) & (1 << ((v12 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v9 + 4 * ((v12 + 28) >> 5) + 2224) & (1 << ((v12 + 28) & 0x1F))) == 0
    && (FIELD_U8(a1, 2875) & 1) != 0
    || (v13 = FIELD_U32(a1, 2872), (v13 & 0x14400) == 0x4400) )
  {
    FIELD_U16(a1, 6598) = 8;
    FIELD_U32(a1, 6564) = 0;
    v14 = *(_DWORD **)(a1 + 6300);
    v15 = v14[3];
    v16 = v14[2];
    v17 = v14[17];
    if ( v16 > v17 )
      v15 += 4 * v17;
    *(_DWORD *)(*(_DWORD *)v15 + 24) = 0;
    v18 = FIELD_U32(a1, 6312);
    v19 = FIELD_F32(a1, 112);
    if ( v18 )
      v20 = (float)((float)((float)(FIELD_F32(v18, 112) + FIELD_F32(v18, 576)) - (float)(v19 + FIELD_F32(a1, 576)))
                  * 0.35)
          + 16.0;
    else
      v20 = 16.0;
    position.x = FIELD_F32(a1, 108) + (float)((float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 12.0);
    position.y = v19 + v20;
    position.z = 4500.0;
    EffectData_create(660, &position, 0, 0);
    FIELD_U32(a1, 120) = 0;
  }
  else
  {
    v21 = v12 ^ 1;
    if ( ((*(_DWORD *)(v9 + 4 * ((v21 + 18) >> 5) + 2224) & (1 << ((v21 + 18) & 0x1F))) != 0
       || (*(_DWORD *)(v9 + 4 * ((v21 + 22) >> 5) + 2224) & (1 << ((v21 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v9 + 4 * ((v21 + 28) >> 5) + 2224) & (1 << ((v21 + 28) & 0x1F))) == 0
      && (v13 & 0x1000000) != 0 )
    {
      v22 = FIELD_F32(a1, 112);
      v23 = FIELD_U32(a1, 6312);
      if ( v23 )
        v24 = (float)((float)((float)(FIELD_F32(v23, 112) + FIELD_F32(v23, 576))
                            - (float)(v22 + FIELD_F32(a1, 576)))
                    * 0.35)
            + 16.0;
      else
        v24 = 16.0;
      position.x = FIELD_F32(a1, 108) + (float)((float)byte_60AFE3F4[v21] * 12.0);
      position.y = v22 + v24;
      position.z = 4500.0;
      EffectData_create(660, &position, 0, 0);
    }
  }
  v25 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v28 = FIELD_U32(a1, 80);
  if ( v25 != v28 && !FIELD_U16(a1, 6600) )
    FIELD_U16(a1, 6600) = 32;
  if ( FIELD_U16(a1, 6598) )
  {
    --FIELD_U16(a1, 6598);
  }
  else
  {
    v27.n64_u32[0] = 1.0;
    v26.n64_f32[0] = FIELD_F32(a1, 6564) + 0.125;
    v26.n64_u32[0] = vmin_f32(v26, v27).n64_u32[0];
    FIELD_U32(a1, 6564) = v26.n64_u32[0];
    v29 = *(_DWORD **)(a1 + 6300);
    v30 = v29[3];
    v31 = v29[2];
    v32 = v29[17];
    if ( v31 > v32 )
      v30 += 4 * v32;
    *(_DWORD *)(*(_DWORD *)v30 + 24) = v26.n64_u32[0];
    StageActor__accelerateX((StageActor *)a1);
    v28 = FIELD_U32(a1, 80);
  }
  FIELD_U32(a1, 132) = dword_60AF1F00[v28];
  v33 = (char *)(a1 + 6607);
  if ( FIELD_U8(a1, 6607) )
  {
    position.x = 1.5046e-36;
    if ( !moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v28], (int *)&position) )
      goto LABEL_46;
    v34 = 0;
    goto LABEL_37;
  }
  if ( FIELD_U16(a1, 6600) )
  {
    v35 = FIELD_U16(a1, 6600) - 1;
    FIELD_U16(a1, 6600) = v35;
    if ( !v35 && v28 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) )
    {
      *v33 = 1;
      FIELD_U32(a1, 80) ^= 1u;
    }
  }
  if ( !sub_602A1F74(a1, 240.0, 80.0) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F1CC);
    FIELD_U32(a1, 6568) = FIELD_U32(a1, 108);
    v36 = FIELD_U32(a1, 80);
    if ( ((*(_DWORD *)(v9 + 4 * ((v36 + 18) >> 5) + 2224) & (1 << ((v36 + 18) & 0x1F))) != 0
       || (*(_DWORD *)(v9 + 4 * ((v36 + 22) >> 5) + 2224) & (1 << ((v36 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v9 + 4 * ((v36 + 28) >> 5) + 2224) & (1 << ((v36 + 28) & 0x1F))) == 0 )
    {
      v34 = 1;
LABEL_37:
      *v33 = v34;
    }
  }
LABEL_46:
  v37 = *(_DWORD **)(a1 + 6300);
  v38 = v37[3];
  v39 = v37[2];
  v40 = v37[17];
  if ( v39 > v40 )
    v38 += 4 * v40;
  result = (int)*(float *)(*(_DWORD *)v38 + 20);
  v42 = result == 12;
  if ( result != 12 )
    v42 = result == 0;
  if ( v42 )
  {
    v43 = FIELD_F32(a1, 112);
    v44 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v43;
    mapPositionToScreen(&out, &position);
    return BasicSoundActor1_playSound(v44, "SE_EMY_CRASHER_PUNCH", (int)&out, 0);
  }
  return result;
}
