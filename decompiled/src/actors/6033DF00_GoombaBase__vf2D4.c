/* GoombaBase__vf2D4
 * address: 0x6033DF00   size: 292   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall GoombaBase__vf2D4(int a1)
{
  int v2; // r0
  _BOOL4 v3; // r6
  int v4; // r0
  int v5; // r1
  int result; // r0
  int *v7; // r1
  int speed; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  v3 = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], &speed);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v4 = FIELD_U32(a1, 80);
  v5 = a1 + 648;
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v4 + 18) >> 5) + 2224) & (1 << ((v4 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v5 + 4 * ((v4 + 22) >> 5) + 2224) & (1 << ((v4 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v5 + 4 * ((v4 + 28) >> 5) + 2224) & (1 << ((v4 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 80) = v4 ^ 1;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  result = FIELD_U32(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (result & 8) != 0 )
    {
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    }
    else
    {
      if ( v3 )
        v7 = &dword_60C94470;
      else
        v7 = &dword_60C94494;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v7);
    }
  }
  return result;
}
