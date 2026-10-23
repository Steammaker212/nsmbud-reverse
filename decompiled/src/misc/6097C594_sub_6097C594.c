/* sub_6097C594
 * address: 0x6097C594   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_6097C594(_DWORD *a1)
{
  void *result; // r0

  result = (void *)a1[2];
  if ( result )
  {
    operator_delete_8DE3FC(result);
    a1[2] = 0;
    *a1 = 0;
    a1[1] = 0;
    return 0;
  }
  return result;
}
