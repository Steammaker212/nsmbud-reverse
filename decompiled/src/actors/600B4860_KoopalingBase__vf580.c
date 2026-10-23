/* KoopalingBase__vf580
 * address: 0x600B4860   size: 184   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009FB68 : Iggy
int __fastcall KoopalingBase__vf580(int a1)
{
  float v2; // s0
  int v3; // r5
  int result; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1236))(a1, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
  v3 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  target = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  v5 = 0x4000000;
  moveValueTo((int *)(a1 + 160), &target, &v5);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83224);
  return result;
}
