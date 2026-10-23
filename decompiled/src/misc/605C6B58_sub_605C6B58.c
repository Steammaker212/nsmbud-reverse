/* sub_605C6B58
 * address: 0x605C6B58   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C6B58(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v3; // r4
  int v4; // r1

  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6116) = 24;
  if ( FIELD_U32(a1, 6100) )
    return 1;
  FIELD_U32(a1, 6100) = 48;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CB0A8C + 8))();
  result = 2;
  if ( v3 != v4 )
    return 1;
  return result;
}
