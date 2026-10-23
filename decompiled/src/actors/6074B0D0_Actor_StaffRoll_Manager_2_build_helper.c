/* Actor_StaffRoll_Manager_2_build_helper
 * address: 0x6074B0D0   size: 416   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_StaffRoll_Manager_2_build_helper(StageActor *a1, ActorBuildInfo *a2)
{
  StageActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C23910;
  a1[1]._.settings1 = 0;
  *(_DWORD *)&a1[1]._.field_10 = 0;
  a1[1]._.profile = 0;
  a1[1]._.id = 0;
  a1[1]._.heap = 0;
  a1[1]._.vtable = 0;
  *(_DWORD *)&a1[1]._.movementId = (char *)a1 + 680;
  a1[1]._.settigns2 = (int)&off_60BFCA1C;
  a1[1]._.field_20.previous = (sead_ListNode *)128;
  sub_608FDDB4(&a1[1]._.settigns2);
  **(_WORD **)&a1[1]._.movementId = 0;
  a1[1]._.settigns2 = (int)&off_60BFD314;
  LOBYTE(a1[1].aCollider.info.distToCenter.y) = 0;
  a1[1].aCollider.field_68 = 0;
  *(_DWORD *)&a1[1].aCollider.field_6C = 0;
  a1[1].aCollider.field_70 = 0;
  a1[1].aCollider.info.distToCenter.x = 0.0;
  memset(&a1[1].aCollider.info.category, 0, 96);
  LODWORD(a1[1].aCollider.info.distToEdge.x) = &a1[1].aCollider.info.category;
  LODWORD(a1[1].aCollider.info.distToEdge.y) = 24;
  a1[1].aCollider.info.field_10 = 0;
  a1[1].aCollider.info.field_14 = 0;
  memset(&a1[1].aCollider.field_FC, 0, 96);
  a1[1].aCollider.field_EC = (int)&a1[1].aCollider.field_FC;
  a1[1].aCollider.field_F8 = 0;
  a1[1].aCollider.field_F4 = 0;
  a1[1].aCollider.field_F0 = 24;
  *(_DWORD *)&a1[1].field_228 = 0;
  a1[1].field_224 = 0;
  a1[1].field_220 = 0;
  *(_DWORD *)&a1[1].eventId2 = 0;
  *(_DWORD *)&a1[1].field_218 = 0;
  a1[1].field_234 = 0;
  a1[1].field_230 = 0;
  a1[1].field_22C = 0;
  LOBYTE(a1[1].profileFlags) = 0;
  a1[1].effectOffset.x = 0.0;
  LODWORD(a1[1].effectOffset.y) = &off_60C239C8;
  LODWORD(a1[1].effectOffset.z) = &off_60C239D8;
  LODWORD(a1[1].field_248.x) = &off_60C239FC;
  LODWORD(a1[1].field_248.y) = a1;
  a1[1].field_248.z = 0.0;
  StateMgr_ctor((StateMgr *)&a1[1].field_254, (StateExecuter *)&a1[1].effectOffset.z, &NullState);
  LODWORD(a1[1].effectOffset.y) = &off_60C239B8;
  a1[1]._.profile = 0;
  *(_DWORD *)&a1[1]._.field_10 = 0;
  a1[1].aCollider.info.field_14 = 0;
  a1[1].aCollider.info.field_10 = 0;
  a1[1].aCollider.field_F8 = 0;
  a1[1].aCollider.field_F4 = 0;
  a1[1].effectOffset.x = 0.0;
  return a1;
}
