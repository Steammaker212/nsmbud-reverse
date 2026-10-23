/* BowserJrBase__beginState_DieFall
 * address: 0x600CFC50   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
ActiveColliderMgr *__fastcall BowserJrBase__beginState_DieFall(int a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5

  v1 = (ActiveCollider *)(a1 + 6720);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v1);
  ActiveColldierMgr_removeFromCreateList(v2, v1);
  return ActiveColldierMgr_removeFromList3(v2, (int)v1);
}
