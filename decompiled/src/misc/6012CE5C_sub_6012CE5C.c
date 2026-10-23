/* sub_6012CE5C
 * address: 0x6012CE5C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012CE5C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60C87384 + 8))();
  result = 0;
  if ( v3 == v4 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C873A4);
    return 1;
  }
  return result;
}
