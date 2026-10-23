/* SE_EMY_MOUSE_WALK_ref
 * address: 0x603507A4   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MOUSE_WALK_ref(int a1)
{
  _DWORD *p_out; // r6
  float v3; // r1
  int v4; // r5
  int v5; // r7
  int v6; // r9
  bool v7; // zf
  unsigned int v8; // r7
  int v9; // r0
  int v10; // r10
  float v11; // s16
  int v12; // r5
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r6
  unsigned int v17; // r8
  int v18; // r0
  unsigned int v19; // r5
  int v20; // r7
  int v21; // r0
  _DWORD *v22; // r6
  int v23; // r0
  unsigned int v24; // r6
  int result; // r0
  int v26; // r5
  int *v27; // r1
  Vec2 out; // [sp+8h] [bp-48h] BYREF
  Vec3 position; // [sp+10h] [bp-40h] BYREF
  int target; // [sp+1Ch] [bp-34h] BYREF

  p_out = &out;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 8);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  v6 = 0;
  SE_EMY_LIFT_LINE_MOVE_ref_2(v5, "SE_EMY_MOUSE_WALK", v4, &out, 1, 0);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v7 = FIELD_U8(a1, 6416) == 0;
  if ( FIELD_U8(a1, 6416) )
    v7 = FIELD_U8(a1, 6329) == 0;
  if ( !v7 )
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6412) + 12));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v8 = FIELD_U32(a1, 80);
  v9 = 0;
  v10 = a1 + 648;
  if ( v8 < 2 )
    v9 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 160) = *(_DWORD *)(a1 + 4 * v9 + 6320);
  v11 = FIELD_F32(a1, 108);
  if ( v11 <= 264.0 )
  {
    v6 = 1;
    FIELD_U32(a1, 108) = 1132724224;
  }
  v12 = FIELD_U32(a1, 2872) & 1;
  v13 = 0;
  if ( v12 )
  {
    if ( !v8 )
      p_out = &position;
    v14 = sub_6014C4A4(a1 + 648);
    v15 = 2;
    *p_out = v14;
    if ( !v8 )
      v15 = -2;
    v13 = v14 / v15;
  }
  target = v13;
  position.z = 2.351e-38;
  moveValueTo((int *)(a1 + 156), &target, (int *)&position.z);
  if ( v12 )
    FIELD_U32(a1, 124) = 0;
  if ( v6 == 1 )
    FIELD_F32(a1, 108) = v11;
  v16 = FIELD_U32(a1, 6316);
  if ( v16 )
  {
    v17 = FIELD_U32(a1, 80);
    v18 = sub_60351954(FIELD_U32(a1, 6316));
    if ( v18 )
    {
      v19 = v17;
      if ( v17 >= 2 )
        v19 = 0;
      do
      {
        v20 = v16;
        v16 = *(_DWORD *)(v18 + 4 * v19 + 6308);
        v18 = sub_60351954(v16);
      }
      while ( v18 );
      if ( v20 )
        sub_60351A90(a1, v20, v17 ^ 1);
    }
  }
  sub_60352BD8(a1);
  v22 = (_DWORD *)(a1 + 6308);
  v21 = FIELD_U32(a1, 6308);
  if ( v21 && !sub_60351954(v21) )
  {
    v26 = 0;
LABEL_40:
    FIELD_U32(a1, 6304) = FIELD_U32(a1, 8);
    *v22 = 0;
    sub_60351A90(a1, 0, v26 ^ 1);
    if ( FIELD_U32(a1, 80) == v26 )
      v27 = &dword_60C94FBC;
    else
      v27 = &dword_60C94F9C;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v27);
  }
  v22 = (_DWORD *)(a1 + 6312);
  v23 = FIELD_U32(a1, 6312);
  if ( v23 && !sub_60351954(v23) )
  {
    v26 = 1;
    goto LABEL_40;
  }
  v24 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v10 + 4 * ((int)(v24 + 18) >> 5) + 2224) & (1 << ((v24 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v10 + 4 * ((int)(v24 + 22) >> 5) + 2224) & (1 << ((v24 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v10 + 4 * ((int)(v24 + 28) >> 5) + 2224) & (1 << ((v24 + 28) & 0x1F))) == 0 )
  {
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F5C);
  }
  result = a1;
  if ( v24 >= 2 )
    v24 = 0;
  while ( 1 )
  {
    result = sub_60351954(*(_DWORD *)(result + 4 * v24 + 6308));
    if ( !result )
      break;
    if ( FIELD_U8(result, 6328) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F5C);
  }
  return result;
}
