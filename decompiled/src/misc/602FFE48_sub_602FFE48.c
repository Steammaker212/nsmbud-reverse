/* sub_602FFE48
 * address: 0x602FFE48   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FFE48(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r0
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5

  ActorScaler_execute((ActorScaler *)(a1 + 8516));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = a1 + 6300;
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
  if ( FIELD_U8(a1, 536) )
  {
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v2 + 28) + 24) = 0;
    v3 = **(_DWORD **)(*(_DWORD *)v2 + 28);
    FIELD_U32(v3, 20) = 0;
    FIELD_U32(v3, 28) |= 2u;
  }
  v4 = **(_DWORD **)(*(_DWORD *)v2 + 28);
  if ( (FIELD_U8(v4, 28) & 4) != 0 )
  {
    FIELD_U32(v4, 24) = 0;
    v5 = **(_DWORD **)(*(_DWORD *)v2 + 28);
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v5, 28) |= 2u;
  }
  if ( !FIELD_U8(a1, 536) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      nullsub_7();
      v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && sub_60003AE0((StageActor *)a1) == 1 )
        SE_EMY_DOWN_ref_2A7624(a1);
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  StageActor__cullCheck((StageActor *)a1, 8);
  return 1;
}
