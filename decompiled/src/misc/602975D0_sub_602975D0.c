/* sub_602975D0
 * address: 0x602975D0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602975D0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r0
  StateBase *v14; // r0
  int v15; // r5

  ActorScaler_execute((ActorScaler *)(a1 + 7468));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C8FCC8 + 8))()
    || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
        v5 == (*(int (**)(void))(dword_60C8FCEC + 8))())
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C8FD10 + 8))())
    || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        v9 == (*(int (**)(void))(dword_60C8FD34 + 8))()) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
  }
  if ( Actor__getProfileId((Actor *)a1) == 491 )
  {
    v10 = a1 + 6300;
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
    if ( FIELD_U8(a1, 536) )
    {
      *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v10 + 28) + 24) = 0;
      v11 = **(_DWORD **)(*(_DWORD *)v10 + 28);
      FIELD_U32(v11, 20) = 0;
      FIELD_U32(v11, 28) |= 2u;
    }
    v12 = **(_DWORD **)(*(_DWORD *)v10 + 28);
    if ( (FIELD_U8(v12, 28) & 4) != 0 )
    {
      FIELD_U32(v12, 24) = 0;
      v13 = **(_DWORD **)(*(_DWORD *)v10 + 28);
      FIELD_U32(v13, 20) = 0;
      FIELD_U32(v13, 28) |= 2u;
    }
  }
  v14 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
  if ( v15 != (*(int (**)(void))(dword_60C8FCC8 + 8))() )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
