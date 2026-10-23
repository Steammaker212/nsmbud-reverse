/* Actor_Hammer_pendulum_build_helper
 * address: 0x6066A4F4   size: 392   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Hammer_pendulum_build_helper(int a1)
{
  void *v2; // r8
  ColliderNode *v3; // r7
  ColliderNode *v4; // r6
  int v5; // r0
  int v6; // r1

  v2 = (void *)(a1 + 364);
  v3 = (ColliderNode *)(a1 + 432);
  v4 = (ColliderNode *)(a1 + 688);
  *(_DWORD *)a1 = &off_60C15330;
  ShapedCollider_ctor2((ShapedCollider *)a1, 8, a1 + 364, a1 + 432, a1 + 688);
  *(_DWORD *)a1 = &off_60C15330;
  memset(v2, 0, 64);
  memset(v3, 0, 256);
  ColliderNode_ctor(v3);
  ColliderNode_ctor((ColliderNode *)(a1 + 464));
  ColliderNode_ctor((ColliderNode *)(a1 + 496));
  ColliderNode_ctor((ColliderNode *)(a1 + 528));
  ColliderNode_ctor((ColliderNode *)(a1 + 560));
  ColliderNode_ctor((ColliderNode *)(a1 + 592));
  ColliderNode_ctor((ColliderNode *)(a1 + 624));
  ColliderNode_ctor((ColliderNode *)(a1 + 656));
  memset(v4, 0, 256);
  ColliderNode_ctor(v4);
  ColliderNode_ctor((ColliderNode *)(a1 + 720));
  ColliderNode_ctor((ColliderNode *)(a1 + 752));
  ColliderNode_ctor((ColliderNode *)(a1 + 784));
  ColliderNode_ctor((ColliderNode *)(a1 + 816));
  ColliderNode_ctor((ColliderNode *)(a1 + 848));
  ColliderNode_ctor((ColliderNode *)(a1 + 880));
  ColliderNode_ctor((ColliderNode *)(a1 + 912));
  memset(v2, 0, 64);
  v5 = FIELD_U32(a1, 304);
  v6 = FIELD_U32(a1, 308);
  FIELD_U32(a1, 460) = v6;
  FIELD_U32(a1, 456) = v5;
  FIELD_U32(a1, 716) = v6;
  FIELD_U32(a1, 712) = v5;
  FIELD_U32(a1, 492) = v6;
  FIELD_U32(a1, 488) = v5;
  FIELD_U32(a1, 748) = v6;
  FIELD_U32(a1, 744) = v5;
  FIELD_U32(a1, 524) = v6;
  FIELD_U32(a1, 520) = v5;
  FIELD_U32(a1, 780) = v6;
  FIELD_U32(a1, 776) = v5;
  FIELD_U32(a1, 556) = v6;
  FIELD_U32(a1, 552) = v5;
  FIELD_U32(a1, 812) = v6;
  FIELD_U32(a1, 808) = v5;
  FIELD_U32(a1, 588) = v6;
  FIELD_U32(a1, 584) = v5;
  FIELD_U32(a1, 844) = v6;
  FIELD_U32(a1, 840) = v5;
  FIELD_U32(a1, 620) = v6;
  FIELD_U32(a1, 616) = v5;
  FIELD_U32(a1, 876) = v6;
  FIELD_U32(a1, 872) = v5;
  FIELD_U32(a1, 652) = v6;
  FIELD_U32(a1, 648) = v5;
  FIELD_U32(a1, 908) = v6;
  FIELD_U32(a1, 904) = v5;
  FIELD_U32(a1, 684) = v6;
  FIELD_U32(a1, 680) = v5;
  FIELD_U32(a1, 936) = v5;
  FIELD_U32(a1, 940) = v6;
  return a1;
}
