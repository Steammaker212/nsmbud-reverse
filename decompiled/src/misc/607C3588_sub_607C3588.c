/* sub_607C3588
 * address: 0x607C3588   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C3588(int a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v5; // r7
  StateBase *v6; // r1
  StateBase *v7; // r0
  int v8; // r7
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r6

  v2 = 1;
  if ( sub_607C16A0(a1, 0) )
    return 1;
  if ( sub_60773298(a1) )
    return 1;
  if ( sub_6075FC38(a1) )
    return 1;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60CC4BBC + 8))() )
  {
    if ( ((int (__fastcall *)(int))loc_607C51A4)(a1) )
      return 1;
  }
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( !((int (__fastcall *)(int))loc_6075FA7C)(a1) )
    {
      v6 = (StateBase *)&unk_60CC4C04;
LABEL_10:
      Player_changeState(a1, v6, 1);
      return 1;
    }
    return 1;
  }
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60CC4BBC + 8))()
    && sub_607868D4(a1 + 688, 0) == 1
    && FIELD_U32(a1, 80) != FIELD_U32(a1, 1248) )
  {
    sub_6078667C((_DWORD *)(a1 + 688), 9);
    if ( ((int (__fastcall *)(int))loc_607743E8)(a1) )
      return 1;
  }
  if ( sub_6075EDF8(a1) && sub_6078686C(a1 + 688) == 1 && (FIELD_U8(a1, 6906) & 0x80) != 0 )
  {
    v6 = (StateBase *)&dword_60CC508C;
    goto LABEL_10;
  }
  v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 != (*(int (**)(void))(dword_60CC4BBC + 8))() )
  {
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    if ( v12 != (*(int (**)(void))(dword_60CC4C28 + 8))() )
      return 0;
  }
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1016))(a1) )
    return 0;
  return v2;
}
