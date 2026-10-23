/* sub_603B5BE8
 * address: 0x603B5BE8   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B5BE8(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r7
  StateBase *v5; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6

  v2 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 != (*(int (**)(void))(dword_60C98040 + 8))() )
      {
        sub_602A3EFC(a1 + 6344, 24, 0.0625);
        v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        v2 = 1;
        if ( v8 == (*(int (**)(void))(dword_60C98020 + 8))() && !FIELD_U32(a1, 11812) )
        {
          FIELD_U32(a1, 11812) = 24;
          FIELD_U32(a1, 80) ^= 1u;
          FIELD_U32(a1, 120) = 0;
          FIELD_U32(a1, 124) = 1077936128;
          FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
        }
      }
    }
  }
  return v2;
}
