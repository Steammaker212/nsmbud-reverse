/* Actor_baburu_RDash_build_helper
 * address: 0x6026819C   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_baburu_RDash_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BDBC54;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = &ActorScaler_vtable;
  FIELD_U32(a1, 6316) = 1065353216;
  FIELD_U32(a1, 6320) = 1065353216;
  FIELD_U32(a1, 6324) = 1065353216;
  FIELD_U32(a1, 6328) = 1065353216;
  FIELD_U32(a1, 6332) = 0;
  FIELD_U32(a1, 6336) = 0;
  FIELD_U32(a1, 6340) = a1;
  sub_602A8564(a1 + 6344, FIELD_U32(a1, 8));
  FIELD_U32(a1, 6344) = off_60BDBF00;
  FIELD_U32(a1, 6380) = a1;
  sub_602A40A0(a1 + 6384, FIELD_U32(a1, 8));
  FIELD_U32(a1, 6384) = off_60BDBF34;
  FIELD_U32(a1, 6420) = a1;
  FIELD_U32(a1, 6424) = off_60BDBF58;
  FIELD_U8(a1, 6428) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6432));
  LightSource__ctor((LightSource *)(a1 + 6736));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6808));
  FIELD_U32(a1, 6808) = off_60BC1450;
  memset((void *)(a1 + 6912), 0, 64);
  return a1;
}
