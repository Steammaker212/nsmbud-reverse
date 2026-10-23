/* sub_606EEBAC
 * address: 0x606EEBAC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EEBAC(int a1)
{
  int v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r0

  v2 = sub_606EEC50();
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = (*(int (**)(void))(dword_60CBC13C + 8))();
  if ( v2 == 1 )
  {
    if ( v4 == v5 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBC15C);
  }
  else if ( v4 != v5 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBC13C);
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  return 1;
}
