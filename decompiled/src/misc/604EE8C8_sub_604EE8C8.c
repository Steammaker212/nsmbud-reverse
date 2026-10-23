/* sub_604EE8C8
 * address: 0x604EE8C8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EE8C8(int a1)
{
  StateMethodExecuter *result; // r0
  StateMgr *v3; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 42520, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = (StateMgr *)(a1 + 42504);
    if ( (*(_BYTE *)(FIELD_U32(a1, 74356) + 64) & 1) != 0 )
    {
      return StateMgr__changeState(v3, &stru_60CA6520);
    }
    else
    {
      StateMgr__changeState(v3, &stru_60CA63E0);
      FIELD_U32(a1, 47116) = 1;
      FIELD_U8(a1, 47131) = 0;
      FIELD_U8(a1, 47128) = 1;
      FIELD_U32(a1, 47124) = 10;
      FIELD_U8(a1, 47132) = 1;
      return (StateMethodExecuter *)47132;
    }
  }
  return result;
}
