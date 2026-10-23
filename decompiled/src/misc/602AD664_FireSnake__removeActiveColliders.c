/* FireSnake__removeActiveColliders
 * address: 0x602AD664   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000968
// 
// Overridden by: None
ActiveColliderMgr *__fastcall FireSnake__removeActiveColliders(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *v3; // r6
  ActiveCollider *v4; // r5
  ActiveColliderMgr *v5; // r6
  ActiveCollider *v6; // r5
  ActiveColliderMgr *v7; // r6
  ActiveCollider *v8; // r5
  ActiveColliderMgr *v9; // r5
  ActiveCollider *v10; // r4

  StageActor__removeActiveColliders(a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7328));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 7328));
  ActiveColldierMgr_removeFromList3(v2, a1 + 7328);
  v3 = ActiveColliderMgr_instance;
  v4 = (ActiveCollider *)(FIELD_U32(a1, 6800) + 28);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v4);
  ActiveColldierMgr_removeFromCreateList(v3, v4);
  ActiveColldierMgr_removeFromList3(v3, (int)v4);
  v5 = ActiveColliderMgr_instance;
  v6 = (ActiveCollider *)(FIELD_U32(a1, 6804) + 28);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v6);
  ActiveColldierMgr_removeFromCreateList(v5, v6);
  ActiveColldierMgr_removeFromList3(v5, (int)v6);
  v7 = ActiveColliderMgr_instance;
  v8 = (ActiveCollider *)(FIELD_U32(a1, 6808) + 28);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v8);
  ActiveColldierMgr_removeFromCreateList(v7, v8);
  ActiveColldierMgr_removeFromList3(v7, (int)v8);
  v9 = ActiveColliderMgr_instance;
  v10 = (ActiveCollider *)(FIELD_U32(a1, 6812) + 28);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v10);
  ActiveColldierMgr_removeFromCreateList(v9, v10);
  return ActiveColldierMgr_removeFromList3(v9, (int)v10);
}
