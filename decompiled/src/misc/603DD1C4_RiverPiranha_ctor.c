/* RiverPiranha_ctor
 * address: 0x603DD1C4   size: 396   group: misc
 * sym: # RiverPiranha_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RiverPiranha_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B68u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = RiverPiranha_vtable;
  memset((void *)(v2 + 6300), 0, 33);
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U32(v2, 6356) = 0;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6340) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6368));
  FIELD_U32(v2, 6368) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6472));
  FIELD_U32(v2, 6472) = off_60BC1450;
  FIELD_U32(v2, 6576) = 0;
  FIELD_U32(v2, 6580) = 0;
  FIELD_U32(v2, 6584) = 0;
  sub_602A8564((_DWORD *)(v2 + 6588), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6624), FIELD_U32(v2, 8));
  FIELD_U8(v2, 6660) = 0;
  FIELD_U8(v2, 6661) = 0;
  FIELD_U32(v2, 6664) = 0;
  FIELD_U32(v2, 6668) = 0;
  FIELD_U8(v2, 6672) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6676));
  FIELD_U32(v2, 6980) = &ActorScaler_vtable;
  FIELD_U32(v2, 6984) = 1065353216;
  FIELD_U32(v2, 6988) = 1065353216;
  FIELD_U32(v2, 6992) = 1065353216;
  FIELD_U32(v2, 6996) = 1065353216;
  FIELD_U32(v2, 7000) = 0;
  FIELD_U32(v2, 7004) = 0;
  FIELD_U32(v2, 7008) = v2;
  FIELD_U32(v2, 7012) = off_60BF8938;
  FIELD_U32(v2, 6340) = 0;
  return v2;
}
