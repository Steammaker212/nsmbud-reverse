/* StarCoinBase_vf32
 * address: 0x605F4A14   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StarCoinBase_vf32(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CB2220 + 8))();
  if ( v3 == result )
  {
    v5 = FIELD_U8(a1, 84);
    FIELD_U8(a1, 6164) = v5;
    if ( v5 != 255 )
    {
      SE_OBJ_GET_DRAGON_COIN_ref(a1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
    }
    FIELD_U8(a1, 6164) = -1;
    return 255;
  }
  return result;
}
