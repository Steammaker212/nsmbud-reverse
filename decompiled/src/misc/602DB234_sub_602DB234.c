/* sub_602DB234
 * address: 0x602DB234   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DB234(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5
  int v10; // r1
  int v11; // r1

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C91CC8 + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 == (*(int (**)(void))(dword_60C91C88 + 8))()
      || (v8 = StateMgr__getCurrentState(v2),
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
          result = (*(int (**)(void))(dword_60C91CA8 + 8))(),
          v9 == result) )
    {
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) != 0 )
      {
        result = a1 + 6348;
        v10 = FIELD_U32(a1, 6348);
        if ( !v10 || (v11 = v10 - 1, (*(_DWORD *)result = v11) == 0) )
        {
          *(_DWORD *)result = 180;
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91CC8);
        }
      }
    }
  }
  return result;
}
