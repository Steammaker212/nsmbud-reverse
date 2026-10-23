/* sub_60543C48
 * address: 0x60543C48   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60543C48()
{
  int result; // r0

  result = FIELD_U8(dword_60CC6D78, 44);
  if ( (result & 8) == 0 )
    return sub_605532D0(dword_60C89E18 + 157360);
  return result;
}
