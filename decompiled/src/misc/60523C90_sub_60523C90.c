/* sub_60523C90
 * address: 0x60523C90   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60523C90(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 44, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 4664) = 2;
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9B04);
  }
  return result;
}
