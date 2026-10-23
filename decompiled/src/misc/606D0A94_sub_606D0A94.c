/* sub_606D0A94
 * address: 0x606D0A94   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D0A94(int *a1)
{
  int *v1; // r4
  int v2; // r0
  int v3; // t1
  int result; // r0

  v1 = a1;
  sub_606D465C(a1 + 27, a1 + 41);
  v2 = v1[41] - 0x40000000;
  v1[41] = v2;
  v3 = v1[8579];
  v1 += 8579;
  *v1 = v2;
  result = v2 - v3;
  *(v1 - 5435) = result;
  return result;
}
