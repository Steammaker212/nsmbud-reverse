/* sub_608DDBE4
 * address: 0x608DDBE4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDBE4(int result)
{
  if ( FIELD_U8(result, 192) )
    return sub_608ADE38(result + 16, FIELD_U32(result, 8), FIELD_U32(result, 12));
  return result;
}
