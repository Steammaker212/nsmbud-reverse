/* sub_600E6998
 * address: 0x600E6998   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E6998(int a1)
{
  int v2; // r0
  int *v3; // r1
  int v4; // r0
  int v5; // r7
  float v6; // s0
  int result; // r0

  v3 = (int *)(a1 + 8164);
  v2 = FIELD_U32(a1, 8164);
  if ( v2 )
  {
    v4 = v2 - 1;
    *v3 = v4;
  }
  else
  {
    v4 = 0;
  }
  if ( !FIELD_U8(a1, 8132) )
  {
    if ( v4 >= 21 && !FIELD_U8(a1, 8185) )
    {
      v5 = FIELD_U32(a1, 8188);
      if ( v5 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) )
      {
        FIELD_U8(a1, 8185) = 1;
        FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      }
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
    sub_600B33DC((int *)a1, 0x4000000);
  }
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v6 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1236))(a1, v6);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8514C);
  return result;
}
