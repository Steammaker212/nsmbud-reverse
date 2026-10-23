/* LavaGeyser_ctor
 * address: 0x6070BA1C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1D88u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = &LavaGeyser_vtable;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6348) = 0;
  memset((void *)(v2 + 6300), 0, 40);
  FIELD_U32(v2, 6352) = 1005961871;
  FIELD_U32(v2, 6356) = 961656599;
  FIELD_U32(v2, 6360) = 1015759766;
  FIELD_U32(v2, 6364) = 966609234;
  FIELD_U32(v2, 6368) = 1034147594;
  FIELD_U32(v2, 6372) = 974997842;
  FIELD_U32(v2, 6376) = 1058642330;
  FIELD_U32(v2, 6380) = 150;
  FIELD_U32(v2, 6384) = 180;
  FIELD_U32(v2, 6388) = 240;
  FIELD_U32(v2, 6392) = 1043878380;
  FIELD_U32(v2, 6396) = 1068289229;
  FIELD_U8(v2, 6400) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6404));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6708));
  FIELD_U32(v2, 7032) = 0;
  FIELD_U32(v2, 7028) = 0;
  FIELD_U32(v2, 7024) = 0;
  FIELD_U32(v2, 7020) = 0;
  FIELD_U32(v2, 7012) = 0;
  FIELD_U32(v2, 7016) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7036));
  FIELD_U32(v2, 7036) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7140));
  FIELD_U32(v2, 7140) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7244));
  FIELD_U32(v2, 7244) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7348));
  FIELD_U32(v2, 7348) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7452));
  FIELD_U32(v2, 7452) = off_60BC1450;
  return v2;
}
