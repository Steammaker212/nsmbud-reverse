/* sub_602527EC
 * address: 0x602527EC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602527EC(int a1)
{
  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U8(a1, 536) && sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  ActorScaler_execute((ActorScaler *)(a1 + 6776));
  sub_6025261C(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_60003840(a1);
  return 1;
}
