/* sub_607FA378
 * address: 0x607FA378   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FA378(int a1, int *a2)
{
  int v2; // r2
  int v3; // r1
  int result; // r0

  v2 = *a2;
  v3 = a2[1];
  result = FIELD_U32(a1, 40);
  FIELD_U32(result, 48) = v2;
  FIELD_U32(result, 52) = v3;
  return result;
}
