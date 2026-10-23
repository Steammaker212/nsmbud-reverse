/* sub_6039CDFC
 * address: 0x6039CDFC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039CDFC(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5

  result = FIELD_U8(a1, 6521);
  if ( !result )
  {
    result = FIELD_U8(a1, 6320);
    if ( (result & 1) != 0 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C972A0 + 8))();
      if ( v4 != result )
      {
        v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
        result = (*(int (**)(void))(dword_60C971C0 + 8))();
        if ( v6 != result )
        {
          FIELD_U32(a1, 6384) = 0;
          FIELD_U32(a1, 6388) = 1083703296;
          StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96570);
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C972A0);
        }
      }
    }
  }
  return result;
}
