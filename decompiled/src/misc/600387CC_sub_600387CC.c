/* sub_600387CC
 * address: 0x600387CC   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600387CC(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r9
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r6
  StateBase *CurrentState; // r0
  int v10; // r5
  StateBase *v11; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r5
  StateBase *v15; // r0
  int v16; // r5
  StateBase *v17; // r0
  int v18; // r5
  StateBase *v19; // r0
  int v20; // r5
  StateMgr *v21; // r10
  StateBase *v22; // r0
  int v23; // r5
  StateBase *v24; // r0
  int v25; // r5
  StateBase *v26; // r0
  int v27; // r5

  v6 = FIELD_U32(a3, 64);
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C80040 & ~(1610844152 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80040) )
  {
    dword_60C8003C = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C80040);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &dword_60C8003C);
    if ( v8 )
      v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  if ( Actor__getProfileId((Actor *)v6) == 521 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v10 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))() )
      goto LABEL_25;
    v11 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    if ( v12 == (*((int (**)(void))stru_60C8E1EC._._.vtable + 2))() )
      goto LABEL_25;
    v13 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
    if ( v14 == (*(int (**)(void))(dword_60C8E2E0 + 8))() )
      goto LABEL_25;
    v19 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
    if ( v20 == (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
    {
      v21 = (StateMgr *)(FIELD_U32(v8, 7624) + 6084);
      v22 = StateMgr__getCurrentState(v21);
      v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
      if ( v23 != (*(int (**)(void))(dword_60C80188 + 8))() )
      {
        v24 = StateMgr__getCurrentState(v21);
        v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
        if ( v25 != (*(int (**)(void))(dword_60C801A8 + 8))() )
        {
          v26 = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(v8, 7624) + 6084));
          v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
          if ( v27 != (*(int (**)(void))(dword_60C80128 + 8))() )
          {
LABEL_25:
            v15 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
            v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
            if ( v16 != (*(int (**)(void))(dword_60C7FF3C + 8))() )
            {
              (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 804))(a1, v6);
              v17 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
              v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
              if ( v18 != (*((int (**)(void))stru_60C8E1EC._._.vtable + 2))() )
                sub_6025DE4C(v6);
              FIELD_U8(a2, 110) |= 2u;
            }
          }
        }
      }
    }
  }
  else
  {
    Enemy__collisionEnemy();
  }
}
