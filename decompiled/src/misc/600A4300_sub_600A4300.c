/* sub_600A4300
 * address: 0x600A4300   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A4300(int a1)
{
  ColliderNode *v2; // r6
  ColliderNode *v3; // r5
  int v4; // r0
  int v5; // r1

  v2 = (ColliderNode *)(a1 + 400);
  v3 = (ColliderNode *)(a1 + 528);
  *(_DWORD *)a1 = &off_60BC856C;
  ShapedCollider_ctor2((ShapedCollider *)a1, 4, a1 + 364, a1 + 400, a1 + 528);
  *(_DWORD *)a1 = &off_60BC856C;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 368) = 0;
  FIELD_U32(a1, 372) = 0;
  FIELD_U32(a1, 376) = 0;
  FIELD_U32(a1, 380) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 392) = 0;
  memset(v2, 0, 128);
  ColliderNode_ctor(v2);
  ColliderNode_ctor((ColliderNode *)(a1 + 432));
  ColliderNode_ctor((ColliderNode *)(a1 + 464));
  ColliderNode_ctor((ColliderNode *)(a1 + 496));
  memset(v3, 0, 128);
  ColliderNode_ctor(v3);
  ColliderNode_ctor((ColliderNode *)(a1 + 560));
  ColliderNode_ctor((ColliderNode *)(a1 + 592));
  ColliderNode_ctor((ColliderNode *)(a1 + 624));
  FIELD_U32(a1, 392) = 0;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 380) = 0;
  FIELD_U32(a1, 376) = 0;
  FIELD_U32(a1, 372) = 0;
  FIELD_U32(a1, 368) = 0;
  FIELD_U32(a1, 364) = 0;
  v4 = FIELD_U32(a1, 304);
  v5 = FIELD_U32(a1, 308);
  FIELD_U32(a1, 428) = v5;
  FIELD_U32(a1, 424) = v4;
  FIELD_U32(a1, 556) = v5;
  FIELD_U32(a1, 552) = v4;
  FIELD_U32(a1, 460) = v5;
  FIELD_U32(a1, 456) = v4;
  FIELD_U32(a1, 588) = v5;
  FIELD_U32(a1, 584) = v4;
  FIELD_U32(a1, 492) = v5;
  FIELD_U32(a1, 488) = v4;
  FIELD_U32(a1, 620) = v5;
  FIELD_U32(a1, 616) = v4;
  FIELD_U32(a1, 524) = v5;
  FIELD_U32(a1, 520) = v4;
  FIELD_U32(a1, 648) = v4;
  FIELD_U32(a1, 652) = v5;
  return a1;
}
