/* sub_602D7E88
 * address: 0x602D7E88   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D7E88(int a1, int a2, int a3)
{
  int v5; // r6
  StateBase *CurrentState; // r0
  int v7; // r7

  v5 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && !sub_600025B8(a1) )
    {
      sub_602A3EFC(a1 + 6788, 24, 0.0625);
      v5 = 1;
      if ( sub_602DC370(a1) == 1 )
      {
        SE_EMY_KALON_ref_2DC488(a1, 3, a3, 0);
        return 2;
      }
    }
  }
  return v5;
}
