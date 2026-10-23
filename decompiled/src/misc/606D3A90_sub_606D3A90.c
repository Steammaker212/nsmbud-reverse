/* sub_606D3A90
 * address: 0x606D3A90   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D3A90(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 6120);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  BlockBase__vf174(a1);
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute(v2);
  SE_OBJ_ROULETTE_BLOCK_ROLL_ref(a1);
  ActorScaler_execute((ActorScaler *)(a1 + 7416));
  sub_606D38D0(a1);
  sub_605B2D70(a1);
  return 1;
}
