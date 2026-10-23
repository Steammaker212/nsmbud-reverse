/* sub_6012B2C0
 * address: 0x6012B2C0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012B2C0(int a1)
{
  void *v2; // r8
  ColliderNode *v3; // r7
  ColliderNode *v4; // r6
  int v5; // r0
  int v6; // r1

  v2 = (void *)(a1 + 364);
  v3 = (ColliderNode *)(a1 + 416);
  v4 = (ColliderNode *)(a1 + 608);
  *(_DWORD *)a1 = &off_60BD18A4;
  ShapedCollider_ctor2((ShapedCollider *)a1, 6, a1 + 364, a1 + 416, a1 + 608);
  *(_DWORD *)a1 = &off_60BD18A4;
  memset(v2, 0, 48);
  memset(v3, 0, 192);
  ColliderNode_ctor(v3);
  ColliderNode_ctor((ColliderNode *)(a1 + 448));
  ColliderNode_ctor((ColliderNode *)(a1 + 480));
  ColliderNode_ctor((ColliderNode *)(a1 + 512));
  ColliderNode_ctor((ColliderNode *)(a1 + 544));
  ColliderNode_ctor((ColliderNode *)(a1 + 576));
  memset(v4, 0, 192);
  ColliderNode_ctor(v4);
  ColliderNode_ctor((ColliderNode *)(a1 + 640));
  ColliderNode_ctor((ColliderNode *)(a1 + 672));
  ColliderNode_ctor((ColliderNode *)(a1 + 704));
  ColliderNode_ctor((ColliderNode *)(a1 + 736));
  ColliderNode_ctor((ColliderNode *)(a1 + 768));
  memset(v2, 0, 48);
  v5 = FIELD_U32(a1, 304);
  v6 = FIELD_U32(a1, 308);
  FIELD_U32(a1, 444) = v6;
  FIELD_U32(a1, 440) = v5;
  FIELD_U32(a1, 636) = v6;
  FIELD_U32(a1, 632) = v5;
  FIELD_U32(a1, 476) = v6;
  FIELD_U32(a1, 472) = v5;
  FIELD_U32(a1, 668) = v6;
  FIELD_U32(a1, 664) = v5;
  FIELD_U32(a1, 508) = v6;
  FIELD_U32(a1, 504) = v5;
  FIELD_U32(a1, 700) = v6;
  FIELD_U32(a1, 696) = v5;
  FIELD_U32(a1, 540) = v6;
  FIELD_U32(a1, 536) = v5;
  FIELD_U32(a1, 732) = v6;
  FIELD_U32(a1, 728) = v5;
  FIELD_U32(a1, 572) = v6;
  FIELD_U32(a1, 568) = v5;
  FIELD_U32(a1, 764) = v6;
  FIELD_U32(a1, 760) = v5;
  FIELD_U32(a1, 604) = v6;
  FIELD_U32(a1, 600) = v5;
  FIELD_U32(a1, 792) = v5;
  FIELD_U32(a1, 796) = v6;
  return a1;
}
