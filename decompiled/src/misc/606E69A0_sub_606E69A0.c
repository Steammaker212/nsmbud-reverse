/* sub_606E69A0
 * address: 0x606E69A0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606E69A0(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CBBFA4;
  if ( !dword_60CBBFA4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x14u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C1F868;
    dword_60CBBFA0 = (int)result;
    *((_BYTE *)result + 16) = 0;
    dword_60CBBFA4 = (int)result;
  }
  return result;
}
