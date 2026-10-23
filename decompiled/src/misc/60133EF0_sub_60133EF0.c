/* sub_60133EF0
 * address: 0x60133EF0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60133EF0(int a1, ActorBuildInfo *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60BD2120;
  FIELD_U8(a1, 6100) = 0;
  FIELD_U32(a1, 6108) = 0;
  FIELD_U32(a1, 6104) = 0;
  FIELD_U32(a1, 6128) = 0;
  FIELD_U32(a1, 6124) = 0;
  FIELD_U32(a1, 6120) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6112) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6132));
  FIELD_U32(a1, 6436) = off_60BD20F0;
  FIELD_U32(a1, 6440) = &ActorScaler_vtable;
  FIELD_U32(a1, 6444) = 1065353216;
  FIELD_U32(a1, 6448) = 1065353216;
  FIELD_U32(a1, 6452) = 1065353216;
  FIELD_U32(a1, 6456) = 1065353216;
  FIELD_U32(a1, 6460) = 0;
  FIELD_U32(a1, 6464) = 0;
  FIELD_U32(a1, 6468) = a1;
  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6120) = 0;
  *(_DWORD *)a1 = off_60BD1F58;
  FIELD_U8(a1, 6476) = 0;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6512) = 0;
  FIELD_U32(a1, 6516) = 0;
  FIELD_U32(a1, 6520) = 0;
  FIELD_U8(a1, 6592) = 0;
  FIELD_U32(a1, 6588) = 0;
  FIELD_U32(a1, 6584) = 0;
  FIELD_U32(a1, 6580) = 0;
  sub_601531B4((_DWORD *)(a1 + 6600));
  FIELD_U32(a1, 11956) = off_60BD1F28;
  FIELD_U32(a1, 6480) = 0;
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6524) = 0;
  FIELD_U32(a1, 6528) = 0;
  FIELD_U32(a1, 6532) = 0;
  v3 = (_DWORD *)operator_new(0x28u);
  v4 = sub_6000BAC8(v3, FIELD_U32(a1, 8));
  v4[9] = a1;
  *v4 = off_60BD1EC8;
  FIELD_U32(a1, 6124) = v4;
  v5 = (_DWORD *)operator_new(0x28u);
  v6 = sub_6000B63C(v5, FIELD_U32(a1, 8));
  v6[9] = a1;
  *v6 = off_60BD1F00;
  FIELD_U32(a1, 6128) = v6;
  return a1;
}
