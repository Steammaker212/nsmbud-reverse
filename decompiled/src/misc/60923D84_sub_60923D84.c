/* sub_60923D84
 * address: 0x60923D84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60923D84(_DWORD *a1)
{
  void *v2; // r0
  void *result; // r0

  v2 = (void *)a1[6];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[5] = 0;
    a1[6] = 0;
  }
  result = (void *)a1[4];
  if ( result )
  {
    operator_delete_8DE3FC(result);
    a1[3] = 0;
    a1[4] = 0;
    return 0;
  }
  return result;
}
