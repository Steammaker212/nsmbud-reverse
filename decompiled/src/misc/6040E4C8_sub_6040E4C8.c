/* sub_6040E4C8
 * address: 0x6040E4C8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6040E4C8(int a1)
{
  return (unsigned __int8)(FIELD_U8(a1, 17) - 31) < 3u || (unsigned __int8)(FIELD_U8(a1, 17) - 54) < 3u;
}
