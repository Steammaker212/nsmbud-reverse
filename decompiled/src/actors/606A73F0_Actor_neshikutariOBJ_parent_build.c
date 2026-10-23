/* Actor_neshikutariOBJ_parent_build
 * address: 0x606A73F0   size: 372   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_neshikutariOBJ_parent_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x748u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C19CF4;
  FIELD_U32(v2, 648) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 656));
  FIELD_U32(v2, 656) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 1024, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 1040));
  FIELD_U32(v2, 1076) = 0;
  FIELD_U32(v2, 1080) = 0;
  FIELD_U32(v2, 1084) = 0;
  FIELD_U32(v2, 1088) = 0;
  FIELD_U32(v2, 1092) = 0;
  FIELD_U32(v2, 1096) = 0;
  FIELD_U32(v2, 1100) = 0;
  FIELD_U32(v2, 1072) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 1072));
  FIELD_U32(v2, 1036) = 0;
  FIELD_U32(v2, 1032) = 0;
  FIELD_U32(v2, 1028) = 0;
  FIELD_U32(v2, 1024) = 0;
  v3 = FIELD_U32(v2, 960);
  v4 = FIELD_U32(v2, 964);
  FIELD_U32(v2, 1068) = v4;
  FIELD_U32(v2, 1064) = v3;
  FIELD_U32(v2, 1096) = v3;
  FIELD_U32(v2, 1100) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 656), 1, v2 + 1024, v2 + 1040, v5);
  RectCollider_ctor((RectCollider *)(v2 + 1104));
  FIELD_U32(v2, 1104) = off_60BC30D8;
  FIELD_U32(v2, 1760) = 10;
  FIELD_U8(v2, 1764) = 0;
  FIELD_U8(v2, 1765) = 0;
  FIELD_U8(v2, 1766) = 0;
  FIELD_U32(v2, 1768) = 10;
  FIELD_U8(v2, 1772) = 0;
  FIELD_U8(v2, 1773) = 0;
  FIELD_U8(v2, 1774) = 0;
  FIELD_U32(v2, 1776) = 10;
  FIELD_U8(v2, 1780) = 0;
  FIELD_U8(v2, 1781) = 0;
  FIELD_U8(v2, 1782) = 0;
  FIELD_U32(v2, 1784) = 10;
  FIELD_U16(v2, 1788) = 0;
  FIELD_U8(v2, 1790) = 0;
  FIELD_U16(v2, 1852) = 0;
  FIELD_U32(v2, 1848) = 0;
  FIELD_U32(v2, 1844) = 0;
  FIELD_U32(v2, 1840) = 0;
  FIELD_U32(v2, 1836) = 0;
  FIELD_U32(v2, 1832) = 0;
  FIELD_U32(v2, 1856) = off_60C19D80;
  FIELD_U16(v2, 1860) = 0;
  return v2;
}
