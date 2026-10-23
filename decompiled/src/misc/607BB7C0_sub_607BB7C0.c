/* sub_607BB7C0
 * address: 0x607BB7C0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607BB7C0(int a1)
{
  StateMethodExecuter *result; // r0

  FIELD_U32(a1, 1220) |= 0x40u;
  result = *(StateMethodExecuter **)(a1 + 11888);
  if ( result )
    return sub_604243B8((int)result);
  return result;
}
