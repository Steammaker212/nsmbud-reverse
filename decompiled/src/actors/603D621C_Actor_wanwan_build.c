/* Actor_wanwan_build
 * address: 0x603D621C   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_wanwan_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x4948u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF8154;
  sub_601531B4((CollisionMgr *)(v2 + 6376));
  memset((void *)(v2 + 11728), 0, 85);
  FIELD_U8(v2, 11813) = 1;
  FIELD_U16(v2, 11814) = 0;
  FIELD_U8(v2, 11820) = 0;
  FIELD_U16(v2, 11818) = 0;
  FIELD_U16(v2, 11816) = 0;
  memset(v2 + 11824, 0, 48);
  Actor_wanwan_build_helper(v2 + 11872, v2);
  ActorCollisionMgr_ctor((CollisionMgr *)(v2 + 12960));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 18312));
  FIELD_U32(v2, 18616) = &ActorScaler_vtable;
  FIELD_U32(v2, 18620) = 1065353216;
  FIELD_U32(v2, 18624) = 1065353216;
  FIELD_U32(v2, 18628) = 1065353216;
  FIELD_U32(v2, 18632) = 1065353216;
  FIELD_U32(v2, 18636) = 0;
  FIELD_U32(v2, 18640) = 0;
  FIELD_U32(v2, 18644) = v2;
  FIELD_U32(v2, 18648) = off_60BF8408;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 18652));
  FIELD_U32(v2, 18652) = off_60BC1450;
  return v2;
}
