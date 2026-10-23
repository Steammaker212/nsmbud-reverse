/* sub_602EA338
 * address: 0x602EA338   size: 1504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602EA338(int a1)
{
  float v2; // s0
  float v3; // s0
  float v4; // s2
  unsigned int v5; // r1
  int v6; // r5
  StateMgr *v7; // r0
  StateBase *v8; // r1
  StateMethodExecuter *result; // r0
  unsigned int U32; // r5
  float v11; // s0
  float v12; // s2
  float v13; // r1
  float v14; // r2
  float *v15; // r5
  int v16; // r0
  float v17; // s0
  float v18; // s0
  float v19; // r0
  float v20; // r1
  int v21; // r5
  float v22; // r0
  float v23; // s0
  unsigned int v24; // r1
  float v25; // s0
  float v26; // r0
  unsigned int v27; // r1
  int v28; // r0
  unsigned int v29; // r1
  int v30; // [sp+4h] [bp-3Ch] BYREF
  Vec3 position; // [sp+8h] [bp-38h] BYREF
  unsigned int v32; // [sp+14h] [bp-2Ch]
  char v33; // [sp+18h] [bp-28h]
  char v34; // [sp+19h] [bp-27h]
  char v35; // [sp+1Ah] [bp-26h]
  char v36; // [sp+1Bh] [bp-25h]
  char v37; // [sp+1Ch] [bp-24h]
  char v38; // [sp+1Dh] [bp-23h]
  char v39; // [sp+1Eh] [bp-22h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( FIELD_U8(a1, 7528) || sub_60003460(a1) == 1 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = fabsf(v3 - FIELD_F32(a1, 7436));
    if ( v4 >= 24.0 || (*(_DWORD *)(FIELD_U32(a1, 56) + 6148) & 0x20000) != 0 )
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v11 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      v12 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
      position.x = v11;
      position.y = v12;
      v32 = U32 >> 31;
      v33 = 1;
      v34 = 0;
      v37 = 0;
      v36 = 0;
      v39 = 0;
      v38 = 0;
      v35 = 0;
      sub_60583000(dword_60CAF15C, &position, 3);
      return (StateMethodExecuter *)sub_602EE7D8(a1, (U32 & 0x80000000) == 0, *(char *)(FIELD_U32(a1, 7368) + 75), 0);
    }
    else
    {
      FIELD_U32(a1, 3192) &= ~0x80000000;
      FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
      v5 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
      FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
      FIELD_U32(a1, 3188) = v5;
      FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
      if ( v4 >= 12.0 )
      {
        v6 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v3;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICE_LAND", &out.x, 0);
      }
      FIELD_U32(a1, 124) = 0;
      v7 = (StateMgr *)(a1 + 6084);
      v8 = &stru_60C925A4;
      return StateMgr__changeState(v7, v8);
    }
  }
  else
  {
    v13 = FIELD_F32(a1, 112);
    v14 = FIELD_F32(a1, 116);
    position.x = FIELD_F32(a1, 108);
    position.y = v13;
    position.z = v14;
    v15 = (float *)(a1 + 7432);
    ((void (__fastcall *)(int *, int, int, Vec3 *, _DWORD))physics_21893E8)(
      &v30,
      a1 + 7432,
      a1 + 7504,
      &position,
      FIELD_U8(a1, 86));
    v16 = v30;
    FIELD_U32(a1, 7520) = v30;
    result = (StateMethodExecuter *)(v16 - 1);
    switch ( (unsigned int)result )
    {
      case 0u:
        v17 = FIELD_F32(a1, 112);
        result = (StateMethodExecuter *)(a1 + 7404);
        if ( *v15 >= (float)(v17 + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        {
          FIELD_U32(a1, 120) = 0;
          if ( !FIELD_U8(a1, 7535) )
          {
            *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
            sub_602F4044(v17);
            v17 = FIELD_F32(a1, 112);
          }
          v18 = v17 + FIELD_F32(a1, 576);
          position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
          position.y = v18;
          sub_602F32F8(a1 + 6784, &position, 6, 0);
          v19 = *v15;
          position.x = FIELD_F32(a1, 108);
          position.y = v19;
          position.z = 6500.0;
          (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 108))(a1, &position);
          v7 = (StateMgr *)(a1 + 6084);
          v8 = (StateBase *)&dword_60C925C4;
          return StateMgr__changeState(v7, v8);
        }
        break;
      case 1u:
        result = (StateMethodExecuter *)(a1 + 7404);
        if ( *v15 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        {
          FIELD_U32(a1, 120) = 0;
          if ( !FIELD_U8(a1, 7535) )
          {
            *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
            ((void (*)(void))sub_602F4044)();
          }
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
          v7 = (StateMgr *)(a1 + 6084);
          v8 = (StateBase *)&dword_60C925C4;
          return StateMgr__changeState(v7, v8);
        }
        break;
      case 2u:
        v23 = FIELD_F32(a1, 112);
        result = (StateMethodExecuter *)(a1 + 7404);
        if ( *v15 >= (float)(v23 + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        {
          FIELD_U32(a1, 3192) &= ~0x80000000;
          FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
          v24 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
          FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
          FIELD_U32(a1, 3188) = v24;
          FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
          FIELD_U32(a1, 120) = 0;
          v25 = v23 + FIELD_F32(a1, 576);
          position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
          position.y = v25;
          sub_602F32F8(a1 + 6784, &position, 7, 0);
          v26 = *v15;
          position.x = FIELD_F32(a1, 108);
          position.y = v26;
          position.z = 6500.0;
          (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 112))(a1, &position);
          v7 = (StateMgr *)(a1 + 6084);
          v8 = (StateBase *)&unk_60C925E4;
          return StateMgr__changeState(v7, v8);
        }
        break;
      case 3u:
        result = (StateMethodExecuter *)(a1 + 7404);
        if ( *v15 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        {
          FIELD_U32(a1, 3192) &= ~0x80000000;
          FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
          v27 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
          FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
          FIELD_U32(a1, 3188) = v27;
          v28 = FIELD_U32(a1, 3204);
          v8 = (StateBase *)&unk_60C92604;
          goto LABEL_28;
        }
        break;
      case 4u:
        result = (StateMethodExecuter *)(a1 + 7404);
        if ( *v15 >= (float)(FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 7404) * 0.2)) )
        {
          FIELD_U32(a1, 3192) &= ~0x80000000;
          FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
          v29 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
          FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
          FIELD_U32(a1, 3188) = v29;
          v28 = FIELD_U32(a1, 3204);
          v8 = (StateBase *)&unk_60C92624;
LABEL_28:
          FIELD_U32(a1, 3204) = v28 & 0xFFFFFFFC;
          FIELD_U32(a1, 120) = 0;
          v7 = (StateMgr *)(a1 + 6084);
          return StateMgr__changeState(v7, v8);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
