/* Actor_Blooper_raki_build_helper
 * address: 0x602C1320   size: 320   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Blooper_raki_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE4C68;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6356) = 0;
  FIELD_U32(a1, 6352) = 0;
  FIELD_U32(a1, 6348) = 0;
  FIELD_U32(a1, 6344) = 0;
  memset((void *)(a1 + 6408), 0, 79);
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6488) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6508));
  FIELD_U32(a1, 6508) = off_60BC1450;
  FIELD_U32(a1, 6612) = &ActorScaler_vtable;
  FIELD_U32(a1, 6616) = 1065353216;
  FIELD_U32(a1, 6620) = 1065353216;
  FIELD_U32(a1, 6624) = 1065353216;
  FIELD_U32(a1, 6628) = 1065353216;
  FIELD_U32(a1, 6632) = 0;
  FIELD_U32(a1, 6636) = 0;
  FIELD_U32(a1, 6640) = a1;
  sub_602A40A0((_DWORD *)(a1 + 6644), FIELD_U32(a1, 8));
  sub_601531B4((CollisionMgr *)(a1 + 6680));
  FIELD_U32(a1, 12032) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12036));
  FIELD_U32(a1, 12340) = off_60BE4F18;
  return a1;
}
