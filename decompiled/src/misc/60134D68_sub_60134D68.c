/* sub_60134D68
 * address: 0x60134D68   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60134D68(_DWORD *result, int *a2, int a3)
{
  int v3; // r12

  v3 = *a2;
  result[30] = *a2;
  result[31] = a2[1];
  result[32] = a2[2];
  result[33] = v3;
  result[34] = -1064304640;
  result[35] = 0;
  result[25] = -1103101952;
  if ( result[20] != result[1526] )
    a3 = -a3;
  result[1528] = a3;
  result[1529] = 0;
  result[1530] = 0;
  return result;
}
