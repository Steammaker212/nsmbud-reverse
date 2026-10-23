/* Actor_Wrench_build
 * address: 0x60148FAC   size: 372   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Wrench_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2ED0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BD2120;
  FIELD_U8(v2, 6100) = 0;
  FIELD_U32(v2, 6128) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6112) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6132));
  FIELD_U32(v2, 6436) = off_60BD20F0;
  FIELD_U32(v2, 6440) = &ActorScaler_vtable;
  FIELD_U32(v2, 6444) = 1065353216;
  FIELD_U32(v2, 6448) = 1065353216;
  FIELD_U32(v2, 6452) = 1065353216;
  FIELD_U32(v2, 6456) = 1065353216;
  FIELD_U32(v2, 6460) = 0;
  FIELD_U32(v2, 6464) = 0;
  FIELD_U32(v2, 6468) = v2;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6120) = 0;
  *(_DWORD *)v2 = off_60BD41F8;
  sub_601531B4((_DWORD *)(v2 + 6480));
  FIELD_U32(v2, 11868) = 0;
  FIELD_U32(v2, 11872) = 0;
  memset((void *)(v2 + 11832), 0, 34);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 11876));
  FIELD_U32(v2, 11876) = off_60BC1450;
  FIELD_U32(v2, 11980) = off_60BD4390;
  return v2;
}
