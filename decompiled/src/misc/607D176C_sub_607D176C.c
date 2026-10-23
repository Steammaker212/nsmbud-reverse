/* sub_607D176C
 * address: 0x607D176C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D176C(int a1, int a2)
{
  unsigned int *v4; // r7
  int v5; // r6
  char v6; // r12
  int v7; // r0
  int v8; // r0
  int v9; // r5
  char v10; // r12
  _DWORD *v11; // r6
  int v12; // r5
  int v13; // r6

  v4 = (unsigned int *)(a1 + 11356);
  v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618810800 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1 )
    {
      v7 = FIELD_U32(v5, 620);
      if ( v7 )
      {
        FIELD_U32(v7, 8) = 0;
        FIELD_U32(v7, 12) = 0;
      }
    }
  }
  if ( a2 )
  {
    *v4 = FIELD_U32(a2, 8);
    v8 = FIELD_U32(a2, 620);
    if ( v8 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 16))(v8, a1);
  }
  v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v4);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618811012 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v9 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &StageActor_RTTI) == 1 )
    {
      SE_VOC_YS_EAT_ref((_DWORD *)a1, 0);
      v11 = *(_DWORD **)(v9 + 620);
      if ( v11 )
      {
        v11[3] = 1;
        v11[2] = FIELD_U32(a1, 8);
        v12 = FIELD_S8(a1, 84);
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_U32(a1, 11420));
        v13 = (*(int (__fastcall **)(_DWORD *, int))(*v11 + 20))(v11, a1);
        if ( FIELD_S32(a1, 11464) >= 5 || FIELD_U8(a1, 11468) )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 624))(a1, 7);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, v12);
        if ( !v13 )
          *v4 = 0;
      }
    }
  }
}
