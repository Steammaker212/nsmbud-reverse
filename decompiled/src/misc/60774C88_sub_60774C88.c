/* sub_60774C88
 * address: 0x60774C88   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774C88(int a1, float a2)
{
  StateBase *CurrentState; // r0
  int v5; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*((int (**)(void))stru_60CBF960.vtable + 2))() )
  {
    if ( FIELD_U32(a1, 9976) == 1 )
      PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 5);
    FIELD_F32(a1, 124) = a2;
    FIELD_U32(a1, 9940) = 1;
    sub_6078667C(a1 + 688, 6);
    FIELD_U32(a1, 1232) &= ~0x40000000u;
  }
  return 1;
}
