/* sub_60745114
 * address: 0x60745114   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60745114(int a1)
{
  if ( FIELD_U32(a1, 56) )
    sub_6074CA64();
  balloon_back_ref_2(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C232F0, a1 + 848);
  StateMgr__changeState((StateMgr *)(a1 + 872), (StateBase *)&dword_60CBE440);
  sub_60745580(a1);
  return 1;
}
