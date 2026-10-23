/* sub_6061FF4C
 * address: 0x6061FF4C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6061FF4C(_DWORD *a1)
{
  int v2; // r1
  ActiveCollider *v3; // r0

  a1[125] = 1115684864;
  a1[126] = 1137180672;
  v2 = a1[1670];
  v3 = (ActiveCollider *)(a1 + 47);
  if ( v2 )
  {
    ActiveCollider__init(v3, (StageActor *)a1, (ActiveColliderInfo *)&unk_60C11358, 0);
    a1[87] = -1056964608;
    a1[88] = 1090519040;
    a1[89] = -1082130432;
    a1[90] = 1065353216;
    ActiveCollider__init((ActiveCollider *)(a1 + 1583), (StageActor *)a1, &stru_60B06824, (int)(a1 + 1659));
    a1[1623] = -1056964608;
    a1[1624] = 1090519040;
    a1[1625] = -1082130432;
    a1[1626] = 1065353216;
    CollisionMgr_init((CollisionMgr *)(a1 + 162), (StateActor *)a1, &stru_60B06850, 0, 0);
  }
  else
  {
    ActiveCollider__init(v3, (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1132C, 0);
    a1[87] = -1056964608;
    a1[88] = 1090519040;
    a1[89] = -1082130432;
    a1[90] = 1065353216;
    ActiveCollider__init((ActiveCollider *)(a1 + 1583), (StageActor *)a1, &stru_60B067EC, (int)(a1 + 1659));
    a1[1623] = -1056964608;
    a1[1624] = 1090519040;
    a1[1625] = -1082130432;
    a1[1626] = 1065353216;
    CollisionMgr_init((CollisionMgr *)(a1 + 162), (StateActor *)a1, &stru_60B06818, 0, 0);
  }
}
