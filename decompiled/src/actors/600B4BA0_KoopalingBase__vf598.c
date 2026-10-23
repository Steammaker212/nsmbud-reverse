/* KoopalingBase__vf598
 * address: 0x600B4BA0   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf598(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r6
  int result; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  v3 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  v6 = v2;
  target = v4;
  moveValueTo((int *)(a1 + 160), &target, &v6);
  result = FIELD_U32(a1, 160);
  if ( v4 == result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1088))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8326C);
  }
  return result;
}
