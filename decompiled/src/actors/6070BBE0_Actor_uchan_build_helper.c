/* Actor_uchan_build_helper
 * address: 0x6070BBE0   size: 428   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_uchan_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = &LavaGeyser_vtable;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6348) = 0;
  memset((void *)(a1 + 6300), 0, 40);
  FIELD_U32(a1, 6352) = 1005961871;
  FIELD_U32(a1, 6356) = 961656599;
  FIELD_U32(a1, 6360) = 1015759766;
  FIELD_U32(a1, 6364) = 966609234;
  FIELD_U32(a1, 6368) = 1034147594;
  FIELD_U32(a1, 6372) = 974997842;
  FIELD_U32(a1, 6376) = 1058642330;
  FIELD_U32(a1, 6380) = 150;
  FIELD_U32(a1, 6384) = 180;
  FIELD_U32(a1, 6388) = 240;
  FIELD_U32(a1, 6392) = 1043878380;
  FIELD_U32(a1, 6396) = 1068289229;
  FIELD_U8(a1, 6400) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6404));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6708));
  FIELD_U32(a1, 7032) = 0;
  FIELD_U32(a1, 7028) = 0;
  FIELD_U32(a1, 7024) = 0;
  FIELD_U32(a1, 7020) = 0;
  FIELD_U32(a1, 7012) = 0;
  FIELD_U32(a1, 7016) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7036));
  FIELD_U32(a1, 7036) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7140));
  FIELD_U32(a1, 7140) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7244));
  FIELD_U32(a1, 7244) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7348));
  FIELD_U32(a1, 7348) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7452));
  FIELD_U32(a1, 7452) = off_60BC1450;
  return a1;
}
