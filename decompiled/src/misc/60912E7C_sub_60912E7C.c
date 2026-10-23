/* sub_60912E7C
 * address: 0x60912E7C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60912E7C(int a1)
{
  void *result; // r0

  nn__os__FinalizeMessageQueue(a1);
  result = *(void **)(a1 + 48);
  if ( result )
  {
    operator_delete_8DE3FC(result);
    FIELD_U32(a1, 48) = 0;
    return 0;
  }
  return result;
}
