/* sub_6013865C
 * address: 0x6013865C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013865C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1

  if ( FIELD_F32(a1, 144) != 0.0 || FIELD_F32(a1, 148) != 0.0 || FIELD_F32(a1, 152) != 0.0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 == (*(int (**)(void))(dword_60C878F4 + 8))() )
      v4 = 17;
    else
      v4 = 18;
    EffectWrapper_update((EffectWrapper *)(a1 + 6172), v4, (Vec3 *)(a1 + 108), 0, (Vec3 *)(a1 + 144));
  }
  return 1;
}
