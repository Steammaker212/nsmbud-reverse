/* sub_604EB5B8
 * address: 0x604EB5B8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EB5B8(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1

  result = (StateMethodExecuter *)FIELD_U8(a1, 15436);
  if ( !result )
  {
    result = *(StateMethodExecuter **)(a1 + 15424);
    v3 = -1;
    if ( *(StateMethodExecuter **)(a1 + 16476) == result || (v3 = 1, *(StateMethodExecuter **)(a1 + 16480) == result) )
    {
      FIELD_U32(a1, 23744) = v3;
      return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA60A0);
    }
    else if ( *(StateMethodExecuter **)(a1 + 16484) == result )
    {
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA6020);
      FIELD_U8(a1, 23750) = 1;
      return (StateMethodExecuter *)23750;
    }
  }
  return result;
}
