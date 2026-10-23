/* sub_60175388
 * address: 0x60175388   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60175388(_BYTE *result)
{
  if ( !result[629] )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)result + 156))(result);
  result[19] = 1;
  return result;
}
