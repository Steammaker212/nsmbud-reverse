/* TrampolineCloud_ctor
 * address: 0x606EDB24   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TrampolineCloud_ctor(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0

  v2 = operator_new(0x1B88u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = TrampolineCloud_vtable;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U16(v2, 6184) = 0;
  FIELD_U8(v2, 6186) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6188) = -1;
  FIELD_U32(v2, 6244) = 0;
  FIELD_U32(v2, 6248) = -1;
  EffectData_ctor((EffectData *)(v2 + 0x1830));
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 0x1870));
  FIELD_U32(v2, 0x1870) = SolidOnTopColliderWrapper_vtable;
  memset(v2 + 0x19E0, 0, 48);
  ColliderNode_ctor((ColliderNode *)(v2 + 0x19F0));
  FIELD_U32(v2, 0x1A24) = 0;
  FIELD_U32(v2, 0x1A20) = 0;
  FIELD_U32(v2, 0x1A1C) = 0;
  FIELD_U32(v2, 0x1A18) = 0;
  FIELD_U32(v2, 0x1A14) = 0;
  FIELD_U32(v2, 0x1A28) = 0;
  FIELD_U32(v2, 0x1A2C) = 0;
  FIELD_U32(v2, 0x1A10) = 0;
  ColliderNode_ctor((ColliderNode *)(v2 + 0x1A10));
  FIELD_U32(v2, 6636) = 0;
  FIELD_U32(v2, 6632) = 0;
  FIELD_U32(v2, 6628) = 0;
  FIELD_U32(v2, 6624) = 0;
  v3 = FIELD_U32(v2, 0x19A4);
  v4 = FIELD_U32(v2, 6560);
  FIELD_U32(v2, 6668) = v3;
  FIELD_U32(v2, 6664) = v4;
  FIELD_U32(v2, 0x1A2C) = v3;
  FIELD_U32(v2, 0x1A28) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 0x1870), 1, v2 + 0x19E0, v2 + 0x19F0, v5);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 0x1A30));
  FIELD_U32(v2, 7008) = &ActorScaler_vtable;
  FIELD_U32(v2, 7012) = 1065353216;
  FIELD_U32(v2, 7016) = 1065353216;
  FIELD_U32(v2, 7020) = 1065353216;
  FIELD_U32(v2, 7024) = 1065353216;
  FIELD_U32(v2, 7028) = 0;
  FIELD_U32(v2, 7032) = 0;
  FIELD_U32(v2, 7036) = v2;
  FIELD_U32(v2, 7040) = off_60C1FECC;
  return v2;
}
