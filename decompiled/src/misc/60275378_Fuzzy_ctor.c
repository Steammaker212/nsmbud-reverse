/* Fuzzy_ctor
 * address: 0x60275378   size: 532   group: misc
 * sym: # Fuzzy_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Fuzzy_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x3090u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = Fuzzy_vtable;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  LineFollower_ctor((LineFollower *)(v2 + 0x18AC));
  FIELD_U8(v2, 6472) = 0;
  FIELD_U32(v2, 6468) = 0;
  FIELD_U32(v2, 6464) = 0;
  FIELD_U32(v2, 6460) = 0;
  FIELD_U8(v2, 6492) = 0;
  FIELD_U32(v2, 6488) = 0;
  FIELD_U32(v2, 6484) = 0;
  FIELD_U32(v2, 6480) = 0;
  FIELD_U32(v2, 6476) = 0;
  FIELD_U8(v2, 6508) = 0;
  FIELD_U32(v2, 6504) = 0;
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6496) = 0;
  FIELD_U16(v2, 6524) = 0;
  FIELD_U16(v2, 6522) = 0;
  FIELD_U16(v2, 6520) = 0;
  FIELD_U16(v2, 6518) = 0;
  FIELD_U16(v2, 6516) = 0;
  FIELD_U16(v2, 6514) = 0;
  FIELD_U16(v2, 6512) = 0;
  FIELD_U16(v2, 6510) = 0;
  FIELD_U8(v2, 6528) = 0;
  FIELD_U16(v2, 6526) = 0;
  FIELD_U32(v2, 6544) = 0;
  FIELD_U32(v2, 6540) = 0;
  FIELD_U32(v2, 6536) = 0;
  FIELD_U32(v2, 6532) = 0;
  FIELD_U32(v2, 6548) = v2;
  FIELD_U32(v2, 6552) = off_60BE2BE4;
  FIELD_U8(v2, 6556) = 0;
  sub_602A8564(v2 + 6560, FIELD_U32(v2, 8));
  sub_602A40A0(v2 + 6596, FIELD_U32(v2, 8));
  FIELD_U32(v2, 6632) = &ActorScaler_vtable;
  FIELD_U32(v2, 6636) = 1065353216;
  FIELD_U32(v2, 6640) = 1065353216;
  FIELD_U32(v2, 6644) = 1065353216;
  FIELD_U32(v2, 6648) = 1065353216;
  FIELD_U32(v2, 6652) = 0;
  FIELD_U32(v2, 6656) = 0;
  FIELD_U32(v2, 6660) = v2;
  sub_601531B4((CollisionMgr *)(v2 + 6664));
  EffectWrapper_ctor((EffectWrapper *)(v2 + 12016));
  FIELD_U32(v2, 12016) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 12120));
  FIELD_U32(v2, 12424) = off_60BDD1A8;
  return v2;
}
