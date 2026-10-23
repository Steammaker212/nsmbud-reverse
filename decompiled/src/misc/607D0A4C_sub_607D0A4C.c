/* sub_607D0A4C
 * address: 0x607D0A4C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607D0A4C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  char v4; // r12
  _DWORD *v5; // r6
  int v6; // r0
  StateMethodExecuter *result; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r1

  v2 = (_DWORD *)(a1 + 11356);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618807436 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v3 || !(**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) )
  {
    *v2 = 0;
    FIELD_U32(a1, 11428) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
  }
  v5 = (_DWORD *)(a1 + 11368);
  v6 = (int)(float)(9.0 - (*(float (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11368) + 120))(FIELD_U32(a1, 11368)));
  if ( v6 <= 9 )
    FIELD_U32(a1, 11448) = v6;
  if ( (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v5 + 132))(*v5, 9.0) == 1 )
  {
    FIELD_U32(a1, 11448) = 0;
    sub_607D0F8C(a1);
  }
  result = (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 116))(*v5);
  if ( result == (StateMethodExecuter *)1 )
  {
    v8 = FIELD_U32(v3, 620);
    if ( v8 )
    {
      v9 = FIELD_U32(v8, 16);
      if ( v9 == 6 )
      {
        v10 = a1;
        v11 = 1;
        goto LABEL_17;
      }
      if ( v9 == 5 )
      {
        v10 = a1;
        v11 = 0;
LABEL_17:
        sub_607D1164(v10, v11);
      }
    }
    FIELD_U32(a1, 11428) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
  }
  return result;
}
