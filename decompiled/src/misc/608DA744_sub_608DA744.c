/* sub_608DA744
 * address: 0x608DA744   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_608DA744(int a1)
{
  void *result; // r0

  sub_608A937C(FIELD_U32(a1, 12));
  result = *(void **)(a1 + 16);
  if ( result )
  {
    operator_delete_8DE3FC(result);
    FIELD_U32(a1, 16) = 0;
    return 0;
  }
  return result;
}
