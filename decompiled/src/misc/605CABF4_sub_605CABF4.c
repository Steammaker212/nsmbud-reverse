/* sub_605CABF4
 * address: 0x605CABF4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CABF4(int a1, int a2)
{
  int (__fastcall ***v2)(_DWORD, int *); // r8
  int result; // r0
  int v6; // r7
  bool v7; // zf
  StateBase *CurrentState; // r0
  int v9; // r4
  char v10; // r12

  result = FIELD_U32(a1, 140);
  if ( result )
  {
    v6 = FIELD_U32(a1, 64);
    v7 = v6 == 0;
    if ( v6 )
    {
      v2 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
      v7 = v2 == 0;
    }
    if ( !v7 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v9 == (*(int (**)(void))(dword_60CB0CEC + 8))() )
      {
LABEL_8:
        result = FIELD_U8(a1, 110) | 2;
        FIELD_U8(a1, 110) = result;
        return result;
      }
      if ( ((int (__fastcall *)(int, int, int))loc_605CAD30)(v6, a1, a2) == 1 )
      {
        SE_OBJ_TARU_BREAK_ref(v6, 0);
        goto LABEL_8;
      }
      result = FIELD_U32(a2, 140);
      if ( result == 2 )
      {
        if ( ((unsigned int)&dword_60C823D4 & ~(1616686248 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
        {
          dword_60C823D0 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C823D4);
        }
        result = (**v2)(v2, &dword_60C823D0);
        if ( result == 1 )
          return SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v2);
      }
    }
  }
  return result;
}
