/* sub_606226C8
 * address: 0x606226C8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606226C8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r5

  sub_6062134C(a1);
  if ( FIELD_U32(a1, 6304) )
  {
    if ( FIELD_U32(a1, 6808) )
    {
      ShapedCollider_execute((ColliderBase *)(a1 + 6664));
      ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7320, a1 + 108);
    }
    if ( !FIELD_U8(a1, 7388)
      || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
          v3 == (*(int (**)(void))(dword_60CB3A08 + 8))())
      || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
          v5 == (*(int (**)(void))(dword_60CB3A28 + 8))()) )
    {
      StageActor__cullCheck((StageActor *)a1, 0);
    }
    ((void (__fastcall *)(int, int))loc_602A3F7C)(a1 + 7392, 2);
  }
  return 1;
}
