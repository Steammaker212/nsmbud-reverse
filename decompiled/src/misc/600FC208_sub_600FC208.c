/* sub_600FC208
 * address: 0x600FC208   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600FC208(int a1)
{
  char v1; // r12
  int v3; // r2
  _BOOL4 result; // r0
  int (__fastcall ***v5)(_DWORD, int *); // r4
  int v6; // r0
  StateBase *CurrentState; // r0
  int v8; // r4

  v3 = FIELD_U8(a1, 6312);
  result = 0;
  if ( !v3 && !FIELD_U8(a1, 6313) )
  {
    if ( FIELD_U8(a1, 7248) )
    {
      v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 7244);
      if ( ((unsigned int)&dword_60C8110C & ~(1611645532 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
      {
        dword_60C81108 = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C8110C);
      }
      if ( v5 )
      {
        v6 = (**v5)(v5, &dword_60C81108);
        if ( v6 )
          v6 = (int)v5;
      }
      else
      {
        v6 = 0;
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      return v8 == (*(int (**)(void))(dword_60C85F34 + 8))();
    }
    else
    {
      return 0;
    }
  }
  return result;
}
