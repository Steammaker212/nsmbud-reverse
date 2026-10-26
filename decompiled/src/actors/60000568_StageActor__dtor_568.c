/* StageActor__dtor_568
 * address: 0x60000568   size: 100   group: actors
 * sym: StageActor::~StageActor() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002E5C
// 
// Overridden by:
//   - 0x60003FC4 : CollisionActor
void __fastcall StageActor__dtor_568(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = &StageActor__vtable;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  ActiveCollider_dtor(v2);
  v4 = Actor__dtor((Actor *)a1);
  operator_delete(v4);
}
