/* sub_6024CB64
 * address: 0x6024CB64   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024CB64(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0

  CurrentState = *(StateBase **)(a1 + 6100);
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C9145C + 8))() )
  {
    v4 = *(_DWORD **)(a1 + 6304);
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    FIELD_U32(a1, 6492) = *(_DWORD *)(*(_DWORD *)v5 + 20);
  }
  return sub_602C1B2C(a1, 7, 1, 0.0, 1.0);
}
