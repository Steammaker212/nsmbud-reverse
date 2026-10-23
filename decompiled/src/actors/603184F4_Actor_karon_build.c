/* Actor_karon_build
 * address: 0x603184F4   size: 328   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_karon_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AD8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEA3D8;
  FIELD_U32(v2, 6408) = 0;
  FIELD_U8(v2, 6412) = 0;
  memset((void *)(v2 + 6300), 0, 36);
  FIELD_U8(v2, 6404) = 0;
  FIELD_U32(v2, 6400) = 0;
  FIELD_U32(v2, 6396) = 0;
  FIELD_U32(v2, 6392) = 0;
  FIELD_U32(v2, 6388) = 0;
  FIELD_U32(v2, 6384) = 0;
  FIELD_U16(v2, 6428) = 0;
  FIELD_U32(v2, 6424) = 0;
  FIELD_U32(v2, 6420) = 0;
  FIELD_U32(v2, 6416) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6432));
  sub_6000BAC8((_DWORD *)(v2 + 6736), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6772) = &ActorScaler_vtable;
  FIELD_U32(v2, 6776) = 1065353216;
  FIELD_U32(v2, 6780) = 1065353216;
  FIELD_U32(v2, 6784) = 1065353216;
  FIELD_U32(v2, 6788) = 1065353216;
  FIELD_U32(v2, 6792) = 0;
  FIELD_U32(v2, 6796) = 0;
  FIELD_U32(v2, 6800) = v2;
  FIELD_U32(v2, 6804) = off_60BEA650;
  FIELD_U32(v2, 6860) = 0;
  FIELD_U32(v2, 6864) = -1;
  EffectData_ctor((EffectData *)(v2 + 6808));
  return v2;
}
