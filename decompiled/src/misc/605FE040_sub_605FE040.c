/* sub_605FE040
 * address: 0x605FE040   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_605FE040(_WORD *result)
{
  __int16 v1; // r1

  v1 = result[3059] - 1;
  result[3059] = v1;
  if ( !v1 )
    return (_WORD *)(*(int (__fastcall **)(_WORD *, int *))(*(_DWORD *)result + 192))(result, &dword_60CB26B8);
  return result;
}
