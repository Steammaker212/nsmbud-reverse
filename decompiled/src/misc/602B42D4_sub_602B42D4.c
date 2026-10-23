/* sub_602B42D4
 * address: 0x602B42D4   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B42D4(int a1)
{
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r12
  bool v5; // cf
  int v6; // r2
  int v7; // r6
  int v8; // r3
  int v9; // r5
  int v10; // r7
  bool v11; // cc
  char v12; // r3
  StateBase *CurrentState; // r0
  int v14; // r6
  int v15; // r6
  char v16; // r12
  StateBase *v17; // r0
  int v18; // r7
  StateBase *v19; // r0
  int v20; // r6
  float v21; // s0

  StageActor__cullCheck((StageActor *)a1, 4);
  if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(dword_60CC6484, 132) + -100.0) )
    StageActor__delete((StateActor *)a1, 1);
  if ( FIELD_U8(a1, 6884) )
  {
    v2 = FIELD_U32(a1, 6316);
    if ( v2 < 0 )
    {
      v9 = 0;
      v7 = 0;
      v4 = (unsigned __int64)(FIELD_S32(a1, 6316) + 119304647LL) >> 32;
      v6 = FIELD_U32(a1, 6316) + 119304647;
      v8 = v6;
    }
    else
    {
      if ( !v2 )
      {
        v12 = 0;
LABEL_14:
        FIELD_U8(a1, 6884) = v12;
        goto LABEL_15;
      }
      v3 = v2 >> 31;
      v4 = 0;
      v5 = __CFADD__(v2, -119304647);
      v6 = v2 - 119304647;
      v7 = v3 - !v5;
      v8 = 0;
      v9 = v6;
    }
    v10 = 0;
    v11 = __SPAIR64__(v4, v8) < __SPAIR64__(v7, v9);
    v12 = 0;
    if ( v11 )
    {
      v10 = 1;
      v12 = 1;
    }
    if ( v10 )
      v10 = v6;
    FIELD_U32(a1, 6316) = v10;
    goto LABEL_14;
  }
LABEL_15:
  ActorScaler_execute((ActorScaler *)(a1 + 6476));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v14 != (*(int (**)(void))(dword_60C90E10 + 8))() )
  {
    v15 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6340));
    if ( ((unsigned int)&dword_60C90E5C & ~(1613448244 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E5C) )
    {
      dword_60C90E58 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C90E5C);
    }
    if ( !v15
      || ((**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C90E58) ^ 1) == 1
      || FIELD_U8(v15, 536)
      || (v17 = StateMgr__getCurrentState((StateMgr *)(v15 + 6084)),
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
          v18 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
      || FIELD_U8(v15, 6660)
      || sub_602B45E8(v15) == 1 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90E10);
    }
    v19 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
    if ( v20 == (*((int (**)(void))stru_60C90710._._.vtable + 2))() )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90E10);
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( sub_602B46E4(a1) == 1 )
    CollisionMgr_process((_BYTE *)(a1 + 648), v21);
  sub_602B413C((float *)a1);
  return 1;
}
