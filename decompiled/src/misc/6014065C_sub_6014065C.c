/* sub_6014065C
 * address: 0x6014065C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014065C(int a1, ActorBuildInfo *a2)
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
  *(_DWORD *)a1 = off_60BD32B4;
  sub_601531B4((_DWORD *)(a1 + 6472));
  FIELD_U32(a1, 11824) = 0;
  FIELD_U32(a1, 11840) = 0;
  FIELD_U8(a1, 11844) = 0;
  FIELD_U8(a1, 11845) = 0;
  FIELD_U32(a1, 11848) = 0;
  FIELD_U32(a1, 11896) = 0;
  FIELD_U32(a1, 11904) = off_60BD3284;
  v3 = (_DWORD *)operator_new(0x28u);
  v4 = sub_6000BAC8(v3, FIELD_U32(a1, 8));
  v4[9] = a1;
  *v4 = off_60BD3224;
  FIELD_U32(a1, 6124) = v4;
  v5 = (_DWORD *)operator_new(0x28u);
  v6 = sub_6000B63C(v5, FIELD_U32(a1, 8));
  v6[9] = a1;
  *v6 = off_60BD325C;
  FIELD_U32(a1, 6128) = v6;
  FIELD_U32(a1, 11828) = 0;
  FIELD_U32(a1, 11832) = 0;
  FIELD_U32(a1, 11836) = 0;
  return a1;
}
