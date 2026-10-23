/* sub_60478DB0
 * address: 0x60478DB0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60478DB0(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r2
  int v5; // r1

  v2 = *a2;
  result[57] = a2[1];
  result[56] = v2;
  v3 = result[55];
  v4 = FIELD_U32(v3, 24);
  v5 = FIELD_U32(v3, 28);
  result[58] = v4;
  result[59] = v5;
  return result;
}
