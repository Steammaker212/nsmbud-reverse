/* sub_603B27D8
 * address: 0x603B27D8   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_603B27D8(int a1))(_DWORD, int *)
{
  int v1; // r7
  unsigned int v2; // r1
  _DWORD *v3; // r8
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12
  char v6; // r12
  int v8; // r9
  int v9; // r0
  char v10; // r12
  int v11; // r6

  v1 = FIELD_U32(a1, 6496);
  if ( !v1 )
    return 0;
  v3 = (_DWORD *)(a1 + 6500);
  v2 = FIELD_U32(a1, 6500);
  if ( !v2 )
  {
    v8 = FIELD_U32(ActorMgr__instance, 27180);
    v9 = sub_60008598(ActorMgr__instance, 13, FIELD_U32(ActorMgr__instance, 27172));
    if ( v9 == v8 )
    {
LABEL_17:
      v11 = 0;
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)v9;
        if ( *(unsigned __int8 *)(*(_DWORD *)v9 + 28) == v1 )
          break;
        v9 = sub_60008598(ActorMgr__instance, 13, v9 + 4);
        if ( v9 == v8 )
          goto LABEL_17;
      }
    }
    if ( ((unsigned int)&dword_60C8DECC & ~(1614489996 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
    {
      dword_60C8DEC8 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C8DECC);
    }
    if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C8DEC8) == 1 )
    {
      *v3 = FIELD_U32(v11, 8);
      return 0;
    }
    return 0;
  }
  v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614489648 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v4 || (**v4)(v4, &StageActor_RTTI) != 1 )
    return 0;
  if ( ((unsigned int)&dword_60C8DECC & ~(1614489764 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
  {
    dword_60C8DEC8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8DECC);
  }
  if ( !(**v4)(v4, &dword_60C8DEC8) )
    return 0;
  return v4;
}
