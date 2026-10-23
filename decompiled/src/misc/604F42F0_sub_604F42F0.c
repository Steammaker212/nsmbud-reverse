/* sub_604F42F0
 * address: 0x604F42F0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F42F0(int a1)
{
  StateMethodExecuter **v2; // r6
  StateMethodExecuter *result; // r0
  int v4; // r0
  unsigned int v5; // r5

  v2 = (StateMethodExecuter **)(a1 + 9640);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 9640) - 1);
  *v2 = result;
  if ( !result )
  {
    v4 = SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref_2(FIELD_U32(a1, 9628));
    v5 = v4;
    if ( v4 == 10 )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA68DC);
    }
    else
    {
      *v2 = (StateMethodExecuter *)15;
      sub_6047EFCC(a1 + 7588, v4);
      result = (StateMethodExecuter *)(a1 + 7548);
      if ( v5 < 0x100 )
        result = (StateMethodExecuter *)((char *)result + v5);
      LOBYTE(result[41].currentState) = 1;
    }
  }
  return result;
}
