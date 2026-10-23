/* sub_60320208
 * address: 0x60320208   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60320208(int a1)
{
  int v2; // r1
  int v3; // r0
  float v4; // s0
  StateBase *CurrentState; // r0
  int v6; // r5

  v2 = FIELD_U32(a1, 6308);
  v3 = a1 + 13020;
  if ( v2 )
    v4 = 0.04;
  else
    v4 = 0.01;
  sub_602A3EFC(v3, 24, v4);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C938D0 + 8))() )
    FIELD_U32(a1, 7648) = 30;
  return 1;
}
