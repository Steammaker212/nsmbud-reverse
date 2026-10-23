/* StageActor__removeActiveColliders
 * address: 0x60000968   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6027826C : Fuzzy
//   - 0x602AD664 : FireSnake
//   - 0x602D7888 : SledgeBro
//   - 0x60317698 : DryBones
//   - 0x6033D8EC : GoombaBase
//   - 0x603816C0 : Pokey
//   - 0x603E0124 : RiverPiranha
//   - 0x60624014 : FixedIcicle
//   - 0x60026498 : BossBase
ActiveColliderMgr *__fastcall StageActor__removeActiveColliders(int a1)
{
  ActiveCollider *v1; // r5
  ActiveColliderMgr *v2; // r4

  v1 = (ActiveCollider *)(a1 + 188);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v2, v1);
  return ActiveColldierMgr_removeFromList3(v2, (int)v1);
}
