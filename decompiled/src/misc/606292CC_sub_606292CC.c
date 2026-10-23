/* sub_606292CC
 * address: 0x606292CC   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606292CC(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v3; // r6

  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 0x100) != 0 )
    FIELD_U8(a1, 6152) = 1;
  if ( (v2 & 0x10000000) != 0 )
    FIELD_U8(a1, 6153) = 1;
  if ( (v2 & 0x10) != 0 )
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  sub_6062943C(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 516) = 1140850688;
  FIELD_U32(a1, 520) = 1140850688;
  FIELD_U32(a1, 524) = 1149239296;
  FIELD_U32(a1, 528) = 1149239296;
  FIELD_U32(a1, 116) = 1153138688;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C12088, a1 + 6200);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B069C4, &stru_60B069D0, &stru_60B069DC);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB3C84);
  sub_60629500(a1);
  return 1;
}
