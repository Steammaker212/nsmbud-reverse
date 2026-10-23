/* RedCoin_vf32
 * address: 0x606C7E4C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RedCoin_vf32(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CBAC5C + 8))();
  if ( v3 == result )
  {
    result = FIELD_U8(a1, 7097);
    if ( FIELD_U8(a1, 7097) )
    {
      FIELD_U8(a1, 7088) = FIELD_U8(a1, 84);
      return SE_OBJ_GET_RED_COIN_ref(a1);
    }
  }
  return result;
}
