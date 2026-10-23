/* sub_6010A7A4
 * address: 0x6010A7A4   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor **sub_6010A7A4()
{
  char v0; // r12
  Actor **v1; // r10
  Actor **result; // r0
  Actor *v3; // r11
  StateBase *CurrentState; // r0
  int v5; // r8
  StateBase *v6; // r0
  int v7; // r8
  StateBase *v8; // r0
  int v9; // r8
  StateBase *v10; // r0
  int v11; // r8
  StateBase *v12; // r0
  int v13; // r8
  StateBase *v14; // r0
  int v15; // r8
  StateMgr *p_heap; // [sp+1Ch] [bp-54h]

  v1 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( result = *(Actor ***)(ActorMgr__instance + 27180); v1 != result; result = *(Actor ***)(ActorMgr__instance + 27180) )
  {
    v3 = *v1;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611704536 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI) == 1 )
    {
      if ( ((unsigned int)dword_60C7B430 & ~(1611704624 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &Enemy_RTTI) == 1
        && (Actor__getProfileId(v3) == 629 || Actor__getProfileId(v3) == 631)
        && !FIELD_U8(v3, 0x13) )
      {
        p_heap = (StateMgr *)&v3[76].heap;
        CurrentState = StateMgr__getCurrentState((StateMgr *)&v3[76].heap);
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v5 != (*((int (__fastcall **)(StateVirtual *))stru_60C90710._._.vtable + 2))(&stru_60C90710) )
        {
          v6 = StateMgr__getCurrentState(p_heap);
          v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
          if ( v7 != (*((int (__fastcall **)(State *))stru_60C906EC._.vtable + 2))(&stru_60C906EC) )
          {
            v8 = StateMgr__getCurrentState(p_heap);
            v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
            if ( v9 != (*((int (__fastcall **)(StateVirtual *))stru_60C9077C._._.vtable + 2))(&stru_60C9077C) )
            {
              v10 = StateMgr__getCurrentState(p_heap);
              v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
              if ( v11 != (*((int (__fastcall **)(StateVirtual *))stru_60C907A0._._.vtable + 2))(&stru_60C907A0) )
              {
                v12 = StateMgr__getCurrentState(p_heap);
                v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
                if ( v13 != (*((int (__fastcall **)(StateVirtual *))stru_60C90758._._.vtable + 2))(&stru_60C90758) )
                {
                  v14 = StateMgr__getCurrentState(p_heap);
                  v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
                  if ( v15 != (*(int (__fastcall **)(_DWORD *))(dword_60C90734 + 8))(&dword_60C90734) )
                  {
                    (*(void (__fastcall **)(Actor *))(FIELD_U32(v3, 0x0) + 104))(v3);
                    FIELD_U8(v3, 0x13) = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    ++v1;
  }
  return result;
}
