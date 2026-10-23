/* sub_6077A918
 * address: 0x6077A918   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077A918(int a1, int a2)
{
  int v3; // r5
  int *v4; // r1
  StateBase *v5; // r0
  int v6; // r6
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  StateBase *CurrentState; // r0
  int v12; // r6
  int v13; // r0
  bool v14; // zf

  v3 = 0;
  switch ( a2 )
  {
    case 0:
      v4 = &dword_60CBFB54;
      goto LABEL_9;
    case 1:
      v4 = &dword_60CBFB74;
LABEL_9:
      StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v4);
      FIELD_U32(a1, 52) = 0;
      FIELD_U32(a1, 56) = 0;
      return 1;
    case 2:
      StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFB74);
      FIELD_U32(a1, 52) = 1;
      FIELD_U32(a1, 56) = 0;
      return 1;
    case 3:
      if ( !sub_6077A638() )
        return v3;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 36));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v13 = (*(int (**)(void))(dword_60CBFB74 + 8))();
      v14 = v12 == v13;
      if ( v12 == v13 )
        v14 = FIELD_U32(a1, 52) == 3;
      if ( !v14 )
        return v3;
      v9 = 4;
      break;
    case 4:
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 36));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      v7 = (*(int (**)(void))(dword_60CBFB74 + 8))();
      v8 = v6 == v7;
      if ( v6 == v7 )
        v8 = FIELD_U32(a1, 52) == 5;
      if ( !v8 )
        return v3;
      v9 = 6;
      break;
    default:
      return v3;
  }
  FIELD_U32(a1, 52) = v9;
  return 1;
}
