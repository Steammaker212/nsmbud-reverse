/* Actor_kafugumannen_build
 * address: 0x602B62C0   size: 396   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kafugumannen_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2EC0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE3E5C;
  FIELD_U32(v2, 6300) = FIELD_U32(FIELD_U32(a1, 0xC), 0x8) == 550;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 2;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U16(v2, 6316) = 256;
  memset((void *)(v2 + 6318), 0, 0x22u);
  FIELD_U32(v2, 6352) = &ActorScaler_vtable;
  FIELD_U32(v2, 6356) = 1065353216;
  FIELD_U32(v2, 6360) = 1065353216;
  FIELD_U32(v2, 6364) = 1065353216;
  FIELD_U32(v2, 6368) = 1065353216;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U32(v2, 6376) = 0;
  FIELD_U32(v2, 6380) = v2;
  sub_601531B4((CollisionMgr *)(v2 + 6384));
  FIELD_U32(v2, 11736) = &off_60BE4100;
  FIELD_U32(v2, 11740) = 0;
  FIELD_U32(v2, 11744) = 0;
  FIELD_U32(v2, 11748) = 0;
  FIELD_U32(v2, 11752) = 0;
  FIELD_U32(v2, 11756) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 11760));
  FIELD_U32(v2, 11760) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 11864))->_.vtable = (int)off_60BC1450;
  FIELD_U32(v2, 11756) = 0;
  FIELD_U32(v2, 11752) = 0;
  FIELD_U32(v2, 11748) = 0;
  FIELD_U32(v2, 11744) = 0;
  return v2;
}
