/* sub_60854050
 * address: 0x60854050   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60854050(int result)
{
  if ( FIELD_U8(result, 212) )
  {
    FIELD_U8(result, 212) = 0;
    return sub_60854FCC(FIELD_U32(result, 184));
  }
  return result;
}
