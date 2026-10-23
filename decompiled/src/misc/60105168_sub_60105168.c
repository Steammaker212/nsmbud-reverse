/* sub_60105168
 * address: 0x60105168   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60105168(int a1)
{
  int v2; // r0
  int v3; // r0

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    sub_6063926C(a1 + 6556);
    v3 = FIELD_U32(a1, 6556);
    FIELD_U32(a1, 144) = v3;
    FIELD_U32(a1, 148) = v3;
    FIELD_U32(a1, 152) = v3;
    sub_60104BF4(a1);
    SolidOnTopCollider_execute(a1 + 6104);
  }
  return 1;
}
