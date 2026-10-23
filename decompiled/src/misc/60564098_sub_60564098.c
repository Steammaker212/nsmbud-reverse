/* sub_60564098
 * address: 0x60564098   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60564098(int result)
{
  if ( FIELD_U32(result, 7368) <= 1u )
    return sub_605B6364(result, result + 6856, FIELD_S8(result, 6850));
  return result;
}
