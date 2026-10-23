/* Actor_akoya_build
 * address: 0x60591B58   size: 444   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_akoya_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2068u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0746C;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6188) = 0;
  FIELD_U32(v2, 6200) = 0;
  FIELD_U32(v2, 6212) = 0;
  FIELD_U32(v2, 6224) = 0;
  FIELD_U32(v2, 6236) = 0;
  FIELD_U32(v2, 6248) = 0;
  FIELD_U32(v2, 6260) = 0;
  FIELD_U32(v2, 6272) = 0;
  FIELD_U32(v2, 6284) = 0;
  sub_6012B2C0(v2 + 6288);
  RectCollider_ctor((RectCollider *)(v2 + 7088));
  FIELD_U32(v2, 7088) = off_60BC30D8;
  FIELD_U32(v2, 7744) = 0;
  FIELD_U32(v2, 7752) = 0;
  LightMask__ctor((RevealMaskRelated *)(v2 + 7760));
  memset((void *)(v2 + 7800), 0, 40);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7840));
  FIELD_U8(v2, 8160) = 0;
  FIELD_U8(v2, 8161) = 0;
  FIELD_U32(v2, 8164) = 0;
  FIELD_U32(v2, 8168) = 0;
  FIELD_U32(v2, 8172) = 0;
  FIELD_U32(v2, 8176) = 1065353216;
  FIELD_U32(v2, 8180) = 0;
  FIELD_U8(v2, 8184) = 0;
  memset((void *)(v2 + 8188), 0, 33);
  sub_6000BAC8((_DWORD *)(v2 + 8224), FIELD_U32(v2, 8));
  FIELD_U32(v2, 8260) = &ActorScaler_vtable;
  FIELD_U32(v2, 8264) = 1065353216;
  FIELD_U32(v2, 8268) = 1065353216;
  FIELD_U32(v2, 8272) = 1065353216;
  FIELD_U32(v2, 8276) = 1065353216;
  FIELD_U32(v2, 8280) = 0;
  FIELD_U32(v2, 8284) = 0;
  FIELD_U32(v2, 8288) = v2;
  FIELD_U32(v2, 8292) = off_60C07590;
  return v2;
}
