/* sub_609089F8
 * address: 0x609089F8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609089F8(int a1, int a2)
{
  if ( a2 && (unsigned int)(FIELD_U32(a1, 120) - 3) >= 2 && FIELD_U32(a1, 112) != a2 )
    return sub_60912EA4(a1 + 28);
  else
    return 0;
}
