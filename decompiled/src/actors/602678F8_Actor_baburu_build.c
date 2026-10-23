/* Actor_baburu_build
 * address: 0x602678F8   size: 332   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_baburu_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B40u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDBC54;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6312) = &ActorScaler_vtable;
  FIELD_U32(v2, 6316) = 1065353216;
  FIELD_U32(v2, 6320) = 1065353216;
  FIELD_U32(v2, 6324) = 1065353216;
  FIELD_U32(v2, 6328) = 1065353216;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6340) = v2;
  sub_602A8564(v2 + 6344, FIELD_U32(v2, 8));
  FIELD_U32(v2, 6344) = off_60BDBF00;
  FIELD_U32(v2, 6380) = v2;
  sub_602A40A0(v2 + 6384, FIELD_U32(v2, 8));
  FIELD_U32(v2, 6384) = off_60BDBF34;
  FIELD_U32(v2, 6420) = v2;
  FIELD_U32(v2, 6424) = off_60BDBF58;
  FIELD_U8(v2, 6428) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6432));
  LightSource__ctor((LightSource *)(v2 + 6736));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6808));
  FIELD_U32(v2, 6808) = off_60BC1450;
  memset((void *)(v2 + 6912), 0, 64);
  return v2;
}
