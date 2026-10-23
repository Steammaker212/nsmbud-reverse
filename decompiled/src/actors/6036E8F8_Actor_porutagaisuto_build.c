/* Actor_porutagaisuto_build
 * address: 0x6036E8F8   size: 320   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_porutagaisuto_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B68u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF057C;
  memset((void *)(v2 + 6308), 0, 53);
  FIELD_U16(v2, 6362) = 0;
  FIELD_U8(v2, 6366) = 0;
  FIELD_U16(v2, 6364) = 0;
  FIELD_U8(v2, 6388) = 0;
  FIELD_U32(v2, 6384) = 0;
  FIELD_U32(v2, 6380) = 0;
  FIELD_U32(v2, 6376) = 0;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U32(v2, 6368) = 0;
  LightSource__ctor((LightSource *)(v2 + 6392));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6464));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6768));
  FIELD_U32(v2, 6768) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6872));
  FIELD_U32(v2, 6872) = off_60BC1450;
  FIELD_U8(v2, 6976) = 0;
  FIELD_U32(v2, 6980) = &ActorScaler_vtable;
  FIELD_U32(v2, 6984) = 1065353216;
  FIELD_U32(v2, 6988) = 1065353216;
  FIELD_U32(v2, 6992) = 1065353216;
  FIELD_U32(v2, 6996) = 1065353216;
  FIELD_U32(v2, 7000) = 0;
  FIELD_U32(v2, 7004) = 0;
  FIELD_U32(v2, 7008) = v2;
  FIELD_U32(v2, 7012) = off_60BF0868;
  return v2;
}
