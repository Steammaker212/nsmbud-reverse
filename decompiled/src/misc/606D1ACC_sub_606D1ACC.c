/* sub_606D1ACC
 * address: 0x606D1ACC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D1ACC(int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5

  v1 = a1 + 6168;
  v2 = FIELD_U32(a1, 6164);
  do
  {
    sub_60639230(v1);
    v1 += 1100;
  }
  while ( v1 < v2 );
  return 1;
}
