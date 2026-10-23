/* sub_607CEE0C
 * address: 0x607CEE0C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CEE0C(int result)
{
  if ( (FIELD_U8(result, 1233) & 8) != 0 )
    return sub_6076D180(result, 5, 0);
  return result;
}
