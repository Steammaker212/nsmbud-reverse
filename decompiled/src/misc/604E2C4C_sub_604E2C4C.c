/* sub_604E2C4C
 * address: 0x604E2C4C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E2C4C(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( FIELD_U8(a1, 20524) )
      v3 = &dword_60CA576C;
    else
      v3 = &dword_60CA56EC;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  return result;
}
