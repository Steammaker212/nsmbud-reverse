/* sub_607B89CC
 * address: 0x607B89CC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607B89CC(int a1)
{
  unsigned int v1; // r1
  float *v2; // r1

  v1 = FIELD_U32(a1, 1316);
  if ( v1 > 3 )
    v2 = (float *)&unk_60B0CE34;
  else
    v2 = (float *)*(&off_60C253B4 + v1);
  return v2[FIELD_U32(a1, 1320)];
}
