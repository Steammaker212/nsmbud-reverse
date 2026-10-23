/* sub_6063CC9C
 * address: 0x6063CC9C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063CC9C(unsigned int a1, float *a2, unsigned int a3)
{
  unsigned int v3; // r6
  unsigned int v6; // r7
  int result; // r0

  v3 = a1;
  v6 = a1 + 40;
  do
  {
    result = sub_6063CAC0(v3, a2, a3);
    v3 += 20;
  }
  while ( v3 < v6 );
  return result;
}
