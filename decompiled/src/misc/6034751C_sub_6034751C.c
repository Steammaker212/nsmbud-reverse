/* sub_6034751C
 * address: 0x6034751C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6034751C(int a1)
{
  float v2; // s0
  int v3; // r5
  float v4; // r2
  int v5; // r0
  int v6; // r0
  _BOOL4 v7; // r5
  unsigned int result; // r0
  int v9; // r1
  int v10; // r1
  Vec3 out[2]; // [sp+4h] [bp-1Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (FIELD_U8(a1, 2880) & 1) == 0 && !FIELD_U8(a1, 6054) && !FIELD_U8(a1, 6373) )
    {
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_U32(a1, 5956);
      out[0].x = FIELD_F32(a1, 108);
      out[0].y = v4;
      out[0].z = 4500.0;
      EffectData_create(dword_60AFFC94[BYTE1(v5)], out, 0, 0);
    }
  }
  v6 = FIELD_U32(a1, 80);
  v7 = ((*(_DWORD *)(v3 + 4 * ((v6 + 18) >> 5) + 2224) & (1 << ((v6 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v6 + 22) >> 5) + 2224) & (1 << ((v6 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v6 + 28) >> 5) + 2224) & (1 << ((v6 + 28) & 0x1F))) == 0;
  result = a1 + 6360;
  v9 = FIELD_U32(a1, 6360);
  if ( v9 && (v10 = v9 - 1, (*(_DWORD *)result = v10) != 0) )
  {
    if ( !v7 )
      return result;
  }
  else
  {
    *(_DWORD *)result = 40;
    result = (StageActor__distanceToPlayer((StateActor *)a1, (Vec2 *)out) << 24) | 0xFFFFFF;
    if ( result > 0x4FFFFFE )
    {
      if ( !v7 )
        return result;
    }
    else
    {
      result = v7 || FIELD_U32(a1, 80) != out[0].x < 0.0;
      if ( !result )
        return result;
    }
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94968);
}
