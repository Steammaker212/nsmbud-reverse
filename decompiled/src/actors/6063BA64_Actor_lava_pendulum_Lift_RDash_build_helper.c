/* Actor_lava_pendulum_Lift_RDash_build_helper
 * address: 0x6063BA64   size: 436   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_lava_pendulum_Lift_RDash_build_helper(int a1, int a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0

  sub_606D23D8(a1, a2);
  *(_DWORD *)a1 = off_60C12E08;
  memset(a1 + 6192, 0, 52);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6288));
  FIELD_U32(a1, 6288) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 6656, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 6672));
  FIELD_U32(a1, 6724) = 0;
  FIELD_U32(a1, 6720) = 0;
  FIELD_U32(a1, 6716) = 0;
  FIELD_U32(a1, 6712) = 0;
  FIELD_U32(a1, 6708) = 0;
  FIELD_U32(a1, 6728) = 0;
  FIELD_U32(a1, 6732) = 0;
  FIELD_U32(a1, 6704) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 6704));
  FIELD_U32(a1, 6668) = 0;
  FIELD_U32(a1, 6664) = 0;
  FIELD_U32(a1, 6660) = 0;
  FIELD_U32(a1, 6656) = 0;
  v3 = FIELD_U32(a1, 6596);
  v4 = FIELD_U32(a1, 6592);
  FIELD_U32(a1, 6700) = v3;
  FIELD_U32(a1, 6696) = v4;
  FIELD_U32(a1, 6732) = v3;
  FIELD_U32(a1, 6728) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6288), 1, a1 + 6656, a1 + 6672, v5);
  FIELD_U32(a1, 6736) = 0;
  FIELD_U32(a1, 6740) = 0;
  FIELD_U32(a1, 6744) = 32;
  FIELD_U32(a1, 6748) = 0x20000;
  FIELD_U32(a1, 6752) = 0x8000000;
  FIELD_U32(a1, 6756) = 0x80000;
  FIELD_U32(a1, 6760) = 0x800000;
  FIELD_U32(a1, 6764) = 0x400000;
  FIELD_U8(a1, 6768) = 0;
  FIELD_U8(a1, 6782) = 0;
  FIELD_U16(a1, 6780) = 0;
  FIELD_U32(a1, 6776) = 0;
  FIELD_U32(a1, 6772) = 0;
  return a1;
}
