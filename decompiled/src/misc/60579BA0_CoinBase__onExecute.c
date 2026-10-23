/* CoinBase__onExecute
 * address: 0x60579BA0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall CoinBase__onExecute(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r5
  int v6; // r0
  bool v7; // zf

  sub_605D006C(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60CAED90 + 8))() )
  {
    v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
    if ( v5 != (*(int (**)(void))(dword_60CAED48 + 8))() )
    {
      v6 = FIELD_U32(a1, 7300);
      v7 = v6 == 0;
      if ( v6 )
        v7 = FIELD_U32(a1, 7304) == 0;
      if ( v7 )
      {
        if ( !FIELD_U32(a1, 7372) )
          FIELD_F32(a1, 112) = FIELD_F32(a1, 7368) + FIELD_F32(a1, 6796);
      }
      else
      {
        MovementHandler__execute((MovementHandler *)(a1 + 6992));
        if ( FIELD_U32(a1, 7040) == 1 && FIELD_U32(a1, 7060) != 1 )
        {
          FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
          FIELD_F32(a1, 112) = FIELD_F32(a1, 6996) + FIELD_F32(a1, 6796);
          FIELD_U32(a1, 164) = FIELD_U32(a1, 7072);
        }
      }
    }
    FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
    ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  }
  if ( FIELD_U16(a1, 7376) == 1 )
    sub_60579D4C(a1);
  sub_605B2D70(a1);
  FIELD_U32(a1, 7372) = 2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1) == 1 )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
