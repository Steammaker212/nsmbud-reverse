/* sub_600D8B78
 * address: 0x600D8B78   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D8B78(int a1)
{
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCC2DC, 0);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = -1073741824;
  FIELD_U32(a1, 312) = 1097859072;
  FIELD_U32(a1, 316) = 1091567616;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1101004800;
  FIELD_U32(a1, 6844) = 1101004800;
  FIELD_U32(a1, 6848) = 1101004800;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5CBC, &stru_60AF5CC8, &stru_60AF5CD4);
}
