/* sub_602A33AC
 * address: 0x602A33AC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602A33AC(_BYTE *result)
{
  if ( !result[0x184C] )
    return (*(_BYTE *(__fastcall **)(_BYTE *))(*(_DWORD *)result + 0xE0))(result);
  return result;
}
