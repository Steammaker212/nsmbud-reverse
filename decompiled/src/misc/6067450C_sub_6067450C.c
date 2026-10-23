/* sub_6067450C
 * address: 0x6067450C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067450C(int result)
{
  if ( !FIELD_U8(result, 16) )
  {
    FIELD_U32(result, 12) = 0;
    FIELD_U8(result, 16) = 32;
  }
  return result;
}
