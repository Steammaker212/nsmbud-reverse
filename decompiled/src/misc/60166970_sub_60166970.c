/* sub_60166970
 * address: 0x60166970   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60166970(_DWORD *result, int *a2, int *a3)
{
  int v3; // r3
  int v4; // r1

  v3 = *a2;
  result[1] = a2[1];
  *result = v3;
  v4 = *a3;
  result[3] = a3[1];
  result[2] = v4;
  return result;
}
