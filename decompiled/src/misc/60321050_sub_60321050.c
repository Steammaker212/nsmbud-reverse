/* sub_60321050
 * address: 0x60321050   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60321050(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BEAFFC;
  FIELD_U8(a1, 6320) = 0;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U16(a1, 6344) = 0;
  FIELD_U16(a1, 6342) = 0;
  FIELD_U16(a1, 6340) = 0;
  FIELD_U16(a1, 6338) = 0;
  FIELD_U16(a1, 6336) = 0;
  FIELD_U16(a1, 6334) = 0;
  FIELD_U16(a1, 6332) = 0;
  FIELD_U16(a1, 6330) = 0;
  FIELD_U16(a1, 6328) = 0;
  FIELD_U16(a1, 6326) = 0;
  FIELD_U16(a1, 6322) = 0;
  FIELD_U16(a1, 6324) = 0;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6360) = 0;
  FIELD_U32(a1, 6356) = 0;
  FIELD_U32(a1, 6352) = 0;
  FIELD_U32(a1, 6348) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6368));
  FIELD_U32(a1, 6672) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6676));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6980));
  FIELD_U32(a1, 7316) = 0;
  FIELD_U32(a1, 7312) = 0;
  FIELD_U32(a1, 7320) = 0;
  FIELD_U8(a1, 7324) = 0;
  FIELD_U32(a1, 7304) = 0;
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7296) = 0;
  FIELD_U32(a1, 7292) = 0;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7284) = 0;
  FIELD_U8(a1, 7350) = 0;
  FIELD_U16(a1, 7348) = 0;
  FIELD_U32(a1, 7344) = 0;
  FIELD_U32(a1, 7340) = 0;
  FIELD_U32(a1, 7336) = 0;
  FIELD_U32(a1, 7332) = 0;
  FIELD_U32(a1, 7328) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7352));
  FIELD_U32(a1, 7352) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7456));
  FIELD_U32(a1, 7456) = off_60BC1450;
  LightSource__ctor((LightSource *)(a1 + 7560));
  FIELD_U32(a1, 7656) = 0;
  FIELD_U32(a1, 7652) = 0;
  FIELD_U32(a1, 7648) = 0;
  FIELD_U32(a1, 7644) = 0;
  FIELD_U32(a1, 7640) = 0;
  FIELD_U32(a1, 7636) = 0;
  FIELD_U32(a1, 7632) = 0;
  sub_601531B4((CollisionMgr *)(a1 + 7664));
  FIELD_U8(a1, 13016) = 0;
  FIELD_U32(a1, 13020) = &ActorScaler_vtable;
  FIELD_U32(a1, 13024) = 1065353216;
  FIELD_U32(a1, 13028) = 1065353216;
  FIELD_U32(a1, 13032) = 1065353216;
  FIELD_U32(a1, 13036) = 1065353216;
  FIELD_U32(a1, 13040) = 0;
  FIELD_U32(a1, 13044) = 0;
  FIELD_U32(a1, 13048) = a1;
  FIELD_U32(a1, 13052) = off_60BEB368;
  return a1;
}
