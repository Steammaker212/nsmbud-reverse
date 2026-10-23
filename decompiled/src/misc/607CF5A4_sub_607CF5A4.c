/* sub_607CF5A4
 * address: 0x607CF5A4   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607CF5A4(int a1)
{
  unsigned int *v2; // r6
  int v3; // r5
  char v4; // r12
  _DWORD *v5; // r5
  int v6; // r8
  int v7; // r5
  int v8; // r5
  char v9; // r12
  int v10; // r0
  int v11; // r0
  StateMethodExecuter *result; // r0

  sub_60773F4C(a1);
  if ( (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 11368) + 132))(FIELD_U32(a1, 11368), 8.0) == 1 )
  {
    FIELD_U8(a1, 11460) = 1;
    v2 = (unsigned int *)(a1 + 11356);
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
    if ( ((unsigned int)&dword_60C7B364 & ~(1618802200 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
      {
        v5 = *(_DWORD **)(v3 + 620);
        if ( v5 )
        {
          v5[3] = 4;
          v6 = FIELD_S8(a1, 84);
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_U32(a1, 11420));
          v7 = (*(int (__fastcall **)(_DWORD *, int))(*v5 + 32))(v5, a1);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, v6);
          if ( v7 == 1 )
          {
            sub_607D033C(a1);
            v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
            if ( ((unsigned int)&dword_60C7B364 & ~(1618802456 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
            {
              StageActor_RTTI = (int)&off_60BC0098;
              _cxa_guard_release(&dword_60C7B364);
            }
            if ( v8 )
            {
              if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
              {
                v10 = FIELD_U32(v8, 620);
                if ( v10 )
                {
                  FIELD_U32(v10, 8) = 0;
                  FIELD_U32(v10, 12) = 0;
                }
              }
            }
            v11 = sub_607CBC00(a1);
            if ( v11 )
              FIELD_U32(v11, 324) = 0;
            *v2 = 0;
          }
        }
      }
    }
  }
  result = (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11368) + 116))(FIELD_U32(a1, 11368));
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U32(a1, 11428) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
  }
  return result;
}
