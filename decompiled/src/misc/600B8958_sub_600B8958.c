/* sub_600B8958
 * address: 0x600B8958   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600B8958(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // r5
  char v6; // r12
  int v7; // r5
  char v8; // r12
  int v9; // r6
  StateBase *CurrentState; // r0
  int v11; // r6
  int v12; // r0
  bool v13; // cc
  _BYTE *v14; // r0

  v3 = (_DWORD *)(a1 + 6128);
  v2 = FIELD_U32(a1, 6128);
  if ( v2 == 2 )
  {
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
    if ( ((unsigned int)&dword_60C82838 & ~(1611369120 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C82838) )
    {
      dword_60C82834 = (int)&off_60BC1FB4;
      _cxa_guard_release(&dword_60C82838);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C82834) == 1 )
      {
        v9 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v7 + 6096) + 8))(FIELD_U32(v7, 6096));
        if ( v9 != (*(int (**)(void))(dword_60C83518 + 8))() )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 == (*(int (**)(void))(dword_60C83518 + 8))() )
          {
            sub_6077A918(dword_60CBFA90, 0);
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 1028))(v7);
          }
        }
      }
    }
    v12 = FIELD_U32(a1, 6116);
    v13 = v12 <= 1;
    FIELD_U32(a1, 6116) = v12 - 1;
    v14 = (_BYTE *)(a1 + 6136);
    if ( v13 )
    {
      *v14 = 1;
    }
    else if ( !*v14 )
    {
      return;
    }
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C83590);
  }
  else if ( v2 == 1 )
  {
    v4 = FIELD_U32(a1, 6132);
    FIELD_U32(a1, 6132) = v4 - 1;
    if ( v4 <= 1 && sub_6077A158(dword_60CBFA90) == 1 )
    {
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
      if ( ((unsigned int)&dword_60C82838 & ~(1611368928 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C82838) )
      {
        dword_60C82834 = (int)&off_60BC1FB4;
        _cxa_guard_release(&dword_60C82838);
      }
      if ( v5 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C82834) == 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 692))(v5);
          FIELD_U32(a1, 6116) = 3600;
          *v3 = 2;
        }
      }
    }
  }
}
