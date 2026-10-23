/* KoopaTroopa_vf213
 * address: 0x6035C718   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall KoopaTroopa_vf213(_DWORD *result, int a2)
{
  if ( a2 )
  {
    result[1713] = a2;
    return (*(_DWORD *(__fastcall **)(_DWORD *, State *))(*result + 192))(result, &KoopaTroopa_StateID_BgmDance);
  }
  return result;
}
