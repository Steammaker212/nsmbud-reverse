/* sub_60598898
 * address: 0x60598898   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60598898(int a1)
{
  if ( (FIELD_U8(a1, 6262) & 8) != 0 )
    sub_6059BB5C(a1 + 8036);
  else
    sub_605D81B8();
  return 1;
}
