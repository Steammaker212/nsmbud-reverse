/* sub_605E4094
 * address: 0x605E4094   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E4094(StateMethodExecuter *result, int a2)
{
  int v2; // r1

  if ( a2 )
  {
    v2 = FIELD_U32(a2, 80);
    if ( (v2 | 1) == 1 )
      result[6].currentState = v2;
    return sub_605D79D0((int)result, (StateBase *)&dword_60CB1B04, 0);
  }
  return result;
}
