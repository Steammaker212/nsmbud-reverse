/* sub_602F0A90
 * address: 0x602F0A90   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F0A90(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r7
  StateBase *CurrentState; // r0
  int v9; // r5
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r1
  StateBase *v13; // r0
  int v14; // r5
  StateBase *v15; // r0
  int v16; // r5
  StateBase *v17; // r0
  int v18; // r5
  StateBase *v19; // r0
  int v20; // r4
  unsigned int v21; // r8
  StateBase *v22; // r0
  int v23; // r5
  StateBase *v24; // r0
  int v25; // r5
  StateBase *v26; // r0
  int v27; // r5
  StateBase *v28; // r0
  int v29; // r5
  StateBase *v30; // r0
  int v31; // r4

  if ( ((unsigned int)&dword_60C7B39C & ~(1613695664 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  v7 = 0;
  if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B398) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a2 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*((int (**)(void))stru_60C92664.vtable + 2))() )
    {
      sub_602EE7D8(a2, a3 ^ 1, FIELD_S8(a2, 84), 0);
      v10 = FIELD_S8(a1, 84);
      v11 = a1;
      v12 = a3;
LABEL_19:
      sub_602EE7D8(v11, v12, v10, 0);
      return 1;
    }
    v13 = StateMgr__getCurrentState((StateMgr *)(a2 + 6084));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
    if ( v14 == (*((int (**)(void))stru_60C92684.vtable + 2))()
      || (v15 = StateMgr__getCurrentState((StateMgr *)(a2 + 6084)),
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15),
          v16 == (*((int (**)(void))stru_60C926A4.vtable + 2))())
      || (v17 = StateMgr__getCurrentState((StateMgr *)(a2 + 6084)),
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
          v18 == (*(int (**)(void))(dword_60C925C4 + 8))())
      || (v19 = StateMgr__getCurrentState((StateMgr *)(a2 + 6084)),
          v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
          v20 == (*(int (**)(void))(dword_60C92644 + 8))()) )
    {
      v21 = FIELD_S8(a1, 84);
      if ( v21 <= 3 )
      {
        v22 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
        if ( v23 == (*((int (**)(void))stru_60C92664.vtable + 2))() )
          goto LABEL_18;
        v24 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
        if ( v25 == (*((int (**)(void))stru_60C92684.vtable + 2))()
          || (v26 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
              v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26),
              v27 == (*((int (**)(void))stru_60C926A4.vtable + 2))())
          || (v28 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
              v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28),
              v29 == (*(int (**)(void))(dword_60C925C4 + 8))())
          || (v30 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
              v31 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v30, 0x0) + 2))(v30),
              v31 == (*(int (**)(void))(dword_60C92644 + 8))()) )
        {
LABEL_18:
          sub_602EE7D8(a2, a3 ^ 1, FIELD_S8(a2, 84), 0);
          v11 = a1;
          v12 = a3;
          v10 = v21;
          goto LABEL_19;
        }
      }
    }
  }
  return v7;
}
