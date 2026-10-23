/* sub_60569DB4
 * address: 0x60569DB4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60569DB4(int a1)
{
  ColliderBase *v2; // r5
  int v3; // r1

  if ( FIELD_U8(a1, 7312) )
  {
    v2 = (ColliderBase *)(a1 + 6120);
    if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
      ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  }
  else
  {
    v2 = (ColliderBase *)(a1 + 6120);
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v3 = dword_60CC6484;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 7388) + FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(a1, 112) = (float)(FIELD_F32(a1, 7392) + FIELD_F32(v3, 124)) + FIELD_F32(a1, 6796);
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute(v2);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
