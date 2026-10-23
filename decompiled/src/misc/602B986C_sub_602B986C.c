/* sub_602B986C
 * address: 0x602B986C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B986C(int a1)
{
  int v2; // r5
  float x; // s0
  int v4; // r0
  _BOOL4 v5; // r0
  int v6; // r6
  int v7; // r0
  float v8; // s0
  int v9; // r1
  char v10; // r6
  _DWORD *v11; // r1
  unsigned int v12; // r0
  _DWORD *v13; // r1
  unsigned int v14; // r0
  int result; // r0
  float v16; // s0
  Vec2 v17; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  x = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = FIELD_U32(a1, 6304);
  if ( v4 == 2 )
  {
    v5 = 1;
  }
  else if ( v4 == 1 )
  {
    v5 = 0;
  }
  else
  {
    FIELD_U8(a1, 84) = StageActor__distanceToPlayer((StateActor *)a1, &v17);
    x = v17.x;
    v5 = v17.x < 0.0;
  }
  FIELD_U32(a1, 80) = v5;
  v6 = FIELD_U32(a1, 160);
  v7 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 644))(a1, x);
  v9 = FIELD_U32(a1, 80);
  if ( v9 == 1 )
  {
    if ( v6 - dword_60C9111C > v7 )
      v7 = v6 - dword_60C9111C;
  }
  else if ( v9 )
  {
    if ( FIELD_U32(a1, 160) > v7 )
      v7 = v6;
  }
  else if ( dword_60C9111C + v6 < v7 )
  {
    v7 = dword_60C9111C + v6;
  }
  FIELD_U32(a1, 160) = v7;
  CollisionMgr_process((_BYTE *)(a1 + 648), v8);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v10 = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v11 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v12 )
      v11 += v12;
    if ( sub_60418548(*v11 + 4) )
    {
      sub_602BB5CC(a1);
      v10 = 1;
    }
    else
    {
      v13 = *(_DWORD **)(*(_DWORD *)v2 + 12);
      v14 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v14 )
        v13 += v14;
      if ( sub_60418548(*v13 + 4) )
      {
        sub_602BB4E0(a1);
        v10 = 1;
      }
      else
      {
        v10 = 1;
        if ( !FIELD_U8(a1, 6360) )
          sub_602BB404(a1);
      }
    }
  }
  FIELD_U8(a1, 6360) = v10;
  result = dword_60CC6484;
  v16 = FIELD_F32(dword_60CC6484, 112);
  if ( (float)(FIELD_F32(dword_60CC6484, 116)
             + (float)((float)(FIELD_F32(dword_60CC6484, 56) + FIELD_F32(dword_60CC6484, 64)) * -0.5)) >= 0.0 )
  {
    if ( (float)(FIELD_F32(a1, 108) + -16.0) > (float)(v16 + FIELD_F32(dword_60CC6484, 104)) )
      return result;
  }
  else if ( (float)(FIELD_F32(a1, 108) + 16.0) < v16 )
  {
    return result;
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C910B4);
}
