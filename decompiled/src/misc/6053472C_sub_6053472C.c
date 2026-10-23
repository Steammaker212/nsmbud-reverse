/* sub_6053472C
 * address: 0x6053472C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053472C(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !FIELD_U8(a1, 52672)
    || (result = (StateMethodExecuter *)sub_6047EF24(a1 + 15740, 1), result == (StateMethodExecuter *)1) )
  {
    if ( !FIELD_U8(a1, 52673)
      || (result = (StateMethodExecuter *)sub_6047EF24(a1 + 15740, 2), result == (StateMethodExecuter *)1) )
    {
      if ( !FIELD_U8(a1, 52674) )
        return StateMgr__changeState((StateMgr *)(a1 + 36), *(StateBase **)(a1 + 52));
      result = (StateMethodExecuter *)sub_6047EF24(a1 + 15740, 3);
      if ( result == (StateMethodExecuter *)1 )
        return StateMgr__changeState((StateMgr *)(a1 + 36), *(StateBase **)(a1 + 52));
    }
  }
  return result;
}
