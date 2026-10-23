/* ShellEnemy__afterExecute
 * address: 0x6039F4A8   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003418
// 
// Overridden by: None
int __fastcall ShellEnemy__afterExecute(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r7
  StateBase *v6; // r0
  int v7; // r6
  int v9; // r1

  if ( a2 != 2 )
    goto LABEL_7;
  if ( sub_602A588C(a1)
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v5 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))())
    || sub_600025B8(a1) )
  {
    FIELD_U8(a1, 6609) = 0;
LABEL_7:
    FIELD_U8(a1, 6611) = FIELD_U8(a1, 6610);
    FIELD_U8(a1, 6610) = 0;
    return CollisionActor__afterExecute((CollisionActor *)a1, a2);
  }
  if ( !sub_60003AE0((StageActor *)a1) && sub_6039F5FC(a1) != 1 )
  {
    v9 = FIELD_U8(a1, 6409);
    if ( FIELD_U8(a1, 6409) )
    {
      v9 = FIELD_U8(a1, 2872);
      if ( (v9 & 1) != 0 )
      {
        v9 = 0;
        FIELD_U8(a1, 6409) = 0;
      }
    }
    sub_6039F6E0(a1, v9);
    sub_60003840(a1);
    goto LABEL_7;
  }
  SE_EMY_DOWN_ref_2A7624(a1);
  return CollisionActor__afterExecute((CollisionActor *)a1, 2);
}
