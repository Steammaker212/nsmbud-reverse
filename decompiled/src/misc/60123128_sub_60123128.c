/* sub_60123128
 * address: 0x60123128   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60123128(CollisionActor *a1)
{
  int v3; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 0xA4) += dword_60AF1EC8[(int)a1[1]._.aCollider.createNode.next];
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  target[0] = 0;
  v3 = 0x2000000;
  moveValueTo(&FIELD_U32(a1, 0x9C), target, &v3);
  target[0] = 0;
  v3 = 0x2000000;
  return moveValueTo(&FIELD_U32(a1, 0xA0), target, &v3);
}
