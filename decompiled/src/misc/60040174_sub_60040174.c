/* sub_60040174
 * address: 0x60040174   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60040174(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r0

  sub_600D0154();
  *(_DWORD *)a1 = off_60BC2D30;
  FIELD_U32(a1, 7656) = &off_60BC30B4;
  FIELD_U32(a1, 7660) = a1;
  FIELD_U32(a1, 7712) = 0;
  FIELD_U32(a1, 7716) = 0;
  FIELD_U32(a1, 7720) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7724));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8028));
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 0x2090));
  FIELD_U32(a1, 0x2090) = off_60BC31C8;
  memset(a1 + 8704, 0, 88);
  ColliderNode_ctor((ColliderNode *)(a1 + 8728));
  ColliderNode_ctor((ColliderNode *)(a1 + 8760));
  memset(a1 + 8792, 0, 64);
  ColliderNode_ctor((ColliderNode *)(a1 + 8792));
  ColliderNode_ctor((ColliderNode *)(a1 + 8824));
  FIELD_U32(a1, 8724) = 0;
  FIELD_U32(a1, 8720) = 0;
  FIELD_U32(a1, 8716) = 0;
  FIELD_U32(a1, 8712) = 0;
  FIELD_U32(a1, 8708) = 0;
  FIELD_U32(a1, 8704) = 0;
  v2 = FIELD_U32(a1, 8644);
  v3 = FIELD_U32(a1, 8640);
  FIELD_U32(a1, 8756) = v2;
  FIELD_U32(a1, 8752) = v3;
  FIELD_U32(a1, 8820) = v2;
  FIELD_U32(a1, 8816) = v3;
  FIELD_U32(a1, 8788) = v2;
  FIELD_U32(a1, 8784) = v3;
  FIELD_U32(a1, 8852) = v2;
  FIELD_U32(a1, 8848) = v3;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 0x2090), 2, a1 + 8704, a1 + 8728, a1 + 8792);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 0x2298));
  FIELD_U32(a1, 0x2298) = off_60BC31C8;
  memset(a1 + 9224, 0, 88);
  ColliderNode_ctor((ColliderNode *)(a1 + 9248));
  ColliderNode_ctor((ColliderNode *)(a1 + 9280));
  memset(a1 + 9312, 0, 64);
  ColliderNode_ctor((ColliderNode *)(a1 + 9312));
  ColliderNode_ctor((ColliderNode *)(a1 + 9344));
  FIELD_U32(a1, 9244) = 0;
  FIELD_U32(a1, 9240) = 0;
  FIELD_U32(a1, 9236) = 0;
  FIELD_U32(a1, 9232) = 0;
  FIELD_U32(a1, 9228) = 0;
  FIELD_U32(a1, 9224) = 0;
  v4 = FIELD_U32(a1, 9164);
  v5 = FIELD_U32(a1, 9160);
  FIELD_U32(a1, 9276) = v4;
  FIELD_U32(a1, 9272) = v5;
  FIELD_U32(a1, 9340) = v4;
  FIELD_U32(a1, 9336) = v5;
  FIELD_U32(a1, 9308) = v4;
  FIELD_U32(a1, 9304) = v5;
  FIELD_U32(a1, 9372) = v4;
  FIELD_U32(a1, 9368) = v5;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 0x2298), 2, a1 + 9224, a1 + 9248, a1 + 9312);
  RectCollider_ctor((RectCollider *)(a1 + 9376));
  FIELD_U32(a1, 9376) = off_60BC30D8;
  CircularCollider_ctor((ColliderBase *)(a1 + 0x2730));
  CircularCollider_ctor((ColliderBase *)(a1 + 0x28C0));
  memset((void *)(a1 + 11048), 0, 120);
  FIELD_U32(a1, 0x2BA0) = 0x3F800000;
  FIELD_U32(a1, 11172) = 0x3F800000;
  FIELD_U32(a1, 11176) = 0x3F800000;
  memset((void *)(a1 + 11180), 0, 516);
  sub_6040E90C(a1 + 11712, 17);
  FIELD_U32(a1, 11708) = 0;
  FIELD_U32(a1, 11704) = 0;
  FIELD_U32(a1, 11700) = 0;
  FIELD_U32(a1, 11696) = 0;
  FIELD_U32(a1, 11804) = 0;
  FIELD_U32(a1, 11800) = 0;
  FIELD_U32(a1, 11796) = 0;
  FIELD_U32(a1, 11792) = 0;
  FIELD_U32(a1, 11788) = 0;
  FIELD_U32(a1, 11784) = 0;
  FIELD_U32(a1, 11780) = 0;
  FIELD_U32(a1, 11776) = 0;
  return a1;
}
