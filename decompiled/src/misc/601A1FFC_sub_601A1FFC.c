/* sub_601A1FFC
 * address: 0x601A1FFC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601A1FFC()
{
  int v0; // r0
  int result; // r0

  v0 = dword_60C99DD0;
  FIELD_U32(dword_60C99DD0, 3780) |= 2u;
  result = FIELD_U32(v0, 3668);
  if ( result )
    return sub_604B6E00();
  return result;
}
