/* SE_EMY_KILLER_SHOT_ref
 * address: 0x60326F6C   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KILLER_SHOT_ref(int a1)
{
  int v2; // r7
  float v3; // s2
  float v4; // s0
  float v5; // s16
  int v6; // r5
  float v7; // s4
  unsigned int v8; // r6
  float v9; // s0
  float v10; // r1
  float v11; // s2
  float v12; // s6
  float v13; // s0
  float v14; // s4
  float v15; // s0
  int v16; // r0
  int v17; // r7
  _BYTE *v18; // r0
  int v19; // r0
  float v20; // r1
  int v21; // r5
  _DWORD **v22; // r4
  _DWORD *v23; // t1
  int v24; // r0
  Vec3 position; // [sp+4h] [bp-64h] BYREF
  Vec3 v27; // [sp+34h] [bp-34h] BYREF
  Vec2 out; // [sp+40h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 7656);
  v3 = FIELD_F32(dword_60CC6484, 112);
  v4 = FIELD_F32(dword_60CC6484, 120);
  if ( (unsigned int)(v2 - 1) <= 1 || FIELD_U32(a1, 7648) == 1 )
  {
    v5 = FIELD_F32(a1, 108);
    v6 = 0;
    v7 = FIELD_F32(a1, 500) * 0.5;
    if ( v3 > (float)(v5 + v7) || v4 < (float)(v5 - v7) )
      return v6;
  }
  else
  {
    v5 = FIELD_F32(a1, 108);
    v6 = 0;
    v14 = FIELD_F32(a1, 500) * 0.5;
    if ( (float)(v3 + -16.0) > (float)(v5 + v14) )
      return v6;
    if ( (float)(v4 + 16.0) < (float)(v5 - v14) )
      return v6;
    v15 = FIELD_F32(a1, 112);
    if ( (float)(FIELD_F32(dword_60CC6484, 124) + 32.0) < v15
      || (float)(FIELD_F32(dword_60CC6484, 132) + -64.0) > (float)(v15 + FIELD_F32(a1, 504)) )
    {
      return v6;
    }
  }
  v6 = 0;
  if ( !FIELD_U8(a1, 7680) )
  {
    v8 = sub_60326850((_DWORD *)a1);
    if ( v8 != -1 )
    {
      v9 = FIELD_F32(a1, 112);
      v10 = FIELD_F32(a1, 116);
      v27.x = v5;
      v11 = flt_60AFF784[v2];
      v27.y = v9 + v11;
      v27.z = v10;
      v12 = FIELD_F32(a1, 7632);
      if ( FIELD_U32(a1, 7640) == 1 )
        v13 = (float)(v9 - v11) - (float)(v12 + -32.0);
      else
        v13 = (float)(v9 + v11) + (float)(v12 + -32.0);
      v27.y = v13;
      v16 = FIELD_U32(a1, 7668);
      if ( v16 == 1 )
      {
        v17 = 1;
      }
      else if ( v16 == 2 )
      {
        v17 = 0;
      }
      else
      {
        v17 = (unsigned __int8)StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      }
      v18 = sub_60322FA4(&v27, (16 * v17) | 0xB, FIELD_U32(a1, 24) & 0xF0, 0x14u);
      if ( v18 )
      {
        *((_DWORD *)v18 + 29) = 1131413504;
        v19 = *((_DWORD *)v18 + 2);
        if ( v8 >= 0x14 )
          v8 = 0;
        *(_DWORD *)(a1 + 4 * v8 + 6832) = v19;
        v20 = FIELD_F32(a1, 112);
        v21 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v20;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v21, "SE_EMY_KILLER_SHOT", &out.x, 0);
        v23 = *(_DWORD **)(a1 + 6100);
        v22 = (_DWORD **)(a1 + 6100);
        v24 = (*(int (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v23 + 84))(
                *v23,
                &dword_60C93B00[4 * (_DWORD)v22[387] + 19 + 2 * v17]);
        (*(void (__fastcall **)(_DWORD, int, Vec3 *))(*(_DWORD *)**v22 + 108))(**v22, v24, &position);
        sub_60236DF4(542, &position, 0);
        v6 = 1;
        *((_BYTE *)v22 + 1581) = 1;
      }
      else
      {
        return 0;
      }
    }
  }
  return v6;
}
