/* sub_603E50C0
 * address: 0x603E50C0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603E50C0(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60C995D0;
  if ( !dword_60C995D0 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x24u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60BF8E4C;
    dword_60C995CC = (int)result;
    result[4] = result + 4;
    result[5] = result + 4;
    result[6] = 0;
    result[7] = 16;
    result[8] = 0;
    dword_60C995D0 = (int)result;
  }
  return result;
}
