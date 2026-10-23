/* Actor_guragurarock_build
 * address: 0x602C9CD0   size: 452   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_guragurarock_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  int v5; // r0

  v2 = operator_new(0x19D8u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BE58D8;
  FIELD_U32(v2, 6112) = Profile__getResArchiveById(*(Profile **)(v2 + 12), 0);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6120));
  FIELD_U32(v2, 6120) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 6488, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 6504));
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6552) = 0;
  FIELD_U32(v2, 6548) = 0;
  FIELD_U32(v2, 6544) = 0;
  FIELD_U32(v2, 6540) = 0;
  FIELD_U32(v2, 6560) = 0;
  FIELD_U32(v2, 6564) = 0;
  FIELD_U32(v2, 6536) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 6536));
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6496) = 0;
  FIELD_U32(v2, 6492) = 0;
  FIELD_U32(v2, 6488) = 0;
  v3 = FIELD_U32(v2, 6428);
  v4 = FIELD_U32(v2, 6424);
  FIELD_U32(v2, 6532) = v3;
  FIELD_U32(v2, 6528) = v4;
  FIELD_U32(v2, 6564) = v3;
  FIELD_U32(v2, 6560) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6120), 1, v2 + 6488, v2 + 6504, v5);
  FIELD_U32(v2, 6568) = 0;
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6576) = 32;
  FIELD_U32(v2, 6580) = 0x20000;
  FIELD_U32(v2, 6584) = 0x8000000;
  FIELD_U32(v2, 6588) = 0x80000;
  FIELD_U32(v2, 6592) = 0x800000;
  FIELD_U32(v2, 6596) = 0x400000;
  FIELD_U8(v2, 6600) = 0;
  FIELD_U32(v2, 6604) = 0;
  FIELD_U8(v2, 6608) = 0;
  FIELD_U8(v2, 6609) = 0;
  FIELD_U32(v2, 6612) = 0;
  return v2;
}
