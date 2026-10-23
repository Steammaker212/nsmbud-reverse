/* sub_60819FC8
 * address: 0x60819FC8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60819FC8(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CC6BFC;
  if ( !dword_60CC6BFC )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x18u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C2A2E8;
    dword_60CC6BF8 = (int)result;
    result[4] = 0;
    *((_BYTE *)result + 20) = 0;
    dword_60CC6BFC = (int)result;
  }
  return result;
}
