/* sub_607D07EC
 * address: 0x607D07EC   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D07EC(int a1)
{
  unsigned int *v2; // r7
  int v3; // r5
  char v4; // r12
  _DWORD *v5; // r5
  int v6; // r6
  int v7; // r5
  char v8; // r12
  int v9; // r0
  int v10; // r0
  int v11; // r0

  v2 = (unsigned int *)(a1 + 11356);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618806828 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3
    && (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1
    && (v5 = *(_DWORD **)(v3 + 620)) != 0
    && v5[3] == 1 )
  {
    v6 = FIELD_S8(a1, 84);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_U32(a1, 11420));
    (*(void (__fastcall **)(_DWORD *, int))(*v5 + 24))(v5, a1);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, v6);
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
    if ( ((unsigned int)&dword_60C7B364 & ~(1618807068 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
      {
        v9 = FIELD_U32(v7, 620);
        if ( v9 )
        {
          FIELD_U32(v9, 8) = 0;
          FIELD_U32(v9, 12) = 0;
        }
      }
    }
    v10 = sub_607CBC00(a1);
    if ( v10 )
      FIELD_U32(v10, 324) = 0;
    *v2 = 0;
  }
  else if ( *v2 )
  {
    goto LABEL_21;
  }
  v11 = sub_607CBC00(a1);
  if ( v11 )
    FIELD_U32(v11, 324) = 0;
LABEL_21:
  if ( FIELD_S32(a1, 11464) >= 5 )
    FIELD_U32(a1, 11464) = 4;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 7);
}
