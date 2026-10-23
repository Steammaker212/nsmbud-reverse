/* sub_60923290
 * address: 0x60923290   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923290(int result, int a2)
{
  int v3; // r1

  v3 = FIELD_U32(result, 120);
  if ( v3 )
    return sub_60947FE0(result, v3, FIELD_U32(result, 8), FIELD_U32(a2, 120), FIELD_U32(a2, 8));
  return result;
}
