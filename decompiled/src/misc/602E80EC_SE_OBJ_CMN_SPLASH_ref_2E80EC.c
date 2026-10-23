/* SE_OBJ_CMN_SPLASH_ref_2E80EC
 * address: 0x602E80EC   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_CMN_SPLASH_ref_2E80EC(int a1)
{
  float *v2; // r8
  float v3; // s1
  float v4; // s2
  float v5; // s0
  int *v6; // r0
  int v7; // r1
  char v8; // r3
  int v9; // r7
  bool v10; // zf
  unsigned int v11; // r2
  StateMethodExecuter *result; // r0
  int v13; // r1
  int v14; // r6
  int v15; // r7
  float v16; // s16
  float *v17; // r6
  StateMgr *v18; // r0
  int *v19; // r1
  float v20; // r1
  int v21; // r4
  StateMethodExecuter *v22; // [sp+4h] [bp-4Ch] BYREF
  int v23; // [sp+8h] [bp-48h]
  _DWORD v24[2]; // [sp+Ch] [bp-44h] BYREF
  float v25; // [sp+14h] [bp-3Ch]
  Vec2 out; // [sp+1Ch] [bp-34h] BYREF
  Vec3 position; // [sp+24h] [bp-2Ch] BYREF

  v2 = (float *)(a1 + 124);
  if ( FIELD_F32(a1, 124) < 0.0 )
  {
    if ( FIELD_U8(a1, 7537) == 2 )
    {
      v3 = 0.04;
      v4 = 0.3;
    }
    else
    {
      v3 = 0.07;
      v4 = 0.5;
    }
    if ( ((float (__fastcall *)(float *, float, float, float, float))loc_60832560)(v2, 0.0, v3, v4, 0.0) < 0.125 )
      *v2 = 0.0;
  }
  v5 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U32(a1, 20) & 0x30000) == 0x20000 )
    goto LABEL_24;
  CollisionMgr_process((_BYTE *)(a1 + 648), v5);
  if ( sub_60003460(a1) != 1 )
    goto LABEL_24;
  v6 = *(int **)(a1 + 6360);
  if ( !v6 )
    goto LABEL_24;
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = *v6;
    v10 = *v6 == 0;
    if ( *v6 )
    {
      v9 = FIELD_U32(v9, 2196);
      v10 = v9 == 0;
    }
    if ( !v10 )
    {
      v11 = FIELD_U8(v9, 533) - 1;
      if ( v11 <= 1 )
      {
        v8 = 1;
        if ( (FIELD_U8(v9, 6900) & 2) != 0 )
          v7 = 1;
      }
      else
      {
        v8 |= v11 < 2;
      }
    }
    v6 = (int *)v6[1];
  }
  while ( v6 );
  if ( ((unsigned __int8)v8 & (v7 != 0)) != 0 )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 7525);
    if ( !FIELD_U8(a1, 7525) )
    {
      v13 = -1;
      v14 = FIELD_U32(a1, 7368);
      if ( !FIELD_U8(a1, 7529) )
        v13 = FIELD_S8(v14, 75);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 56) + 68))(FIELD_U32(a1, 56), v13);
      FIELD_U8(v14, 74) = 3;
      FIELD_U8(a1, 7525) = 1;
      return (StateMethodExecuter *)1;
    }
  }
  else
  {
LABEL_24:
    v25 = FIELD_F32(a1, 7516);
    v24[1] = FIELD_U32(a1, 7512);
    v24[0] = FIELD_U32(a1, 7508);
    v23 = FIELD_U32(a1, 7504);
    v15 = FIELD_U32(a1, 7520);
    v16 = FIELD_F32(a1, 7432);
    v17 = (float *)(a1 + 7432);
    ((void (__fastcall *)(StateMethodExecuter **, int, int, int, float, _DWORD))physics_21893E8)(
      &v22,
      a1 + 7432,
      a1 + 7504,
      a1 + 108,
      v5,
      FIELD_U8(a1, 86));
    result = v22;
    v10 = v22 == 0;
    FIELD_U32(a1, 7520) = v22;
    if ( v10 )
    {
      if ( (_BYTE)v23 )
      {
        v20 = FIELD_F32(a1, 112);
        v21 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v20;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v21, "SE_OBJ_CMN_SPLASH", &out.x, 0);
        position.x = 0.0;
        position.y = 0.0;
        position.z = v25;
        sub_602F32F8(a1 + 6784, v24, 12, &position);
      }
      v18 = (StateMgr *)(a1 + 6084);
      v19 = &dword_60C924E4;
    }
    else if ( v15
           && (float)(*v17 - v16) < 0.0
           && (result = (StateMethodExecuter *)(a1 + 7404),
               FIELD_F32(a1, 112) >= (float)(*v17 + (float)(FIELD_F32(a1, 7404) * -0.5))) )
    {
      v18 = (StateMgr *)(a1 + 6084);
      v19 = &dword_60C924E4;
    }
    else
    {
      if ( *v2 < 0.0 )
        return result;
      if ( (FIELD_U8(a1, 7537) | 2) == 2 )
      {
        v18 = (StateMgr *)(a1 + 6084);
        v19 = &dword_60C924C4;
      }
      else
      {
        v19 = *(int **)(a1 + 7500);
        v18 = (StateMgr *)(a1 + 6084);
      }
    }
    return StateMgr__changeState(v18, (StateBase *)v19);
  }
  return result;
}
