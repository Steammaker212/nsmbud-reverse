/* sub_600D8C28
 * address: 0x600D8C28   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D8C28(int a1)
{
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCC308, 0);
  FIELD_U64(a1, 304) = *(_QWORD *)&dword_60C84750;
  FIELD_U32(a1, 312) = 1090519040;
  FIELD_U32(a1, 316) = 1090519040;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1092616192;
  FIELD_U32(a1, 6844) = 1094713344;
  FIELD_U32(a1, 6848) = 1092616192;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5CE0, &stru_60AF5CEC, &stru_60AF5CF8);
}
