/* sub_6077AF34
 * address: 0x6077AF34   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6077AF34(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CBFBC0;
  if ( !dword_60CBFBC0 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x20u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C24990;
    dword_60CBFBBC = (int)result;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    dword_60CBFBC0 = (int)result;
  }
  return result;
}
