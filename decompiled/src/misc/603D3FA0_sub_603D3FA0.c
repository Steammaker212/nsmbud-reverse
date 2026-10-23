/* sub_603D3FA0
 * address: 0x603D3FA0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D3FA0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r5

  sub_602A3EFC(a1 + 6480, 24, 0.04);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C98E80 + 8))()
    || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
        v5 == (*(int (**)(void))(dword_60C98EA0 + 8))()) )
  {
    FIELD_U32(a1, 6460) = 30;
    return 1;
  }
  else
  {
    v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 == (*(int (**)(void))(dword_60C98EC0 + 8))()
      || (v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
          v10 == (*(int (**)(void))(dword_60C98EE0 + 8))())
      || (v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
          v12 == (*(int (**)(void))(dword_60C98F00 + 8))()) )
    {
      FIELD_U32(a1, 6512) = 1;
      FIELD_U8(a1, 6329) = 1;
      v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
      if ( v14 != (*(int (**)(void))(dword_60C98F00 + 8))() )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98F00);
    }
    return 1;
  }
}
