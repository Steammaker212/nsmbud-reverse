/* sub_601F9E6C
 * address: 0x601F9E6C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601F9E6C(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60C8BF58;
  if ( !dword_60C8BF58 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x18u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60BD7C68;
    dword_60C8BF54 = (int)result;
    result[4] = 0;
    result[5] = 0;
    dword_60C8BF58 = (int)result;
  }
  return result;
}
