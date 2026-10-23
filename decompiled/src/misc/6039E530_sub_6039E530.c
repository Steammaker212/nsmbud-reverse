/* sub_6039E530
 * address: 0x6039E530   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039E530(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int result; // r0
  StateBase *v5; // r0
  int v6; // r5
  void *v7; // r1

  FIELD_U8(a1, 6522) = 1;
  StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96570);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C973E0 + 8))();
  if ( v3 != result )
  {
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    result = (*(int (**)(void))(dword_60C97480 + 8))();
    if ( v6 != result )
    {
      if ( FIELD_U8(a1, 6521) )
      {
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97500);
      }
      else
      {
        FIELD_U32(a1, 6316) = 0;
        FIELD_U32(a1, 88) = 0;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
        if ( (FIELD_U8(a1, 6320) & 1) != 0 )
          v7 = &unk_60C974E0;
        else
          v7 = &unk_60C974A0;
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, v7);
      }
    }
  }
  return result;
}
