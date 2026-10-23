/* sub_60682CCC
 * address: 0x60682CCC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60682CCC(int a1)
{
  void *v2; // r8
  ColliderNode *v3; // r7
  ColliderNode *v4; // r6
  int v5; // r0
  int v6; // r1

  v2 = (void *)(a1 + 364);
  v3 = (ColliderNode *)(a1 + 448);
  v4 = (ColliderNode *)(a1 + 768);
  *(_DWORD *)a1 = &off_60C16DD8;
  ShapedCollider_ctor2((ShapedCollider *)a1, 10, a1 + 364, a1 + 448, a1 + 768);
  *(_DWORD *)a1 = &off_60C16DD8;
  memset(v2, 0, 80);
  memset(v3, 0, 320);
  ColliderNode_ctor(v3);
  ColliderNode_ctor((ColliderNode *)(a1 + 480));
  ColliderNode_ctor((ColliderNode *)(a1 + 512));
  ColliderNode_ctor((ColliderNode *)(a1 + 544));
  ColliderNode_ctor((ColliderNode *)(a1 + 576));
  ColliderNode_ctor((ColliderNode *)(a1 + 608));
  ColliderNode_ctor((ColliderNode *)(a1 + 640));
  ColliderNode_ctor((ColliderNode *)(a1 + 672));
  ColliderNode_ctor((ColliderNode *)(a1 + 704));
  ColliderNode_ctor((ColliderNode *)(a1 + 736));
  memset(v4, 0, 320);
  ColliderNode_ctor(v4);
  ColliderNode_ctor((ColliderNode *)(a1 + 800));
  ColliderNode_ctor((ColliderNode *)(a1 + 832));
  ColliderNode_ctor((ColliderNode *)(a1 + 864));
  ColliderNode_ctor((ColliderNode *)(a1 + 896));
  ColliderNode_ctor((ColliderNode *)(a1 + 928));
  ColliderNode_ctor((ColliderNode *)(a1 + 960));
  ColliderNode_ctor((ColliderNode *)(a1 + 992));
  ColliderNode_ctor((ColliderNode *)(a1 + 1024));
  ColliderNode_ctor((ColliderNode *)(a1 + 1056));
  memset(v2, 0, 80);
  v5 = FIELD_U32(a1, 304);
  v6 = FIELD_U32(a1, 308);
  FIELD_U32(a1, 476) = v6;
  FIELD_U32(a1, 472) = v5;
  FIELD_U32(a1, 796) = v6;
  FIELD_U32(a1, 792) = v5;
  FIELD_U32(a1, 508) = v6;
  FIELD_U32(a1, 504) = v5;
  FIELD_U32(a1, 828) = v6;
  FIELD_U32(a1, 824) = v5;
  FIELD_U32(a1, 540) = v6;
  FIELD_U32(a1, 536) = v5;
  FIELD_U32(a1, 860) = v6;
  FIELD_U32(a1, 856) = v5;
  FIELD_U32(a1, 572) = v6;
  FIELD_U32(a1, 568) = v5;
  FIELD_U32(a1, 892) = v6;
  FIELD_U32(a1, 888) = v5;
  FIELD_U32(a1, 604) = v6;
  FIELD_U32(a1, 600) = v5;
  FIELD_U32(a1, 924) = v6;
  FIELD_U32(a1, 920) = v5;
  FIELD_U32(a1, 636) = v6;
  FIELD_U32(a1, 632) = v5;
  FIELD_U32(a1, 956) = v6;
  FIELD_U32(a1, 952) = v5;
  FIELD_U32(a1, 668) = v6;
  FIELD_U32(a1, 664) = v5;
  FIELD_U32(a1, 988) = v6;
  FIELD_U32(a1, 984) = v5;
  FIELD_U32(a1, 700) = v6;
  FIELD_U32(a1, 696) = v5;
  FIELD_U32(a1, 1020) = v6;
  FIELD_U32(a1, 1016) = v5;
  FIELD_U32(a1, 732) = v6;
  FIELD_U32(a1, 728) = v5;
  FIELD_U32(a1, 1052) = v6;
  FIELD_U32(a1, 1048) = v5;
  FIELD_U32(a1, 764) = v6;
  FIELD_U32(a1, 760) = v5;
  FIELD_U32(a1, 1080) = v5;
  FIELD_U32(a1, 1084) = v6;
  return a1;
}
