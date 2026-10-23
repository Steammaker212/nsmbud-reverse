/* sub_60401FEC
 * address: 0x60401FEC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401FEC(int result, int a2)
{
  if ( FIELD_U8(result, 179520) )
    return sub_60543094(result + 21568, a2);
  return result;
}
