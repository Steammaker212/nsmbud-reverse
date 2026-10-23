/* Actor_chochin_build
 * address: 0x60273990   size: 388   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_chochin_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2E98u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDCBD8;
  FIELD_U32(v2, 6300) = LoadResource(ResourceMgrRelated_instance, &dword_60C8EC08);
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6328) = 1127809024;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6344) = 0;
  LightSource__ctor((LightSource *)(v2 + 6348));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6420));
  FIELD_U32(v2, 6420) = off_60BC1450;
  FIELD_U8(v2, 6524) = 0;
  FIELD_U32(v2, 6528) = 0;
  FIELD_U32(v2, 6532) = &ActorScaler_vtable;
  FIELD_U32(v2, 6536) = 1065353216;
  FIELD_U32(v2, 6540) = 1065353216;
  FIELD_U32(v2, 6544) = 1065353216;
  FIELD_U32(v2, 6548) = 1065353216;
  FIELD_U32(v2, 6552) = 0;
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6560) = v2;
  FIELD_U32(v2, 6564) = off_60BDCE7C;
  FIELD_U8(v2, 6568) = 0;
  sub_601531B4((CollisionMgr *)(v2 + 6576));
  return v2;
}
