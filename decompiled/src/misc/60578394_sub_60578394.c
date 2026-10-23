/* sub_60578394
 * address: 0x60578394   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60578394(int result, int a2)
{
  unsigned __int8 *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = (unsigned __int8 *)result;
  if ( a2 == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(result + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60CB10FC + 8))();
    if ( v4 == result )
    {
      result = v2[7292];
      if ( !v2[7292] )
      {
        result = ((int (__fastcall *)(int, unsigned __int8 *))loc_60584FEC)(dword_60CAF15C, v2 + 108);
        if ( result == 1 )
        {
          result = v2[7488];
          if ( v2[7488] )
            return (*(int (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)v2 + 192))(v2, &dword_60CAED48);
        }
      }
    }
  }
  return result;
}
