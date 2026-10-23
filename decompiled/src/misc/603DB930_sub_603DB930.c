/* sub_603DB930
 * address: 0x603DB930   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DB930(CollisionActor *a1)
{
  float v2; // s0
  float v3; // s0

  CollisionActor__handleGravity(a1);
  FIELD_U32(a1, 0x0).position.x = FIELD_U32(a1, 0x0).position.x + FIELD_U32(a1, 0x0).speed.x;
  FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).position.y + FIELD_U32(a1, 0x0).speed.y;
  v2 = FIELD_U32(a1, 0x0).position.z + FIELD_U32(a1, 0x0).speed.z;
  FIELD_U32(a1, 0x0).position.z = v2;
  v3 = CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  return sub_603DC968(a1, v3);
}
