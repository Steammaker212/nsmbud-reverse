/* sub_6053A7C8
 * address: 0x6053A7C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053A7C8(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 12092, 1u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U32(a1, 83516) == 1 )
      v3 = &dword_60CAB614;
    else
      v3 = &dword_60CAB734;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v3);
  }
  return result;
}
