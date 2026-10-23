/* BanzaiBill_vf161
 * address: 0x6032A938   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf161(int a1)
{
  _DWORD *v2; // r6
  float v3; // s0
  StateBase *CurrentState; // r0
  int v5; // r5

  v2 = (_DWORD *)(a1 + 7652);
  if ( !FIELD_U32(a1, 7652) )
  {
    if ( FIELD_U32(a1, 6308) )
      v3 = 0.04;
    else
      v3 = 0.01;
    sub_602A3EFC(a1 + 13020, 24, v3);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60C93C84 + 8))() )
    {
      FIELD_U32(a1, 7648) = 20;
      *v2 = 35;
    }
  }
  return 1;
}
