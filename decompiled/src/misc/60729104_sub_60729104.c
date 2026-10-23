/* sub_60729104
 * address: 0x60729104   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60729104(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CBD8A4;
  if ( !dword_60CBD8A4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x38u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C21E14;
    dword_60CBD8A0 = (int)result;
    result[11] = 0;
    *((_BYTE *)result + 48) = 0;
    *((_BYTE *)result + 49) = 0;
    result[13] = 0;
    *((_WORD *)result + 20) = 0;
    result[9] = 0;
    result[8] = 0;
    result[7] = 0;
    result[6] = 0;
    result[5] = 0;
    result[4] = 0;
    dword_60CBD8A4 = (int)result;
  }
  return result;
}
