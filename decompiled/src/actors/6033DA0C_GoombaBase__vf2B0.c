/* GoombaBase__vf2B0
 * address: 0x6033DA0C   size: 320   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall GoombaBase__vf2B0(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int result; // r0
  int v6; // r0
  int v7; // r2
  int speed; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], &speed);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
  v3 = FIELD_U32(a1, 2872);
  v4 = a1 + 648;
  if ( (v3 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (v3 & 8) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C944DC);
    }
    else if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) == 1
           && (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
    {
      FIELD_U32(a1, 124) = 0x40000000;
    }
  }
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v4 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v4 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v6 = result + 28;
    v7 = v6 >> 5;
    result = v6 & 0x1F;
    if ( (*(_DWORD *)(v4 + 4 * v7 + 2224) & (1 << result)) == 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94494);
  }
  return result;
}
