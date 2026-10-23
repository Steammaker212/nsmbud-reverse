/* sub_6035FFB0
 * address: 0x6035FFB0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035FFB0(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6

  sub_602A3EFC(a1 + 12592, 24, 0.0625);
  result = FIELD_U8(a1, 6220);
  if ( !FIELD_U8(a1, 6220) )
  {
    result = FIELD_U32(a1, 6100);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C9578C + 8))();
      if ( v4 != result )
      {
        v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
        result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
        if ( v6 != result )
        {
          FIELD_U32(a1, 6928) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9578C);
        }
      }
    }
  }
  return result;
}
