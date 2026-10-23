/* KoopalingBase__vf55C
 * address: 0x600B402C   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf55C(int a1)
{
  int v2; // r6
  float v3; // s0
  int v4; // r5
  int v5; // r7
  int v6; // r7
  int result; // r0
  unsigned int v8; // r1
  int v9; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2880) & 1) == 0 && (FIELD_U8(a1, 2872) & 1) != 0 )
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1240))(a1, v3);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  v5 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v5;
  v9 = v4;
  target = v6;
  moveValueTo((int *)(a1 + 160), &target, &v9);
  result = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    result += 4 * v8;
  if ( v6 == FIELD_U32(a1, 160) )
  {
    result = *(_DWORD *)(*(_DWORD *)result + 28) & 0x20;
    if ( result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C831B8);
  }
  return result;
}
