/* sub_605EBB58
 * address: 0x605EBB58   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EBB58(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1

  v4 = FIELD_U16(a1, 6592);
  v2 = (_WORD *)(a1 + 6592);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6104));
  sub_605EC218(a1);
  sub_605EC37C(a1);
  return 1;
}
