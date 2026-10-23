/* Goomba__vfDC
 * address: 0x6033B0CC   size: 424   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by: None
StateMethodExecuter *__fastcall Goomba__vfDC(int a1)
{
  StateBase *CurrentState; // r0
  StateBase **v3; // r6
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r5
  int v7; // r0
  StateBase *v8; // r0
  int v9; // r5
  signed int v10; // r0
  StateBase *v11; // r0
  int v12; // r5

  v3 = (StateBase **)(a1 + 6100);
  CurrentState = *(StateBase **)(a1 + 6100);
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C9435C + 8))() )
    goto LABEL_7;
  v5 = *v3;
  if ( !*v3 )
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C9437C + 8))() )
  {
LABEL_7:
    sub_6015907C((ActiveCollider *)(a1 + 188), 32775);
    FIELD_U8(a1, 6839) = 0;
    v7 = FIELD_U32(a1, 80) ^ 1;
    FIELD_U32(a1, 80) = v7;
    FIELD_U32(a1, 160) = Enemy_CommonRotations[v7];
    FIELD_U32(a1, 124) = 0;
    return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
  }
  v8 = *v3;
  if ( !*v3 )
    v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  if ( v9 == (*(int (**)(void))(dword_60C943BC + 8))() )
  {
    v10 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v10;
    FIELD_U32(a1, 160) = Enemy_CommonRotations[v10];
LABEL_15:
    FIELD_U32(a1, 124) = 0;
    return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
  }
  v11 = *v3;
  if ( !*v3 )
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
  if ( v12 == (*(int (**)(void))(dword_60C942B8 + 8))() )
    goto LABEL_15;
  return Enemy__vfDC((Enemy *)a1);
}
