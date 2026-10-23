/* sub_602BC230
 * address: 0x602BC230   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602BC230(_DWORD *result)
{
  int v1; // r2
  int v2; // r2

  v1 = result[1578];
  if ( !v1 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60C91184);
  v2 = v1 - 1;
  result[1578] = v2;
  if ( !v2 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60C91184);
  return result;
}
