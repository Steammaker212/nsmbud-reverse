/* Actor_Blooper_build
 * address: 0x602BD368   size: 336   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Blooper_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x3038u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE4C68;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6356) = 0;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6344) = 0;
  memset((void *)(v2 + 6408), 0, 79);
  FIELD_U32(v2, 6504) = 0;
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6496) = 0;
  FIELD_U32(v2, 6492) = 0;
  FIELD_U32(v2, 6488) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6508));
  FIELD_U32(v2, 6508) = off_60BC1450;
  FIELD_U32(v2, 6612) = &ActorScaler_vtable;
  FIELD_U32(v2, 6616) = 1065353216;
  FIELD_U32(v2, 6620) = 1065353216;
  FIELD_U32(v2, 6624) = 1065353216;
  FIELD_U32(v2, 6628) = 1065353216;
  FIELD_U32(v2, 6632) = 0;
  FIELD_U32(v2, 6636) = 0;
  FIELD_U32(v2, 6640) = v2;
  sub_602A40A0((_DWORD *)(v2 + 6644), FIELD_U32(v2, 8));
  sub_601531B4((CollisionMgr *)(v2 + 6680));
  FIELD_U32(v2, 12032) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 12036));
  FIELD_U32(v2, 12340) = off_60BE4F18;
  return v2;
}
