/* sub_605EBFE8
 * address: 0x605EBFE8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EBFE8(int a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0

  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C0B7B0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6104));
  FIELD_U32(a1, 6104) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 6472, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 6488));
  FIELD_U32(a1, 6540) = 0;
  FIELD_U32(a1, 6536) = 0;
  FIELD_U32(a1, 6532) = 0;
  FIELD_U32(a1, 6528) = 0;
  FIELD_U32(a1, 6524) = 0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6548) = 0;
  FIELD_U32(a1, 6520) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 6520));
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6480) = 0;
  FIELD_U32(a1, 6476) = 0;
  FIELD_U32(a1, 6472) = 0;
  v3 = FIELD_U32(a1, 6412);
  v4 = FIELD_U32(a1, 6408);
  FIELD_U32(a1, 6516) = v3;
  FIELD_U32(a1, 6512) = v4;
  FIELD_U32(a1, 6548) = v3;
  FIELD_U32(a1, 6544) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6104), 1, a1 + 6472, a1 + 6488, v5);
  FIELD_U16(a1, 6592) = 0;
  FIELD_U32(a1, 6588) = 0;
  FIELD_U32(a1, 6584) = 0;
  FIELD_U32(a1, 6580) = 0;
  FIELD_U32(a1, 6576) = 0;
  FIELD_U32(a1, 6572) = 0;
  FIELD_U32(a1, 6568) = 0;
  FIELD_U32(a1, 6564) = 0;
  FIELD_U32(a1, 6600) = 0;
  FIELD_U32(a1, 6596) = 0;
  return a1;
}
