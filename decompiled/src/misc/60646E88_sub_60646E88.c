/* sub_60646E88
 * address: 0x60646E88   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60646E88(int a1)
{
  int v2; // r0

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    ShapedCollider_execute((ColliderBase *)(a1 + 6360));
    sub_60645448(a1 + 6104, a1 + 108, FIELD_F32(a1, 7072) + FIELD_F32(a1, 7072));
  }
  return 1;
}
