/* sub_608C50D0
 * address: 0x608C50D0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608C50D0(int *a1)
{
  int *result; // r0
  int *i; // r6

  result = sub_608C4F78(a1);
  for ( i = result; result; i = result )
  {
    (*(void (__fastcall **)(int *, int *))(*i + 8))(i, a1 + 56);
    i[10] = 3;
    nn__os__SignalEvent(i + 3);
    result = sub_608C4F78(a1);
  }
  return result;
}
