/* sub_6032BAB8
 * address: 0x6032BAB8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032BAB8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  float v4; // s0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C93CD0 + 8))() )
  {
    if ( FIELD_U32(a1, 6308) )
      v4 = 0.04;
    else
      v4 = 0.01;
    sub_602A3EFC(a1 + 13020, 24, v4);
    FIELD_U32(a1, 13072) = 1;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C93CF0);
  }
  return 1;
}
