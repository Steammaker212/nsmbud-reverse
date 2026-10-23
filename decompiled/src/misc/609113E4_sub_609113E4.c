/* sub_609113E4
 * address: 0x609113E4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_609113E4()
{
  __int64 v0; // r0

  LODWORD(v0) = nn__os__GetSystemTickFrequency((nn__os *)0x35ABFC);
  qword_60CCFB50 = v0;
  return v0;
}
