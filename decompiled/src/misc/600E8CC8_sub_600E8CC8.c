/* sub_600E8CC8
 * address: 0x600E8CC8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E8CC8(int a1)
{
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCE2BC, 0);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1091567616;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1094713344;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1092616192;
  FIELD_U32(a1, 6844) = 1096810496;
  FIELD_U32(a1, 6848) = 1094713344;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5F10, &stru_60AF5F1C, &stru_60AF5F28);
}
