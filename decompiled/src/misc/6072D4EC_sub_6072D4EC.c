/* sub_6072D4EC
 * address: 0x6072D4EC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6072D4EC(int a1)
{
  unsigned int v2; // r1
  char v3; // r2
  ActiveColliderMgr *v4; // r6

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 80) = (v2 >> 8) & 0xF;
  v3 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
    v3 = 1;
  FIELD_U8(a1, 6106) = v3;
  if ( (v2 & 0xF0) == 0 )
  {
    if ( (v2 & 0xF) != 0 )
      FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + -32.0;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C22320, 0);
    v4 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
    }
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B0A268, 0, 0);
  }
  FIELD_U32(a1, 6108) = 1056964608;
  FIELD_U32(a1, 144) = 1056964608;
  FIELD_U32(a1, 148) = 1056964608;
  FIELD_U32(a1, 152) = 1056964608;
  sub_6072D610(a1);
  sub_6072D6FC(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBD9C4);
  return 1;
}
