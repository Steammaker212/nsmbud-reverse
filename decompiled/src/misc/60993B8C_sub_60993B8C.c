/* sub_60993B8C
 * address: 0x60993B8C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60993B8C(_BYTE *result)
{
  if ( (result[30] & 0x40) != 0 )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)result + 24))(result);
  return result;
}
