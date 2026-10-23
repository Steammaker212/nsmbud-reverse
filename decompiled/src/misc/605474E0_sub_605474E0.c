/* sub_605474E0
 * address: 0x605474E0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605474E0(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 40, 1u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 18464) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAC460);
  }
  return result;
}
