/* sub_60402E34
 * address: 0x60402E34   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60402E34(int a1)
{
  int v2; // r1
  int result; // r0
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  StateMgr *v7; // r4
  StateBase *v8; // r0
  int v9; // r5

  v2 = FIELD_U8(a1, 2692);
  result = FIELD_U8(a1, 2689);
  if ( v2 )
  {
    if ( result )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 16)
                                                                                                 + 4));
LABEL_4:
      sub_604028B8(a1);
      ((void (__fastcall *)(int))loc_60403080)(a1);
      return sub_604032A0(a1);
    }
  }
  else
  {
    if ( result )
    {
      if ( FIELD_U8(a1, 2697) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 40));
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v5 != (*(int (**)(void))(dword_60C99E7C + 8))() )
          StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60C99E9C);
      }
      StateMgr__execute((StateMgr *)(a1 + 40));
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 16)
                                                                                                 + 4));
      if ( FIELD_U8(a1, 2709) && sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 16) + 4)) == 1 )
      {
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 168))(*(_DWORD *)(FIELD_U32(a1, 16) + 4));
        FIELD_U32(a1, 504) = 9;
        if ( FIELD_U32(a1, 376) != 8 )
          sub_6078E608(*(_DWORD *)(FIELD_U32(a1, 16) + 12), 9);
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 84))(
          *(_DWORD *)(FIELD_U32(a1, 16) + 4),
          233,
          1.0,
          0.0,
          0.0);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 164))(*(_DWORD *)(FIELD_U32(a1, 16) + 4));
        FIELD_U8(a1, 2709) = 0;
        FIELD_U8(a1, 2710) = 1;
      }
      if ( FIELD_U8(a1, 2710) && sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 16) + 4)) == 1 )
      {
        v6 = FIELD_U32(a1, 16);
        if ( v6 )
        {
          (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(v6 + 4) + 84))(
            FIELD_U32(v6, 4),
            0,
            1.2,
            10.0,
            0.0);
          v6 = FIELD_U32(a1, 16);
        }
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v6 + 4) + 168))(FIELD_U32(v6, 4));
        FIELD_U8(a1, 2710) = 0;
      }
      goto LABEL_4;
    }
    if ( FIELD_U8(a1, 2697) )
    {
      v7 = (StateMgr *)(a1 + 40);
      v8 = StateMgr__getCurrentState(v7);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      result = (*(int (**)(void))(dword_60C99E7C + 8))();
      if ( v9 != result )
      {
        StateMgr__changeState(v7, (StateBase *)&dword_60C99E9C);
        return (int)StateMgr__execute(v7);
      }
    }
  }
  return result;
}
