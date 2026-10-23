/* sub_6002426C
 * address: 0x6002426C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002426C(int result)
{
  if ( dword_60C7F558 )
  {
    result = FIELD_U16(dword_60C7F558, 22) & ~(1 << result);
    FIELD_U16(dword_60C7F558, 22) = result;
  }
  return result;
}
