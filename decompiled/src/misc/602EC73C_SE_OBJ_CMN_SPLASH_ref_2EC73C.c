/* SE_OBJ_CMN_SPLASH_ref_2EC73C
 * address: 0x602EC73C   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_2EC73C(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  float v6; // s0
  int result; // r0
  float v8; // r1
  float v9; // r2
  float *v10; // r5
  int v11; // r0
  int v12; // r2
  unsigned __int16 v13; // kr00_2
  unsigned __int16 v14; // kr04_2
  float v15; // s0
  float v16; // r0
  StateMgr *v17; // r0
  StateBase *v18; // r1
  float v19; // r1
  int v20; // r5
  float v21; // r0
  float v22; // s0
  int v23; // r2
  float v24; // s0
  float v25; // r0
  int v26; // r2
  StateMgr *v27; // r0
  StateBase *v28; // r1
  int v29; // r2
  int v30; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+Ch] [bp-2Ch] BYREF
  Vec3 position; // [sp+14h] [bp-24h] BYREF

  if ( FIELD_U8(a1, 7526) )
  {
    a5.n64_u32[0] = 2.0;
    *(float *)&a2 = FIELD_F32(a1, 124) + 0.3;
    FIELD_U32(a1, 124) = vmin_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
  }
  else
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
  }
  v6 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  if ( sub_60003460(a1) == 1 || FIELD_U8(a1, 7528) )
    return sub_602EE7D8(a1, FIELD_U32(a1, 80) ^ 1, FIELD_S8(a1, 84), 0);
  if ( sub_6000346C(a1) == 1 )
  {
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  v8 = FIELD_F32(a1, 112);
  v9 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.y = v8;
  position.z = v9;
  v10 = (float *)(a1 + 7432);
  ((void (__fastcall *)(int *, int, int, Vec3 *, _DWORD))physics_21893E8)(
    &v30,
    a1 + 7432,
    a1 + 7504,
    &position,
    FIELD_U8(a1, 86));
  v11 = v30;
  v12 = v30 - 1;
  FIELD_U32(a1, 7520) = v30;
  v13 = HIWORD(v11);
  v14 = v11;
  result = -67110521;
  switch ( v12 )
  {
    case 0:
      result = a1 + 7404;
      if ( *v10 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
        sub_602F4044(0.2);
        sub_602F4580(a1 + 7448);
        v15 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
        position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
        position.y = v15;
        sub_602F32F8(a1 + 6784, &position, 6, 0);
        v16 = *v10;
        position.x = FIELD_F32(a1, 108);
        position.y = v16;
        position.z = 6500.0;
        (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 108))(a1, &position);
        v17 = (StateMgr *)(a1 + 6084);
        v18 = (StateBase *)&dword_60C925C4;
        goto LABEL_20;
      }
      break;
    case 1:
      result = a1 + 7404;
      if ( *v10 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
        sub_602F4044(0.2);
        sub_602F4580(a1 + 7448);
        if ( FIELD_U8(a1, 7504) )
        {
          v19 = FIELD_F32(a1, 112);
          v20 = Global_BasicSoundActor2;
          position.x = FIELD_F32(a1, 108);
          position.y = v19;
          mapPositionToScreen(&out, &position);
          BasicSoundActor2_play(v20, "SE_OBJ_CMN_SPLASH", &out.x, 0);
          v21 = FIELD_F32(a1, 7516);
          position.x = 0.0;
          position.y = 0.0;
          position.z = v21;
          sub_602F32F8(a1 + 6784, a1 + 7508, 12, &position);
        }
        v17 = (StateMgr *)(a1 + 6084);
        v18 = (StateBase *)&dword_60C925C4;
        goto LABEL_20;
      }
      break;
    case 2:
      v22 = FIELD_F32(a1, 112);
      if ( *v10 >= (float)(v22 + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        FIELD_U32(a1, 3192) &= 0xBBFFFDFF;
        FIELD_U32(a1, 3200) &= 0xFBFFFDE7;
        v23 = FIELD_U32(a1, 3184);
        FIELD_U32(a1, 3176) &= 0xFBFFF987;
        FIELD_U32(a1, 3184) = v23 & 0xFBFFF987;
        if ( FIELD_U8(a1, 6780) )
          FIELD_U32(a1, 6240) &= ~0x1000u;
        v24 = v22 + FIELD_F32(a1, 576);
        position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
        position.y = v24;
        sub_602F32F8(a1 + 6784, &position, 7, 0);
        v25 = *v10;
        position.x = FIELD_F32(a1, 108);
        position.y = v25;
        position.z = 6500.0;
        (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 112))(a1, &position);
        v17 = (StateMgr *)(a1 + 6084);
        v18 = (StateBase *)&unk_60C925E4;
LABEL_20:
        result = (int)StateMgr__changeState(v17, v18);
      }
      break;
    case 3:
      if ( *v10 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        FIELD_U32(a1, 3192) &= 0xBBFFFDFF;
        FIELD_U32(a1, 3200) &= 0xFBFFFDE7;
        v26 = FIELD_U32(a1, 3184);
        FIELD_U32(a1, 3176) &= 0xFBFFF987;
        FIELD_U32(a1, 3184) = v26 & 0xFBFFF987;
        if ( FIELD_U8(a1, 6780) )
          FIELD_U32(a1, 6240) &= ~0x1000u;
        v27 = (StateMgr *)(a1 + 6084);
        v28 = (StateBase *)&unk_60C92604;
        goto LABEL_29;
      }
      break;
    case 4:
      if ( *v10 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        FIELD_U32(a1, 3192) &= 0xBBFFFDFF;
        FIELD_U32(a1, 3200) &= 0xFBFFFDE7;
        v29 = FIELD_U32(a1, 3184);
        FIELD_U32(a1, 3176) &= 0xFBFFF987;
        FIELD_U32(a1, 3184) = v29 & 0xFBFFF987;
        if ( FIELD_U8(a1, 6780) )
          FIELD_U32(a1, 6240) &= ~0x1000u;
        v27 = (StateMgr *)(a1 + 6084);
        v28 = (StateBase *)&unk_60C92624;
LABEL_29:
        StateMgr__changeState(v27, v28);
        result = 0;
        FIELD_U8(a1, 7532) = 0;
        if ( !FIELD_U8(a1, 7531) )
          FIELD_U32(a1, 328) = 0;
      }
      break;
    default:
      result = __PAIR32__(v13, v14);
      break;
  }
  return result;
}
