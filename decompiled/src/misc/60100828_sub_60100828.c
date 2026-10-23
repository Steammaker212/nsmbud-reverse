/* sub_60100828
 * address: 0x60100828   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60100828(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int v5; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C85F34 + 8))() )
  {
    v4 = FIELD_U32(a1, 9440);
    if ( v4 )
    {
      v5 = v4 - 1;
      FIELD_U32(a1, 9440) = v5;
      if ( !v5 )
        FIELD_U32(a1, 9436) = -1;
    }
  }
  ((void (__fastcall *)(int))loc_601008C8)(a1);
  sub_600009FC((StageActor *)a1);
  ShapedCollider_execute(a1 + 8272);
  CircularCollider_execute(a1 + 8928);
  nullsub_448();
}
