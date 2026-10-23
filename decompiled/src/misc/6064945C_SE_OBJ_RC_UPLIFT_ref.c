/* SE_OBJ_RC_UPLIFT_ref
 * address: 0x6064945C   size: 968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_RC_UPLIFT_ref(int a1)
{
  _BYTE *v2; // r8
  float v3; // r1
  int v4; // r5
  int v5; // r6
  _BYTE *v6; // r0
  int *v7; // r1
  int v8; // r7
  int v9; // r2
  int v10; // r0
  float *v11; // r5
  int v12; // r0
  int v13; // r1
  float x; // r2
  int v15; // r2
  float v16; // r2
  int v17; // r10
  int v18; // r6
  int v19; // r7
  int v20; // r5
  int v21; // r0
  int v22; // r1
  int v23; // r0
  float v24; // s0
  float v25; // s0
  float v26; // s0
  float v27; // s0
  int v28; // r5
  int v29; // r6
  _BYTE *v30; // r0
  int *v31; // r1
  int v32; // r7
  int v33; // r2
  int v34; // r3
  int v35; // r2
  int v36; // r3
  int v37; // r2
  float v38; // s0
  float v39; // s2
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v2 = (_BYTE *)(a1 + 7258);
  if ( FIELD_U8(a1, 7258) == 1 )
  {
    sub_6064BC80(a1, 0);
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 8);
    v5 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v5, "SE_OBJ_RC_UPLIFT_REVERT", v4, &out, 0);
    if ( FIELD_U8(a1, 7312) )
    {
      v6 = (_BYTE *)(a1 + 7441);
      v7 = (int *)(a1 + 7416);
      v8 = FIELD_U32(a1, 7416);
      if ( FIELD_U8(a1, 7441) )
      {
        v9 = v8 - dword_60CB6058;
        *v7 = v8 - dword_60CB6058;
        if ( v9 <= 0 )
        {
          *v7 = 0;
          *v6 = 0;
        }
      }
      else
      {
        v34 = dword_60CB605C;
        v35 = v8 + dword_60CB6058;
        *v7 = v8 + dword_60CB6058;
        if ( v35 >= v34 )
        {
          *v7 = v34;
          *v6 = 1;
        }
      }
    }
    else
    {
      FIELD_U32(a1, 7416) = 0;
      FIELD_U8(a1, 7441) = 0;
    }
  }
  else
  {
    v11 = (float *)(a1 + 6552);
    v10 = FIELD_S8(a1, 6552);
    if ( v10 <= 0 )
      LOBYTE(v10) = 0;
    LOWORD(v10) = (unsigned __int8)v10;
    if ( (unsigned __int8)v10 >= 4u )
      LOWORD(v10) = 0;
    v12 = sub_604551F0(312 * (__int16)v10 + dword_60C9CF0C + 16, dword_60CB6050, 0.5);
    v13 = *(unsigned __int8 *)v11;
    x = *(v11 - 1597);
    position.x = x;
    if ( FIELD_U8(a1, 7440) <= 0x3Bu )
    {
      v15 = v12;
      if ( v12 >= 83886080 )
        v15 = 83886080;
      LODWORD(v16) = -v15;
      if ( v12 < -83886080 )
        v16 = 6.0185e-36;
      if ( v13 == 255 )
        v16 = 0.0;
      out.x = v16;
      sub_6083224C((int *)&position, (int *)&out, &dword_60CB6054);
      x = position.x;
    }
    FIELD_F32(a1, 164) = x;
    v17 = FIELD_U32(a1, 112);
    v18 = FIELD_U32(a1, 584);
    v19 = FIELD_U32(a1, 588);
    v20 = FIELD_U32(a1, 592);
    v21 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7316));
    v22 = FIELD_U32(v21, 112);
    v23 = FIELD_U32(v21, 588);
    FIELD_U32(a1, 112) = v22;
    FIELD_U32(a1, 584) = v18;
    FIELD_U32(a1, 588) = v23;
    FIELD_U32(a1, 592) = v20;
    v25 = CollisionMgr_process((_BYTE *)(a1 + 648), v24);
    FIELD_U32(a1, 112) = v17;
    FIELD_U32(a1, 584) = v18;
    FIELD_U32(a1, 588) = v19;
    FIELD_U32(a1, 592) = v20;
    v26 = (*(float (__fastcall **)(int, _DWORD, float))(*(_DWORD *)a1 + 224))(a1, 0, v25);
    FIELD_F32(a1, 124) = v26;
    v27 = v26 + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v27;
    v28 = Global_BasicSoundActor2;
    v29 = FIELD_U32(a1, 8);
    position.x = FIELD_F32(a1, 108);
    position.y = v27;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v28, "SE_OBJ_RC_UPLIFT_UP", v29, &out, 0);
    FIELD_U32(a1, 7424) -= 50331648;
    if ( FIELD_U8(a1, 7312) )
    {
      v30 = (_BYTE *)(a1 + 7441);
      v31 = (int *)(a1 + 7416);
      v32 = FIELD_U32(a1, 7416);
      if ( FIELD_U8(a1, 7441) )
      {
        v33 = v32 - dword_60CB6058;
        *v31 = v32 - dword_60CB6058;
        if ( v33 <= 0 )
        {
          *v31 = 0;
          *v30 = 0;
        }
      }
      else
      {
        v36 = dword_60CB605C;
        v37 = v32 + dword_60CB6058;
        *v31 = v32 + dword_60CB6058;
        if ( v37 >= v36 )
        {
          *v31 = v36;
          *v30 = 1;
        }
      }
    }
    else
    {
      FIELD_U32(a1, 7416) = 0;
      FIELD_U8(a1, 7441) = 0;
    }
    FIELD_U32(a1, 7428) = (int)(float)(FIELD_F32(a1, 120) * 100660000.0);
    v38 = FIELD_F32(a1, 112);
    v39 = FIELD_F32(dword_60CC6484, 124);
    if ( v39 < (float)(v38 + -18.0) || (float)(v39 - FIELD_F32(dword_60CC6484, 108)) > (float)(v38 + 18.0) )
      *v2 = 1;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1) )
    return (StateMethodExecuter *)SE_OBJ_RC_CONTROL_ON_ref(a1);
  else
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB6020);
}
