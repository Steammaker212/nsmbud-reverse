/* sub_600ABBA0
 * address: 0x600ABBA0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ABBA0(int *a1, int *a2)
{
  int v2; // r2
  int v3; // r1
  int result; // r0

  v2 = *a1;
  v3 = *a2;
  result = v3 < *a1;
  if ( v2 < v3 )
    return -1;
  return result;
}
