/* sub_6031ED3C
 * address: 0x6031ED3C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031ED3C(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C93880 + 8))() )
    return 0;
  else
    return sub_6031DB1C(a1, a2, a3);
}
