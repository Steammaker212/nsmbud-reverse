/* SE_EMY_MOUSE_RUN_ref
 * address: 0x603512CC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_EMY_MOUSE_RUN_ref(int a1)
{
  _DWORD *p_out; // r5
  float v3; // r1
  int v4; // r7
  int v5; // r6
  int v6; // r9
  bool v7; // zf
  unsigned int v8; // r6
  int v9; // r0
  int v10; // r7
  float v11; // s16
  int v12; // r10
  int v13; // r0
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r5
  int v17; // r0
  _DWORD *result; // r0
  int v19; // r1
  int v20; // r1
  Vec2 out; // [sp+8h] [bp-40h] BYREF
  Vec3 position; // [sp+10h] [bp-38h] BYREF
  int target; // [sp+1Ch] [bp-2Ch] BYREF

  p_out = &out;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 8);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  v6 = 0;
  SE_EMY_LIFT_LINE_MOVE_ref_2(v5, "SE_EMY_MOUSE_RUN", v4, &out, 1, 0);
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
  sub_60352BD8(a1);
  v16 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v10 + 4 * ((int)(v16 + 18) >> 5) + 2224) & (1 << ((v16 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v10 + 4 * ((int)(v16 + 22) >> 5) + 2224) & (1 << ((v16 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v10 + 4 * ((int)(v16 + 28) >> 5) + 2224) & (1 << ((v16 + 28) & 0x1F))) == 0 )
  {
LABEL_26:
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94FBC);
  }
  else
  {
    v17 = a1;
    if ( v16 >= 2 )
      v16 = 0;
    while ( 1 )
    {
      v17 = sub_60351954(*(_DWORD *)(v17 + 4 * v16 + 6308));
      if ( !v17 )
        break;
      if ( FIELD_U8(v17, 6328) )
        goto LABEL_26;
    }
  }
  result = (_DWORD *)(a1 + 6408);
  v19 = FIELD_U32(a1, 6408);
  if ( v19 )
  {
    v20 = v19 - 1;
    *result = v20;
    if ( v20 == 1 )
      return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F5C);
  }
  return result;
}
