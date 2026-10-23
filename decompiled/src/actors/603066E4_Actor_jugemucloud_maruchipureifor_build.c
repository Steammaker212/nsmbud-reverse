/* Actor_jugemucloud_maruchipureifor_build
 * address: 0x603066E4   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_jugemucloud_maruchipureifor_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B28u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE91D4;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6308));
  FIELD_U32(v2, 6308) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6412));
  FIELD_U32(v2, 6412) = off_60BC1450;
  memset((void *)(v2 + 6516), 0, 80);
  FIELD_U16(v2, 6596) = 255;
  FIELD_U8(v2, 6598) = 0;
  FIELD_U8(v2, 6608) = 0;
  FIELD_U32(v2, 6604) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6612));
  FIELD_U32(v2, 6916) = &ActorScaler_vtable;
  FIELD_U32(v2, 6920) = 1065353216;
  FIELD_U32(v2, 6924) = 1065353216;
  FIELD_U32(v2, 6928) = 1065353216;
  FIELD_U32(v2, 6932) = 1065353216;
  FIELD_U32(v2, 6936) = 0;
  FIELD_U32(v2, 6940) = 0;
  FIELD_U32(v2, 6944) = v2;
  FIELD_U32(v2, 6948) = off_60BE9488;
  FIELD_U32(v2, 6600) = 0;
  FIELD_U8(v2, 6604) = 0;
  return v2;
}
