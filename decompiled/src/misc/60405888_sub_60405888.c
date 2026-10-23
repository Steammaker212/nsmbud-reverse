/* sub_60405888
 * address: 0x60405888   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60405888(int a1)
{
  int v2; // r5
  signed int result; // r0

  v2 = a1 + 2796;
  result = sub_60235E50(a1 + 2796);
  if ( result == 1 )
  {
    FIELD_U8(a1, 2704) = 0;
    return sub_60236074(v2);
  }
  return result;
}
