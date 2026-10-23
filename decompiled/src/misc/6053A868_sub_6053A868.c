/* sub_6053A868
 * address: 0x6053A868   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053A868(int a1)
{
  unsigned int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 83556);
  if ( v2 >= 3 )
    v2 = 0;
  result = (StateMethodExecuter *)sub_60532834(a1 + 4012 * v2 + 56);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CAB894);
  return result;
}
