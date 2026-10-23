/* sub_60909634
 * address: 0x60909634   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60909634(int result)
{
  if ( !dword_60CCF448 )
  {
    dword_60CCF448 = result;
    FIELD_U8(result, 192) = 1;
  }
  return result;
}
