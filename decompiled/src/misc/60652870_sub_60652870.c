/* sub_60652870
 * address: 0x60652870   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60652870(int a1, ActorBuildInfo *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r0

  sub_606429C0((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C14194;
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
  FIELD_U8(a1, 6572) = 0;
  FIELD_U32(a1, 6568) = 0;
  FIELD_U32(a1, 6564) = 0;
  FIELD_U32(a1, 6560) = 0;
  FIELD_U32(a1, 6556) = 0;
  FIELD_U32(a1, 6552) = 0;
  return a1;
}
