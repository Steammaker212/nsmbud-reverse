/* sub_6056539C
 * address: 0x6056539C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056539C(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 6120);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6984) + FIELD_F32(a1, 6796);
  ShapedCollider_execute(v2);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 16);
  return 1;
}
