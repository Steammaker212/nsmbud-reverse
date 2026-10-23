/* FireballBase_removeActiveColliders
 * address: 0x601361B0   size: 72   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall FireballBase_removeActiveColliders(ActiveCollider *a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5

  v1 = a1;
  StageActor__removeActiveColliders((int)a1);
  v1 = (ActiveCollider *)((char *)v1 + 6436);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v1);
  ActiveColldierMgr_removeFromCreateList(v2, v1);
  return ActiveColldierMgr_removeFromList3(v2, (int)v1);
}
