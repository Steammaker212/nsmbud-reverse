/* Actor_rotate_tarifloor_build
 * address: 0x606D0E80   size: 340   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_tarifloor_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1A08u);
  sub_606CA0DC((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1DA7C;
  FIELD_U32(v2, 6152) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6160));
  FIELD_U32(v2, 6160) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6528, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6544));
  FIELD_U32(v2, 6596) = 0;
  FIELD_U32(v2, 6592) = 0;
  FIELD_U32(v2, 6588) = 0;
  FIELD_U32(v2, 6584) = 0;
  FIELD_U32(v2, 6580) = 0;
  FIELD_U32(v2, 6600) = 0;
  FIELD_U32(v2, 6604) = 0;
  FIELD_U32(v2, 6576) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6576));
  FIELD_U32(v2, 6540) = 0;
  FIELD_U32(v2, 6536) = 0;
  FIELD_U32(v2, 6532) = 0;
  FIELD_U32(v2, 6528) = 0;
  v3 = FIELD_U32(v2, 6468);
  v4 = FIELD_U32(v2, 6464);
  FIELD_U32(v2, 6572) = v3;
  FIELD_U32(v2, 6568) = v4;
  FIELD_U32(v2, 6604) = v3;
  FIELD_U32(v2, 6600) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6160), 1, v2 + 6528, v2 + 6544, v5);
  FIELD_U32(v2, 6608) = 0;
  FIELD_U32(v2, 6612) = 0;
  FIELD_U8(v2, 6656) = 0;
  return v2;
}
