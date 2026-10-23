/* sub_609729B4
 * address: 0x609729B4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609729B4(_DWORD *result, int a2, int a3, _DWORD *a4)
{
  result[5] = a2;
  result[6] = a3;
  if ( !a4 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 8))(result);
  if ( *a4 < a4[1] )
  {
    *(_DWORD *)(a4[2] + 4 * *a4) = result;
    result = (_DWORD *)(*a4 + 1);
    *a4 = result;
  }
  return result;
}
