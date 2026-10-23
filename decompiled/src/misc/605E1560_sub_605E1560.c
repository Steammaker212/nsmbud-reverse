/* sub_605E1560
 * address: 0x605E1560   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1560(int result)
{
  int v1; // r2

  v1 = FIELD_U32(result, 6264);
  if ( (v1 & 0x120000) == 0x20000 )
  {
    FIELD_U32(result, 6264) = v1 & 0xFFC7FFFF | 0x100000;
    FIELD_U32(result, 8012) = 8;
  }
  return result;
}
