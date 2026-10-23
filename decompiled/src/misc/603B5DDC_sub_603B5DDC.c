/* sub_603B5DDC
 * address: 0x603B5DDC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603B5DDC(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r7
  StateBase *v5; // r0
  int v6; // r5

  v2 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && !sub_600025B8(a1) )
    {
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 == (*(int (**)(void))(dword_60C98060 + 8))() )
      {
        v2 = 1;
        if ( (FIELD_U8(a1, 8672) & 1) == 0 )
          return FIELD_U32(a1, 11944) != 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return v2;
}
