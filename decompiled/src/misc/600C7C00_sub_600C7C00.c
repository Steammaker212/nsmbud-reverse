/* sub_600C7C00
 * address: 0x600C7C00   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600C7C00(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  char v4; // r12
  StateBase *CurrentState; // r0
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r4
  char v11; // r12
  StateBase *v12; // r0
  int v13; // r5
  int v14; // r5
  char v15; // r12
  StateMgr *v16; // r0
  StateBase *v17; // r0
  int v18; // r5
  _DWORD *v19; // r0
  int v20; // r1
  int v21; // r1

  v2 = (_DWORD *)(a1 + 6128);
  switch ( FIELD_U32(a1, 6128) )
  {
    case 0:
      if ( !sub_600085D0(ActorMgr__instance, 264) )
      {
        v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
        if ( ((unsigned int)dword_60C83C10 & ~(1611431064 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C83C10) )
        {
          dword_60C83C0C = (int)&off_60BC1FA8;
          _cxa_guard_release(dword_60C83C10);
        }
        if ( !v3
          || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C83C0C) != 1
          || (CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084)),
              v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
              v6 != (*(int (**)(void))(dword_60C83B1C + 8))()) )
        {
          FIELD_U32(a1, 6220) = 0;
          FIELD_U32(a1, 6216) = 0;
          v16 = (StateMgr *)(a1 + 6244);
          goto LABEL_33;
        }
        *v2 = 1;
        FIELD_U32(a1, 6124) = 60;
      }
      break;
    case 1:
      v7 = (_DWORD *)(a1 + 6124);
      v8 = FIELD_U32(a1, 6124);
      if ( !v8 || (v9 = v8 - 1, (*v7 = v9) == 0) )
      {
        v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
        if ( ((unsigned int)dword_60C83C10 & ~(1611431328 << v11) & 1) == 0 && _cxa_guard_acquire(dword_60C83C10) )
        {
          dword_60C83C0C = (int)&off_60BC1FA8;
          _cxa_guard_release(dword_60C83C10);
        }
        if ( v10 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C83C0C) == 1 )
          {
            v12 = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
            v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
            if ( v13 == (*(int (**)(void))(dword_60C83B1C + 8))() )
            {
              (*(void (__fastcall **)(int, int *))(*(_DWORD *)v10 + 192))(v10, &dword_60C83B3C);
              *v2 = 2;
            }
          }
        }
      }
      break;
    case 2:
      v14 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
      if ( ((unsigned int)dword_60C83C10 & ~(1611431572 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C83C10) )
      {
        dword_60C83C0C = (int)&off_60BC1FA8;
        _cxa_guard_release(dword_60C83C10);
      }
      if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C83C0C) == 1 && FIELD_U8(v14, 7153) )
      {
        FIELD_U32(a1, 6220) = 0;
        FIELD_U32(a1, 6216) = 0;
        v16 = (StateMgr *)(a1 + 6244);
LABEL_33:
        StateMgr__changeState(v16, (StateBase *)&dword_60C83F40);
        *v2 = 3;
      }
      break;
    case 3:
      v17 = StateMgr__getCurrentState((StateMgr *)(a1 + 6244));
      v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
      if ( v18 == (*(int (**)(void))(dword_60C83EE0 + 8))() )
      {
        FIELD_U32(a1, 6124) = 120;
        *v2 = 4;
      }
      break;
    case 4:
      v19 = (_DWORD *)(a1 + 6124);
      v20 = FIELD_U32(a1, 6124);
      if ( !v20 || (v21 = v20 - 1, (*v19 = v21) == 0) )
        StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C83E80);
      break;
    default:
      return;
  }
}
