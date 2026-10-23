/* sub_6032DE78
 * address: 0x6032DE78   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032DE78(int a1)
{
  float v2; // s0
  signed int v3; // r0
  int result; // r0
  int v5; // r1
  int v6; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v3;
  target = dword_60AF20A0[v3];
  v6 = 0x4000000;
  result = moveValueTo((int *)(a1 + 160), &target, &v6);
  v5 = FIELD_U32(a1, 6308);
  FIELD_U32(a1, 6308) = v5 - 1;
  if ( v5 <= 1 )
  {
    result ^= 1u;
    if ( !result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93DE0);
  }
  return result;
}
