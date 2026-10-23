/* Actor_Bowser_2_build
 * address: 0x6029F104   size: 228   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Bowser_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19B8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE2120;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6316));
  FIELD_U32(v2, 6316) = off_60BC1450;
  memset((void *)(v2 + 6420), 0, 52);
  FIELD_U8(v2, 6472) = 1;
  LightSource__ctor((LightSource *)(v2 + 6476));
  FIELD_U32(v2, 6548) = &ActorScaler_vtable;
  FIELD_U32(v2, 6552) = 1065353216;
  FIELD_U32(v2, 6556) = 1065353216;
  FIELD_U32(v2, 6560) = 1065353216;
  FIELD_U32(v2, 6564) = 1065353216;
  FIELD_U32(v2, 6568) = 0;
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6576) = v2;
  FIELD_U32(v2, 6580) = off_60BE23C4;
  return v2;
}
