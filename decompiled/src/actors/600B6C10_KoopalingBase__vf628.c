/* KoopalingBase__vf628
 * address: 0x600B6C10   size: 408   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600A0014 : Iggy
int __fastcall KoopalingBase__vf628(int a1)
{
  float v2; // s16
  int v3; // r0
  _BOOL4 v4; // r1
  int *v5; // r5
  int result; // r0
  float v7; // s0
  signed int v9; // r0
  int v10; // r6
  int v11; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 108);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = 0;
  v4 = FIELD_F32(a1, 120) < 0.0;
  FIELD_U32(a1, 80) = v4;
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7744);
  v5 = (int *)(a1 + 7752);
  if ( FIELD_S32(a1, 7752) >= 2 )
    v3 = -dword_60AF1ED8[v4];
  target = v3;
  v11 = 0x800000;
  moveValueTo((int *)(a1 + 164), &target, &v11);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1304))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1260))(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  v7 = FIELD_F32(a1, 7748);
  if ( v2 < v7 && FIELD_F32(a1, 108) >= v7 || v2 > v7 && FIELD_F32(a1, 108) <= v7 )
  {
    result = *v5;
    if ( (*v5)-- < 2 )
    {
      FIELD_U32(a1, 120) = 0;
      v9 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      FIELD_U32(a1, 80) = v9;
      v10 = byte_60AFE3F4[v9];
      FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v10;
      FIELD_U32(a1, 164) = 0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8341C);
    }
    else
    {
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  return result;
}
