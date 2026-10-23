/* sub_602FEC74
 * address: 0x602FEC74   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FEC74(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE8B30;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6304));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6608));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6912));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7216));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7520));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7824));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8128));
  FIELD_U32(a1, 8484) = 0;
  memset((void *)(a1 + 8432), 0, 49);
  FIELD_U32(a1, 8488) = 18;
  FIELD_U32(a1, 8492) = 0;
  FIELD_U32(a1, 8496) = 0;
  FIELD_U32(a1, 8500) = 0;
  FIELD_U32(a1, 8504) = -1;
  FIELD_U8(a1, 8508) = 0;
  FIELD_U32(a1, 8512) = 0;
  FIELD_U32(a1, 8516) = &ActorScaler_vtable;
  FIELD_U32(a1, 8520) = 1065353216;
  FIELD_U32(a1, 8524) = 1065353216;
  FIELD_U32(a1, 8528) = 1065353216;
  FIELD_U32(a1, 8532) = 1065353216;
  FIELD_U32(a1, 8536) = 0;
  FIELD_U32(a1, 8540) = 0;
  FIELD_U32(a1, 8544) = a1;
  sub_601531B4((CollisionMgr *)(a1 + 8552));
  sub_602A8564((_DWORD *)(a1 + 13904), FIELD_U32(a1, 8));
  sub_602A40A0((_DWORD *)(a1 + 13940), FIELD_U32(a1, 8));
  FIELD_U32(a1, 13976) = off_60BE8E78;
  return a1;
}
