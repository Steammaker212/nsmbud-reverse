/* sub_6067B124
 * address: 0x6067B124   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067B124(int a1)
{
  int v2; // r1

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_S16(a1, 8124);
  if ( v2 >= 1 )
    FIELD_U16(a1, 8124) = v2 - 1;
  sub_60645448(a1 + 7248, a1 + 108, 112.0);
  sub_605BF968(a1 + 6104);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 7504));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
