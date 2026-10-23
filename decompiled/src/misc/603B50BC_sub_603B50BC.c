/* sub_603B50BC
 * address: 0x603B50BC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B50BC(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r1
  int *v6; // r0
  int v7; // r1
  bool v8; // nf

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v5 = -327681;
  if ( FIELD_U8(a1, 6316) )
    v5 = 25201166;
  FIELD_U32(a1, 336) = v5;
  ActorScaler_execute((ActorScaler *)(a1 + 6344));
  sub_603B51BC(a1);
  sub_602A33AC((_BYTE *)a1);
  if ( FIELD_U8(a1, 11822) )
  {
    v6 = (int *)(a1 + 11816);
    v7 = 0;
    if ( !FIELD_U8(a1, 11821) )
    {
      v7 = *v6 + 1;
      v8 = *v6 - 99 < 0;
      *v6 = v7;
      if ( v8 == __OFSUB__(v7, 100) )
        v7 = 100;
    }
    *v6 = v7;
  }
  skl_root_ref_3B5378(a1);
  if ( (FIELD_U8(a1, 20) & 0xF) == 0 )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
