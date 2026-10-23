/* sub_604B2CD4
 * address: 0x604B2CD4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604B2CD4()
{
  int result; // r0

  result = AreaTask_intance;
  FIELD_U8(AreaTask_intance, 1873) = 0;
  return result;
}
