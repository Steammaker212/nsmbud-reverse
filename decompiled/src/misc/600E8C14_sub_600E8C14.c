/* sub_600E8C14
 * address: 0x600E8C14   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E8C14(int a1)
{
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCE290, 0);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1065353216;
  FIELD_U32(a1, 312) = 1097859072;
  FIELD_U32(a1, 316) = 1097859072;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1103101952;
  FIELD_U32(a1, 6844) = 1101004800;
  FIELD_U32(a1, 6848) = 1103101952;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5EEC, &stru_60AF5EF8, &stru_60AF5F04);
}
