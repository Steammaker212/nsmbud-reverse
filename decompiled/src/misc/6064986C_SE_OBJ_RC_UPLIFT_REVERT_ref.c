/* SE_OBJ_RC_UPLIFT_REVERT_ref
 * address: 0x6064986C   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_RC_UPLIFT_REVERT_ref(int a1)
{
  char *v2; // r8
  float v3; // r1
  int v4; // r5
  int v5; // r6
  _BYTE *v6; // r0
  int *v7; // r1
  int v8; // r7
  int v9; // r2
  float v10; // s16
  float v11; // s18
  _BOOL4 v12; // r1
  float v13; // s0
  float v14; // s0
  int v15; // r1
  _BYTE *v16; // r0
  int *v17; // r1
  int v18; // r7
  int v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r2
  int v24; // r5
  int v25; // r6
  float v26; // s2
  float v27; // s0
  _BYTE *v28; // r0
  int *v29; // r1
  int v30; // r7
  int v31; // r2
  char v32; // r0
  float v33; // s2
  int v35; // r3
  int v36; // r2
  Vec2 out; // [sp+8h] [bp-40h] BYREF
  Vec3 position; // [sp+10h] [bp-38h] BYREF

  v2 = (char *)(a1 + 7258);
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
        v20 = dword_60CB605C;
        v21 = v8 + dword_60CB6058;
        *v7 = v8 + dword_60CB6058;
        if ( v21 >= v20 )
        {
          *v7 = v20;
          *v6 = 1;
        }
      }
    }
    else
    {
      FIELD_U32(a1, 7416) = 0;
      FIELD_U8(a1, 7441) = 0;
    }
    return (StateMethodExecuter *)SE_OBJ_RC_CONTROL_ON_ref(a1);
  }
  v10 = FIELD_F32(a1, 7324);
  FIELD_F32(a1, 7384) = v10;
  v11 = FIELD_F32(a1, 112);
  v12 = v11 > v10;
  v13 = flt_60AF1EA0[v12];
  FIELD_F32(a1, 124) = v13;
  v14 = v13 + v11;
  v15 = dword_60AF21E0[v12];
  FIELD_F32(a1, 112) = v14;
  FIELD_U32(a1, 7424) += v15;
  if ( FIELD_U8(a1, 7312) )
  {
    v16 = (_BYTE *)(a1 + 7441);
    v17 = (int *)(a1 + 7416);
    v18 = FIELD_U32(a1, 7416);
    if ( FIELD_U8(a1, 7441) )
    {
      v19 = v18 - dword_60CB6058;
      *v17 = v18 - dword_60CB6058;
      if ( v19 <= 0 )
      {
        *v17 = 0;
        *v16 = 0;
      }
    }
    else
    {
      v22 = dword_60CB605C;
      v23 = v18 + dword_60CB6058;
      *v17 = v18 + dword_60CB6058;
      if ( v23 >= v22 )
      {
        *v17 = v22;
        *v16 = 1;
      }
    }
  }
  else
  {
    FIELD_U32(a1, 7416) = 0;
    FIELD_U8(a1, 7441) = 0;
  }
  v24 = FIELD_U32(a1, 8);
  v25 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v14;
  mapPositionToScreen(&out, &position);
  SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v25, "SE_OBJ_RC_UPLIFT_REVERT", v24, &out, 0);
  v26 = FIELD_F32(a1, 7384);
  v27 = FIELD_F32(a1, 112);
  if ( v11 <= v10 )
  {
    if ( v27 <= v26 )
      goto LABEL_28;
  }
  else if ( v27 >= v26 )
  {
LABEL_28:
    v32 = 1;
    v33 = FIELD_F32(dword_60CC6484, 124);
    if ( v33 >= (float)(v27 + -18.0) && (float)(v33 - FIELD_F32(dword_60CC6484, 108)) <= (float)(v27 + 18.0) )
      v32 = 2;
    *v2 = v32;
    return (StateMethodExecuter *)SE_OBJ_RC_CONTROL_ON_ref(a1);
  }
  FIELD_F32(a1, 112) = v26;
  FIELD_U32(a1, 7280) = FIELD_U32(a1, 7308);
  if ( FIELD_U8(a1, 7312) )
  {
    v28 = (_BYTE *)(a1 + 7441);
    v29 = (int *)(a1 + 7416);
    v30 = FIELD_U32(a1, 7416);
    if ( FIELD_U8(a1, 7441) )
    {
      v31 = v30 - dword_60CB6060;
      *v29 = v30 - dword_60CB6060;
      if ( v31 <= 0 )
      {
        *v29 = 0;
        *v28 = 0;
      }
    }
    else
    {
      v35 = dword_60CB6064;
      v36 = v30 + dword_60CB6060;
      *v29 = v30 + dword_60CB6060;
      if ( v36 >= v35 )
      {
        *v29 = v35;
        *v28 = 1;
      }
    }
  }
  else
  {
    FIELD_U32(a1, 7416) = 0;
    FIELD_U8(a1, 7441) = 0;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB5FC0);
}
