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
  FIELD_F32(a1, 0x6C) = FIELD_F32(a1, 0x6C) + FIELD_F32(a1, 0x78);
  FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) + FIELD_F32(a1, 0x7C);
  v2 = FIELD_F32(a1, 0x74) + FIELD_F32(a1, 0x80);
  FIELD_F32(a1, 0x74) = v2;
  v3 = CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  return sub_603DC968(a1, v3);
}
