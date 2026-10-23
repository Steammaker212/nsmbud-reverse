/* sub_605F6A6C
 * address: 0x605F6A6C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F6A6C(ModelWrapper **a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  ModelWrapper *v5; // r0
  bool v6; // zf
  StateBase *v7; // r0
  int v8; // r5

  v2 = (StateMgr *)(a1 + 1521);
  StateMgr__execute((StateMgr *)(a1 + 1521));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CB21E0 + 8))() )
  {
    v5 = a1[1530];
    v6 = v5 == 0;
    if ( v5 )
      v6 = *((_BYTE *)a1 + 6440) == 0;
    if ( !v6 )
    {
      MovementHandler__execute((MovementHandler *)(a1 + 1547));
      if ( a1[1559] == (ModelWrapper *)1 && a1[1564] != (ModelWrapper *)1 )
      {
        v7 = StateMgr__getCurrentState(v2);
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        if ( v8 == (*(int (**)(void))(dword_60CB2350 + 8))() && a1[1590] )
          ((void (__fastcall *)(ModelWrapper **, int *))(*a1)[4].model)(a1, &dword_60CB21E0);
        a1[27] = a1[1547];
        a1[28] = a1[1548];
        a1[41] = a1[1567];
      }
    }
  }
  StarCoinBase_updateModel(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
