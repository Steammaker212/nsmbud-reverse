/* sub_601FD6B0
 * address: 0x601FD6B0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FD6B0(int result)
{
  if ( !dword_60C8C188 )
  {
    dword_60C8C188 = result;
    FIELD_U8(result, 192) = 1;
  }
  return result;
}
