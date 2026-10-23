/* BrickBlockHuge__onExecute
 * address: 0x60565EE8   size: 188   group: misc
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
int __fastcall BrickBlockHuge__onExecute(int a1)
{
  ColliderBase *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6

  v2 = (ColliderBase *)(a1 + 6120);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CAE3E8 + 8))() )
    FIELD_F32(a1, 112) = FIELD_F32(a1, 6984) + FIELD_F32(a1, 6796);
  ShapedCollider_execute(v2);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 16);
  return 1;
}
