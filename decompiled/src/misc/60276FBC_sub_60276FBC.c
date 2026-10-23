/* sub_60276FBC
 * address: 0x60276FBC   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60276FBC(float a1, int y_low)
{
  float x; // r11
  _BYTE *v4; // r0
  char v5; // r12
  unsigned int v6; // r1
  _DWORD *v7; // r4
  int (__fastcall ***v8)(_DWORD, int *); // r10
  int v9; // r4
  float v10; // r1
  int v11; // r0
  int v12; // r4
  int v13; // r9
  StateBase *CurrentState; // r0
  int v15; // r7
  bool v16; // zf
  int v17; // r4
  StateBase *v18; // r0
  int v19; // r6
  Vec2 position; // [sp+8h] [bp-C8h] BYREF
  LineFollower v22; // [sp+10h] [bp-C0h] BYREF

  memset(&v22.states.executer.methodExecuter, 0, 36);
  v22.states.vtable = FIELD_U32(y_low, 20);
  v22.states.executer.vtable = *(void **)(y_low + 24);
  v22.states.executer.methodExecuter.owner = Profile__get(0x17u);
  v22.states.executer.methodExecuter.currentState = FIELD_U32(y_low, 6460);
  v22.states.manager.executer = *(StateExecuter **)(y_low + 6464);
  v22.states.manager.nextState = *(StateBase **)(y_low + 6468);
  v22.states.manager.currentMethodExecuter = *(StateMethodExecuter **)(y_low + 160);
  LOBYTE(v22.states.manager.lastState) = 0;
  v4 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)&v22, 0);
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 + 2);
    FIELD_U32(y_low, 6524) = v6;
    v7 = (_DWORD *)(y_low + 6524);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v7 = (_DWORD *)(y_low + 6524);
    v6 = FIELD_U32(y_low, 6524);
    if ( !v6 )
    {
LABEL_8:
      v8 = 0;
      goto LABEL_9;
    }
  }
  v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
  if ( !v8 )
    *v7 = 0;
LABEL_9:
  if ( ((unsigned int)&dword_60C8EDDC & ~(1613197512 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8EDDC) )
  {
    dword_60C8EDD8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C8EDDC);
  }
  if ( v8 && (**v8)(v8, &dword_60C8EDD8) == 1 )
  {
    v9 = FIELD_U32(y_low, 20);
    LineFollower_ctor(&v22);
    v10 = FIELD_F32(y_low, 112);
    position.x = FIELD_F32(y_low, 108);
    position.y = v10;
    LineFollower_init(&v22, &position, FIELD_U8(y_low, 86), 0, 0);
    ((void (__fastcall *)(LineFollower *, _DWORD))LineFollower_start)(&v22, 0);
    v11 = 3 * ((unsigned __int16)v9 >> 12);
    v12 = 24 * ((unsigned __int16)v9 >> 12) + 10;
    v13 = 8 * v11;
    do
    {
      while ( 1 )
      {
        StateMgr__execute(&v22.states.manager);
        CurrentState = StateMgr__getCurrentState(&v22.states.manager);
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v15 != (*((int (__fastcall **)(State *))LineFollower_StateID_Fall._.vtable + 2))(&LineFollower_StateID_Fall) )
          break;
        if ( v12 < 0 )
          goto LABEL_21;
      }
      x = v22.position.x;
      y_low = SLODWORD(v22.position.y);
      v16 = v12 == 1;
      if ( v12 < 1 )
        break;
      --v12;
    }
    while ( !v16 );
LABEL_21:
    sub_6000F338(&v22);
    position.x = x;
    position.y = *(float *)&y_low + -8.0;
    sub_605ED0DC((int)v8, (int)&position);
    v17 = v13 + 9;
    do
    {
      do
      {
        StateMgr__execute(&v22.states.manager);
        v18 = StateMgr__getCurrentState(&v22.states.manager);
        v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
      }
      while ( v19 == (*((int (__fastcall **)(State *))LineFollower_StateID_Fall._.vtable + 2))(&LineFollower_StateID_Fall) );
      if ( v17 == 1 )
        break;
      position.x = v22.position.x;
      position.y = v22.position.y + -8.0;
      sub_605ED0DC((int)v8, (int)&position);
    }
    while ( v17-- > 0 );
    sub_605ED2AC(v8);
    sub_605ED358(v8);
  }
}
