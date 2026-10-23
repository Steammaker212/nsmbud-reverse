/* sub_607D15C8
 * address: 0x607D15C8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607D15C8(int a1)
{
  int *result; // r0
  int v2; // r1
  int v3; // t1
  int v4; // r2

  v3 = FIELD_U32(a1, 11464);
  result = (int *)(a1 + 11464);
  v2 = v3;
  v4 = 5;
  if ( v3 < 5 )
    v4 = v2 + 1;
  *result = v4;
  return result;
}
