/* sub_600E1E98
 * address: 0x600E1E98   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E1E98(int a1)
{
  StateMgr *v2; // r0
  StateBase *v3; // r1
  int v4; // r2
  ActiveColliderMgr *v5; // r6
  ActiveCollider *v6; // r5
  ActiveCollider *v7; // r1
  ActiveColliderMgr *v8; // r4

  sub_600E29D0(a1);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    v2 = (StateMgr *)(a1 + 6084);
    v3 = (StateBase *)&unk_60C84D4C;
  }
  else
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
    v2 = (StateMgr *)(a1 + 6084);
    v3 = (StateBase *)&dword_60C84D2C;
  }
  StateMgr__changeState(v2, v3);
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3192) |= 0x10000800u;
  v4 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  FIELD_U32(a1, 3184) = v4 | 0x10000800;
  ActiveCollider__init((ActiveCollider *)(a1 + 6556), (StageActor *)a1, &stru_60AF5DE8, a1 + 6860);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6556))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6556)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6556));
  }
  v6 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCCB6C, 0);
  v7 = (ActiveCollider *)(a1 + 188);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v7) && !ActiveColliderMgr_isInCreateList(v8, v6) )
    ActiveColliderMgr_addToCreateList(v8, v6);
  return 1;
}
