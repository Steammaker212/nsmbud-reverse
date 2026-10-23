/* sub_601F7964
 * address: 0x601F7964   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601F7964(_DWORD *result)
{
  if ( result[60] == 4 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD))(*result + 320))(result, 0);
  return result;
}
