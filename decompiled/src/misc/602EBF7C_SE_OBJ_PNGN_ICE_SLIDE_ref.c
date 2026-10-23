/* SE_OBJ_PNGN_ICE_SLIDE_ref
 * address: 0x602EBF7C   size: 1644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_PNGN_ICE_SLIDE_ref(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  float32x2_t v6; // d0
  float32x2_t v7; // d2
  int v8; // r5
  float v9; // s0
  float v10; // r1
  int v11; // r5
  float v12; // r1
  int v13; // r5
  int v14; // r6
  StateMethodExecuter *result; // r0
  float v16; // r1
  float v17; // r2
  float *v18; // r5
  int v19; // r2
  float v20; // s0
  float v21; // r0
  StateMgr *v22; // r0
  StateBase *v23; // r1
  float v24; // r1
  int v25; // r5
  float v26; // r0
  float v27; // s0
  int v28; // r2
  float v29; // s0
  float v30; // r0
  int v31; // r2
  float v32; // s0
  int v33; // r3
  int v34; // r2
  int v35; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+Ch] [bp-2Ch] BYREF
  Vec3 position; // [sp+14h] [bp-24h] BYREF

  v4 = FIELD_U8(a1, 7538);
  v2 = (_BYTE *)(a1 + 7538);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    if ( !v5 && FIELD_U8(a1, 6780) )
      FIELD_U32(a1, 6252) = 0;
    *v2 = v5;
  }
  StageActor__accelerateX((StageActor *)a1);
  if ( FIELD_U8(a1, 7526) )
  {
    v7.n64_u32[0] = 2.0;
    v6.n64_f32[0] = FIELD_F32(a1, 124) + 0.3;
    FIELD_U32(a1, 124) = vmin_f32(v6, v7).n64_u32[0];
  }
  else
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
  }
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v8 = sub_60003460(a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v9);
  if ( sub_60003460(a1) == 1 )
  {
    if ( v8 != 1 )
    {
      v10 = FIELD_F32(a1, 112);
      v11 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v10;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v11, "SE_OBJ_PNGN_ICE_LAND", &out.x, 0);
    }
    FIELD_U32(a1, 124) = 0;
    v12 = FIELD_F32(a1, 112);
    v13 = FIELD_U32(a1, 8);
    v14 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v12;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v14, "SE_OBJ_PNGN_ICE_SLIDE", v13, &out, 0);
  }
  if ( sub_6000346C(a1) == 1 || (FIELD_U8(a1, 2873) & 0xC0) != 0 )
    return (StateMethodExecuter *)sub_602EE7D8(a1, FIELD_U32(a1, 80) ^ 1, FIELD_S8(a1, 84), 0);
  v16 = FIELD_F32(a1, 112);
  v17 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.y = v16;
  position.z = v17;
  v18 = (float *)(a1 + 7432);
  ((void (__fastcall *)(int *, int, int, Vec3 *, _DWORD))physics_21893E8)(
    &v35,
    a1 + 7432,
    a1 + 7504,
    &position,
    FIELD_U8(a1, 86));
  v19 = v35 - 1;
  FIELD_U32(a1, 7520) = v35;
  switch ( v19 )
  {
    case 0:
      if ( *v18 < (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        goto LABEL_32;
      *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
      sub_602F4044(0.2);
      sub_602F4580(a1 + 7448);
      v20 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      position.y = v20;
      sub_602F32F8(a1 + 6784, &position, 6, 0);
      v21 = *v18;
      position.x = FIELD_F32(a1, 108);
      position.y = v21;
      position.z = 6500.0;
      (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 108))(a1, &position);
      v22 = (StateMgr *)(a1 + 6084);
      v23 = (StateBase *)&dword_60C925C4;
      goto LABEL_42;
    case 1:
      if ( *v18 < (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        goto LABEL_32;
      *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
      sub_602F4044(0.2);
      sub_602F4580(a1 + 7448);
      if ( FIELD_U8(a1, 7504) )
      {
        v24 = FIELD_F32(a1, 112);
        v25 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v24;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v25, "SE_OBJ_CMN_SPLASH", &out.x, 0);
        v26 = FIELD_F32(a1, 7516);
        position.x = 0.0;
        position.y = 0.0;
        position.z = v26;
        sub_602F32F8(a1 + 6784, a1 + 7508, 12, &position);
      }
      v22 = (StateMgr *)(a1 + 6084);
      v23 = (StateBase *)&dword_60C925C4;
      goto LABEL_42;
    case 2:
      v27 = FIELD_F32(a1, 112);
      if ( *v18 < (float)(v27 + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        goto LABEL_32;
      FIELD_U32(a1, 3192) &= 0xBBFFFDFF;
      FIELD_U32(a1, 3200) &= 0xFBFFFDE7;
      v28 = FIELD_U32(a1, 3184);
      FIELD_U32(a1, 3176) &= 0xFBFFF987;
      FIELD_U32(a1, 3184) = v28 & 0xFBFFF987;
      if ( FIELD_U8(a1, 6780) )
        FIELD_U32(a1, 6240) &= ~0x1000u;
      v29 = v27 + FIELD_F32(a1, 576);
      position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      position.y = v29;
      sub_602F32F8(a1 + 6784, &position, 7, 0);
      v30 = *v18;
      position.x = FIELD_F32(a1, 108);
      position.y = v30;
      position.z = 6500.0;
      (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 112))(a1, &position);
      v22 = (StateMgr *)(a1 + 6084);
      v23 = (StateBase *)&unk_60C925E4;
      goto LABEL_42;
    case 3:
      if ( *v18 < (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        goto LABEL_32;
      FIELD_U32(a1, 3192) &= 0xBBFFFDFF;
      FIELD_U32(a1, 3200) &= 0xFBFFFDE7;
      v31 = FIELD_U32(a1, 3184);
      FIELD_U32(a1, 3176) &= 0xFBFFF987;
      FIELD_U32(a1, 3184) = v31 & 0xFBFFF987;
      if ( FIELD_U8(a1, 6780) )
        FIELD_U32(a1, 6240) &= ~0x1000u;
      v22 = (StateMgr *)(a1 + 6084);
      v23 = (StateBase *)&unk_60C92604;
      goto LABEL_42;
    case 4:
      if ( *v18 < (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        goto LABEL_32;
      FIELD_U32(a1, 3192) &= 0xBBFFFDFF;
      FIELD_U32(a1, 3200) &= 0xFBFFFDE7;
      v34 = FIELD_U32(a1, 3184);
      FIELD_U32(a1, 3176) &= 0xFBFFF987;
      FIELD_U32(a1, 3184) = v34 & 0xFBFFF987;
      if ( FIELD_U8(a1, 6780) )
        FIELD_U32(a1, 6240) &= ~0x1000u;
      v22 = (StateMgr *)(a1 + 6084);
      v23 = (StateBase *)&unk_60C92624;
LABEL_42:
      result = StateMgr__changeState(v22, v23);
      break;
    default:
LABEL_32:
      v32 = FIELD_F32(a1, 108);
      if ( (v32 < (float)(FIELD_F32(dword_60CC6484, 112) + -64.0)
         || v32 > (float)(FIELD_F32(dword_60CC6484, 120) + 64.0))
        && (result = *(StateMethodExecuter **)(a1 + 56)) != 0 )
      {
        HIBYTE(result[1].owner) = 1;
      }
      else
      {
        v33 = 1;
        if ( !FIELD_U32(a1, 80) )
          v33 = -1;
        result = (StateMethodExecuter *)sub_60718220(TileMgr_instance, 4, 15, v33);
      }
      break;
  }
  return result;
}
