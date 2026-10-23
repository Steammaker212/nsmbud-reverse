/* sub_603F3640
 * address: 0x603F3640   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F3640(_DWORD *result, _DWORD *a2)
{
  if ( *a2 == 1 )
  {
    result = (_DWORD *)result[461];
    if ( result )
      return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 12))(result);
  }
  return result;
}
