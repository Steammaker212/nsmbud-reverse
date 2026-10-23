/* sub_602FAAF0
 * address: 0x602FAAF0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FAAF0(int a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r7
  StateBase *v5; // r0
  int v6; // r6

  v2 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v2 = 1;
      FIELD_U8(a1, 11900) = 1;
      sub_602A3EFC(a1 + 11904, 24, 0.0625);
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 == (*(int (**)(void))(dword_60C92974 + 8))() )
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C92954);
    }
  }
  return v2;
}
