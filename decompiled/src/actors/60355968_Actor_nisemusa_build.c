/* Actor_nisemusa_build
 * address: 0x60355968   size: 432   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_nisemusa_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AA0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEEC40;
  FIELD_U32(v2, 6300) = 2;
  FIELD_U32(v2, 6304) = 2;
  FIELD_U8(v2, 6308) = 0;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U8(v2, 6328) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  sub_602A8564((_DWORD *)(v2 + 6336), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6372), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6408) = off_60BEEEE8;
  FIELD_U32(v2, 6412) = LoadResource(ResourceMgrRelated_instance, &dword_60C95254);
  FIELD_U16(v2, 6416) = 0;
  FIELD_U16(v2, 6432) = 0;
  FIELD_U32(v2, 6428) = 0;
  FIELD_U32(v2, 6424) = 0;
  FIELD_U32(v2, 6420) = 0;
  FIELD_U8(v2, 6460) = 0;
  FIELD_U32(v2, 6456) = 0;
  FIELD_U32(v2, 6452) = 0;
  FIELD_U32(v2, 6448) = 0;
  FIELD_U32(v2, 6444) = 0;
  FIELD_U32(v2, 6440) = 0;
  FIELD_U32(v2, 6436) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6464));
  FIELD_U32(v2, 6780) = 0;
  FIELD_U32(v2, 6776) = 0;
  FIELD_U32(v2, 6772) = 0;
  FIELD_U32(v2, 6768) = 0;
  FIELD_U32(v2, 6784) = &ActorScaler_vtable;
  FIELD_U32(v2, 6788) = 1065353216;
  FIELD_U32(v2, 6792) = 1065353216;
  FIELD_U32(v2, 6796) = 1065353216;
  FIELD_U32(v2, 6800) = 1065353216;
  FIELD_U32(v2, 6804) = 0;
  FIELD_U32(v2, 6808) = 0;
  FIELD_U32(v2, 6812) = v2;
  return v2;
}
