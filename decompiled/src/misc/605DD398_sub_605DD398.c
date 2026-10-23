/* sub_605DD398
 * address: 0x605DD398   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605DD398(int a1)
{
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C0B480, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 7148), (StageActor *)a1, &stru_60C0B4AC, 0);
  return ActiveCollider__init((ActiveCollider *)(a1 + 7452), (StageActor *)a1, &stru_60B05A10, 0);
}
