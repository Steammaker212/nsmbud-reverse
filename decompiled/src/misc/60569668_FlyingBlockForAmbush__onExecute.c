/* FlyingBlockForAmbush__onExecute
 * address: 0x60569668   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x605638C8
// 
// Overridden by: None
int __fastcall FlyingBlockForAmbush__onExecute(int a1)
{
  ColliderBase *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5

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
  BlockBase__vf174(a1);
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute(v2);
  sub_605B2D70(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CAE2F8 + 8))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
