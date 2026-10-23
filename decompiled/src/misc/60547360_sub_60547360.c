/* sub_60547360
 * address: 0x60547360   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60547360(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 9352, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U32(a1, 18464) )
      v3 = &dword_60CAC5A0;
    else
      v3 = &dword_60CAC580;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  return result;
}
