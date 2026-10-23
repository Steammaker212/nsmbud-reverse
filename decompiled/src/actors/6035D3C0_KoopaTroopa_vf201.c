/* KoopaTroopa_vf201
 * address: 0x6035D3C0   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall KoopaTroopa_vf201(_DWORD *result)
{
  int v1; // r2

  v1 = **(_DWORD **)(result[1706] + 12);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  if ( result[1869] == 1 )
  {
    result[76] = 0;
    result[77] = 1099956224;
    result[78] = 1098907648;
    result[79] = 1099956224;
  }
  return result;
}
