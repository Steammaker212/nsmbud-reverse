/* SE_OBJ_CMN_SPLASH_ref_2EB670
 * address: 0x602EB670   size: 1476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_OBJ_CMN_SPLASH_ref_2EB670(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int v6; // r5
  float v7; // s0
  unsigned int result; // r0
  float v9; // r1
  float v10; // r2
  float *v11; // r5
  int v12; // r0
  int v13; // r1
  unsigned __int16 v14; // kr00_2
  unsigned __int16 v15; // kr04_2
  float v16; // s0
  float v17; // r0
  StateMgr *v18; // r0
  StateBase *v19; // r1
  float v20; // r1
  int v21; // r5
  float v22; // r0
  float v23; // s0
  int v24; // r2
  unsigned int v25; // r1
  float v26; // s0
  float v27; // r0
  int v28; // r2
  unsigned int v29; // r1
  StateMgr *v30; // r0
  StateBase *v31; // r1
  int v32; // r2
  unsigned int v33; // r1
  int v34; // [sp+8h] [bp-30h] BYREF
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
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v6 = sub_60003460(a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v7);
  if ( sub_60003460(a1) == 1 )
  {
    if ( v6 )
    {
      FIELD_U32(a1, 124) = 0;
      return 0;
    }
    return sub_602EE7D8(a1, FIELD_U32(a1, 80) ^ 1, FIELD_S8(a1, 84), 0);
  }
  if ( FIELD_U8(a1, 7528) || sub_6000346C(a1) == 1 )
    return sub_602EE7D8(a1, FIELD_U32(a1, 80) ^ 1, FIELD_S8(a1, 84), 0);
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.y = v9;
  position.z = v10;
  v11 = (float *)(a1 + 7432);
  ((void (__fastcall *)(int *, int, int, Vec3 *, _DWORD))physics_21893E8)(
    &v34,
    a1 + 7432,
    a1 + 7504,
    &position,
    FIELD_U8(a1, 86));
  v12 = v34;
  FIELD_U32(a1, 7520) = v34;
  v13 = v12 - 1;
  v14 = HIWORD(v12);
  v15 = v12;
  result = -67109377;
  switch ( v13 )
  {
    case 0:
      result = a1 + 7404;
      if ( *v11 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
        sub_602F4044(0.2);
        sub_602F4580(a1 + 7448);
        v16 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
        position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
        position.y = v16;
        sub_602F32F8(a1 + 6784, &position, 6, 0);
        v17 = *v11;
        position.x = FIELD_F32(a1, 108);
        position.y = v17;
        position.z = 6500.0;
        (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 108))(a1, &position);
        v18 = (StateMgr *)(a1 + 6084);
        v19 = (StateBase *)&dword_60C925C4;
        goto LABEL_21;
      }
      break;
    case 1:
      result = a1 + 7404;
      if ( *v11 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
        sub_602F4044(0.2);
        sub_602F4580(a1 + 7448);
        if ( FIELD_U8(a1, 7504) )
        {
          v20 = FIELD_F32(a1, 112);
          v21 = Global_BasicSoundActor2;
          position.x = FIELD_F32(a1, 108);
          position.y = v20;
          mapPositionToScreen(&out, &position);
          BasicSoundActor2_play(v21, "SE_OBJ_CMN_SPLASH", &out.x, 0);
          v22 = FIELD_F32(a1, 7516);
          position.x = 0.0;
          position.y = 0.0;
          position.z = v22;
          sub_602F32F8(a1 + 6784, a1 + 7508, 12, &position);
        }
        v18 = (StateMgr *)(a1 + 6084);
        v19 = (StateBase *)&dword_60C925C4;
        goto LABEL_21;
      }
      break;
    case 2:
      v23 = FIELD_F32(a1, 112);
      if ( *v11 >= (float)(v23 + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        FIELD_U32(a1, 3192) &= 0x3BFFFDFFu;
        FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
        FIELD_U32(a1, 3200) &= 0xFBFFFDFF;
        FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
        v24 = FIELD_U32(a1, 3184);
        FIELD_U32(a1, 3176) &= 0xFBFFFDFF;
        FIELD_U32(a1, 3184) = v24 & 0xFBFFFDFF;
        v25 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
        FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
        FIELD_U32(a1, 3188) = v25;
        if ( FIELD_U8(a1, 6780) )
          FIELD_U32(a1, 6240) &= ~0x1000u;
        v26 = v23 + FIELD_F32(a1, 576);
        position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
        position.y = v26;
        sub_602F32F8(a1 + 6784, &position, 7, 0);
        v27 = *v11;
        position.x = FIELD_F32(a1, 108);
        position.y = v27;
        position.z = 6500.0;
        (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 112))(a1, &position);
        v18 = (StateMgr *)(a1 + 6084);
        v19 = (StateBase *)&unk_60C925E4;
LABEL_21:
        result = (unsigned int)StateMgr__changeState(v18, v19);
      }
      break;
    case 3:
      if ( *v11 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        FIELD_U32(a1, 3192) &= 0x3BFFFDFFu;
        FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
        FIELD_U32(a1, 3200) &= 0xFBFFFDFF;
        FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
        v28 = FIELD_U32(a1, 3184);
        FIELD_U32(a1, 3176) &= 0xFBFFFDFF;
        FIELD_U32(a1, 3184) = v28 & 0xFBFFFDFF;
        v29 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
        FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
        FIELD_U32(a1, 3188) = v29;
        if ( FIELD_U8(a1, 6780) )
          FIELD_U32(a1, 6240) &= ~0x1000u;
        v30 = (StateMgr *)(a1 + 6084);
        v31 = (StateBase *)&unk_60C92604;
        goto LABEL_30;
      }
      break;
    case 4:
      if ( *v11 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
      {
        FIELD_U32(a1, 3192) &= 0x3BFFFDFFu;
        FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
        FIELD_U32(a1, 3200) &= 0xFBFFFDFF;
        FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
        v32 = FIELD_U32(a1, 3184);
        FIELD_U32(a1, 3176) &= 0xFBFFFDFF;
        FIELD_U32(a1, 3184) = v32 & 0xFBFFFDFF;
        v33 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
        FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
        FIELD_U32(a1, 3188) = v33;
        if ( FIELD_U8(a1, 6780) )
          FIELD_U32(a1, 6240) &= ~0x1000u;
        v30 = (StateMgr *)(a1 + 6084);
        v31 = (StateBase *)&unk_60C92624;
LABEL_30:
        StateMgr__changeState(v30, v31);
        result = 0;
        FIELD_U8(a1, 7532) = 0;
        if ( !FIELD_U8(a1, 7531) )
          FIELD_U32(a1, 328) = 0;
      }
      break;
    default:
      result = __PAIR32__(v14, v15);
      break;
  }
  return result;
}
