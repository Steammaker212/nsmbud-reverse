/* sub_601301C4
 * address: 0x601301C4   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_601301C4(int a1)
{
  unsigned int v2; // r0
  float *v3; // r6
  float v4; // r0
  float *v5; // r5
  float v6; // s0
  float v7; // s2
  int *v8; // r1
  float v9; // s0
  float v10; // r1
  int *v11; // r1
  float v12; // s0
  float v13; // r1
  float v14; // r1
  int v15; // r5
  int v16; // r6
  float v17; // r1
  int v18; // r5
  int v19; // r6
  float *v20; // r0
  _BYTE *result; // r0
  float v22; // s0
  Vec3i v23; // [sp+8h] [bp-48h] BYREF
  Vec3 v24; // [sp+14h] [bp-3Ch] BYREF
  Vec2 out; // [sp+20h] [bp-30h] BYREF
  Vec3 position; // [sp+28h] [bp-28h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 6236) + dword_60C87588;
  FIELD_U32(a1, 6236) = v2;
  v3 = (float *)(a1 + 6240);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6240)
                       + (float)((float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                       + (float)((float)((float)(v2 & 0xFFFFFF)
                                                       * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                               * 0.000000059605))
                               * 16.0);
  v5 = (float *)(a1 + 6224);
  v4 = FIELD_F32(a1, 6224);
  v24.x = FIELD_F32(a1, 108);
  v24.y = v4;
  v24.z = 4500.0;
  memset(&v23, 0, sizeof(v23));
  if ( !FIELD_U32(a1, 80) )
    v23.y = 0x80000000;
  EffectWrapper_update((EffectWrapper *)(a1 + 6112), 1010, &v24, &v23, 0);
  v6 = *v3;
  v7 = FIELD_F32(a1, 112);
  if ( v7 <= *v3 && FIELD_F32(a1, 588) > v6 || v7 >= v6 && FIELD_F32(a1, 588) < v6 )
  {
    v8 = dword_60130504;
    if ( FIELD_F32(a1, 120) < 0.0 )
      v8 = &dword_60130504[1];
    v9 = *(float *)v8;
    v10 = *v5;
    position.x = v9 + FIELD_F32(a1, 108);
    position.y = v10;
    TileMgr_splashRelated(TileMgr_instance, &position, 15);
  }
  if ( (FIELD_U8(dword_60C99DD4, 1052) & 0x1F) == 0 )
  {
    v11 = dword_60130504;
    if ( FIELD_F32(a1, 120) < 0.0 )
      v11 = &dword_60130504[1];
    v12 = *(float *)v11;
    v13 = *v5;
    position.x = v12 + FIELD_F32(a1, 108);
    position.y = v13;
    TileMgr_splashRelated(TileMgr_instance, &position, 15);
  }
  v14 = FIELD_F32(a1, 112);
  v15 = FIELD_U32(a1, 8);
  v16 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v14;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v16, "SE_VOC_WOG_ATTACK", v15, &out, 0);
  v17 = FIELD_F32(a1, 112);
  v18 = Global_BasicSoundActor1;
  v19 = FIELD_U32(a1, 8);
  position.x = FIELD_F32(a1, 108);
  position.y = v17;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v18, "SE_BOSS_WOOGAN_MOVE", v19, &out, 0);
  v20 = (float *)&unk_60C87570;
  if ( FIELD_U32(a1, 80) )
    v20 = (float *)&dword_60C87574;
  position.x = *v20;
  LODWORD(out.x) = dword_60C87578;
  moveValueTo((int *)(a1 + 160), (int *)&position, (int *)&out);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = (_BYTE *)(a1 + 6244);
  if ( !FIELD_U8(a1, 6244) )
  {
    if ( (v22 = FIELD_F32(a1, 108), v22 < (float)(FIELD_F32(dword_60CC6484, 112) + 96.0))
      && FIELD_F32(a1, 120) < 0.0
      || v22 > (float)(FIELD_F32(dword_60CC6484, 120) + -96.0) && FIELD_F32(a1, 120) > 0.0 )
    {
      *result = 1;
    }
  }
  return result;
}
