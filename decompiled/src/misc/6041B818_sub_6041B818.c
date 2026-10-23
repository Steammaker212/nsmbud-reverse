/* sub_6041B818
 * address: 0x6041B818   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041B818(int a1, int a2, int a3)
{
  unsigned int v5; // r6
  int result; // r0

  v5 = sub_608FBBD0(FIELD_U32(a2, 1396), a3) - 1;
  *(_DWORD *)a1 = sub_6083DBF4(a2 + 140, 2, v5);
  if ( v5 >= 0x13 )
    v5 = 0;
  result = a2 + 8 * v5;
  FIELD_U64(a1, 8) = FIELD_U64(result, 1448);
  return result;
}
