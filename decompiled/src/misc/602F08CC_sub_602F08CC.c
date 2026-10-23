/* sub_602F08CC
 * address: 0x602F08CC   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F08CC(int a1, unsigned __int8 *a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r7
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r7
  StateBase *v13; // r0
  int v14; // r6
  int v15; // r1
  int result; // r0
  int v17; // r1
  unsigned int v18; // r1

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*((int (**)(void))stru_60C92584.vtable + 2))() )
    goto LABEL_6;
  v7 = StateMgr__getCurrentState(v4);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C92544 + 8))() )
    goto LABEL_6;
  v9 = StateMgr__getCurrentState(v4);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C92564 + 8))()
    || (v11 = StateMgr__getCurrentState(v4),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*(int (**)(void))(dword_60C92424 + 8))())
    || (v13 = StateMgr__getCurrentState(v4),
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
        v15 = (*((int (**)(void))stru_60C92444.vtable + 2))(),
        result = 0,
        v14 == v15) )
  {
LABEL_6:
    v17 = a2[533];
    if ( (unsigned int)(v17 - 1) >= 2 )
    {
      result = 0;
      if ( v17 != 4 )
        return result;
      sub_605D89BC(a2, a1, 4);
    }
    else
    {
      v18 = a2[84];
      if ( v18 <= 3 )
        sub_604005D0(AreaRumbleMgr_instance, v18, 6, 2, 0, 0);
      (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)a2 + 1168))(a2, a1, 19);
    }
    return 1;
  }
  return result;
}
