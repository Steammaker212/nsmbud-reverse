/* sub_600958B0
 * address: 0x600958B0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600958B0(CollisionActor *a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node4.owner);
  FIELD_U32(a1, 0x0).rotation.z += dword_60AF1EC8[FIELD_U32(a1, 0x0).direction];
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  target[0] = 0;
  v3 = 0x2000000;
  moveValueTo(&FIELD_U32(a1, 0x0).rotation.x, target, &v3);
  target[0] = 0;
  v3 = 0x2000000;
  moveValueTo(&FIELD_U32(a1, 0x0).rotation.y, target, &v3);
  result = dword_60CC6484;
  if ( FIELD_U32(a1, 0x0).position.y < (float)(FIELD_F32(dword_60CC6484, 132) + -100.0) )
  {
    FIELD_U32(a1, 0x0)._.isDeleted = 1;
    return 1;
  }
  return result;
}
