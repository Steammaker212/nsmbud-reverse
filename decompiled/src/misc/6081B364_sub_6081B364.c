/* sub_6081B364
 * address: 0x6081B364   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081B364(int result)
{
  if ( !dword_60CC6C2C )
  {
    dword_60CC6C2C = result;
    FIELD_U8(result, 192) = 1;
  }
  return result;
}
