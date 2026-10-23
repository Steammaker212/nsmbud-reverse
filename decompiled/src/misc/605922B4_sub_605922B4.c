/* sub_605922B4
 * address: 0x605922B4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605922B4(_DWORD *result)
{
  int v1; // r2
  int v2; // r2

  v1 = result[2051];
  if ( !v1 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*result + 192))(result, &unk_60CAF808);
  v2 = v1 - 1;
  result[2051] = v2;
  if ( !v2 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, void *))(*result + 192))(result, &unk_60CAF808);
  return result;
}
