/* MegaHammer__ctor
 * address: 0x60144B24   size: 424   group: misc
 * sym: MegaHammer::MegaHammer(ActorBuildInfo const*) as C3
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MegaHammer__ctor(ActorBuildInfo *a1)
{
  int v2; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v2 = operator_new(0x2E48u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BD2120;
  FIELD_U8(v2, 6100) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6128) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6112) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6132));
  FIELD_U32(v2, 6436) = off_60BD20F0;
  FIELD_U32(v2, 6440) = &ActorScaler_vtable;
  FIELD_U32(v2, 6444) = 1065353216;
  FIELD_U32(v2, 6448) = 1065353216;
  FIELD_U32(v2, 6452) = 1065353216;
  FIELD_U32(v2, 6456) = 1065353216;
  FIELD_U32(v2, 6460) = 0;
  FIELD_U32(v2, 6464) = 0;
  FIELD_U32(v2, 6468) = v2;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6120) = 0;
  *(_DWORD *)v2 = off_60BD3AC8;
  FIELD_U32(v2, 6484) = 0;
  FIELD_U16(v2, 6480) = 0;
  FIELD_U32(v2, 6476) = 0;
  FIELD_U32(v2, 6472) = 0;
  sub_601531B4((_DWORD *)(v2 + 6488));
  FIELD_U32(v2, 11840) = off_60BD3A98;
  v3 = (_DWORD *)operator_new(0x28u);
  v4 = sub_6000BAC8(v3, FIELD_U32(v2, 8));
  v4[9] = v2;
  FIELD_U32(v2, 6124) = v4;
  *v4 = off_60BD3A38;
  v5 = (_DWORD *)operator_new(0x28u);
  v6 = sub_6000B63C(v5, FIELD_U32(v2, 8));
  v6[9] = v2;
  FIELD_U32(v2, 6128) = v6;
  *v6 = off_60BD3A70;
  return v2;
}
