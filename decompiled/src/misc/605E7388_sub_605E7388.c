/* sub_605E7388
 * address: 0x605E7388   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E7388(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  if ( FIELD_U8(a1, 6244) )
    LightMask__draw((RevealMaskRelated *)(a1 + 6132));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60CB1BAC + 8))() )
    sub_6045D3E0(a1 + 6100);
  return 1;
}
