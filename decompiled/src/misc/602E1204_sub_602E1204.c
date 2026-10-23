/* sub_602E1204
 * address: 0x602E1204   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E1204(int a1)
{
  _BYTE *v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5

  v2 = (_BYTE *)(a1 + 15424);
  if ( !FIELD_U8(a1, 15424) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      *v2 = 1;
      sub_602A3EFC(a1 + 15440, 24, 0.015);
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 == (*(int (**)(void))(dword_60C92204 + 8))() )
      {
        FIELD_U32(a1, 15420) = 20;
LABEL_11:
        FIELD_U8(a1, 15384) = 3;
        j_ibaramushi_ref((_DWORD *)(a1 + 6300), 3, 0);
        return 1;
      }
      v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      if ( v8 != (*(int (**)(void))(dword_60C92224 + 8))() )
        goto LABEL_11;
      if ( !FIELD_U8(a1, 15425)
        && SE_EMY_IBARAMUSHI_FOOT_ref(a1) == 1
        && !FIELD_U8(a1, 15372)
        && !FIELD_U32(a1, 15428) )
      {
        ((void (__fastcall *)(int))loc_602E1558)(a1);
        goto LABEL_11;
      }
    }
  }
  return 1;
}
