/* sub_608DE574
 * address: 0x608DE574   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608DE574(int **a1)
{
  int *result; // r0
  int v3; // r2
  int *v4; // r2

  if ( (int)a1[2] < 1 )
    return 0;
  result = *a1;
  v3 = **a1;
  if ( v3 )
    FIELD_U32(v3, 4) = result[1];
  v4 = (int *)result[1];
  if ( v4 )
    *v4 = *result;
  *result = 0;
  result[1] = 0;
  a1[2] = (int *)((char *)a1[2] - 1);
  return result;
}
