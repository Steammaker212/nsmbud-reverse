/* StarCoinBase_vf40
 * address: 0x605F52FC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StarCoinBase_vf40(int result, int a2)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = result;
  if ( a2 == 1 )
  {
    result = FIELD_U8(result, 535);
    if ( FIELD_U8(v2, 535) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60CB21E0 + 8))();
      if ( v4 == result )
      {
        result = FIELD_U32(v2, 6148);
        if ( result )
        {
          result = ((int (__fastcall *)(int, int))loc_60584FEC)(dword_60CAF15C, v2 + 108);
          if ( result == 1 )
            return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 192))(v2, &dword_60CB2220);
        }
      }
    }
  }
  return result;
}
