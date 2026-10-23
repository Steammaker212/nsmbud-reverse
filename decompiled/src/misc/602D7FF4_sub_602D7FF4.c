/* sub_602D7FF4
 * address: 0x602D7FF4   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D7FF4(int a1)
{
  float v2; // s0
  int v3; // r5
  float v4; // s0
  int *v5; // r6
  float *v6; // r6
  float v7; // s0
  float v8; // r1
  float *v9; // r0
  float v10; // r0
  float v11; // s2
  int result; // r0
  int v13; // r0
  int v14; // r2
  Vec3 a3; // [sp+4h] [bp-24h] BYREF
  Vec2 positionOffset; // [sp+10h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
  {
    v5 = (int *)(a1 + 80);
    goto LABEL_12;
  }
  FIELD_U32(a1, 124) = 0;
  if ( (FIELD_U8(a1, 2880) & 1) == 0 )
  {
    if ( FIELD_U8(a1, 6470) )
    {
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        v6 = (float *)(a1 + 108);
        v7 = FIELD_F32(a1, 112);
        v8 = FIELD_F32(a1, 116);
        a3.x = FIELD_F32(a1, 108);
        a3.y = v7 + 7.0;
        a3.z = v8;
        ((void (__fastcall *)(Vec2 *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(
          &positionOffset,
          0,
          &a3,
          FIELD_U8(a1, 86));
        if ( LODWORD(positionOffset.x) )
          goto LABEL_11;
        v9 = (float *)(a1 + 112);
      }
      else
      {
        v9 = (float *)(a1 + 112);
        v6 = (float *)(a1 + 108);
      }
      v10 = *v9;
      a3.x = *v6;
      a3.y = v10;
      a3.z = 4500.0;
      EffectData_create(727, &a3, 0, 0);
    }
    else
    {
      FIELD_U8(a1, 6470) = 1;
    }
  }
LABEL_11:
  v5 = (int *)(a1 + 80);
  v11 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108) + (float)((float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 4.0);
  a3.y = v11 + 4.0;
  positionOffset.x = a3.x;
  positionOffset.y = v11 + -6.0;
  sub_6014F61C(a1 + 648);
  if ( !TileCheck_check((TileCheck *)(a1 + 652), 0, (Vec2 *)&a3, &positionOffset, 8) )
    return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C91CA8, v4);
LABEL_12:
  result = *v5;
  if ( (*(_DWORD *)(v3 + 4 * ((*v5 + 18) >> 5) + 2224) & (1 << ((*(_BYTE *)v5 + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v13 = result + 28;
    v14 = v13 >> 5;
    result = v13 & 0x1F;
    if ( (*(_DWORD *)(v3 + 4 * v14 + 2224) & (1 << result)) == 0 )
      return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C91CA8, v4);
  }
  return result;
}
