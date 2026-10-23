/* sub_603F5508
 * address: 0x603F5508   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F5508(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60C99D88;
  if ( !dword_60C99D88 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x3Cu, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60BF949C;
    dword_60C99D84 = (int)result;
    *((_BYTE *)result + 30) = 0;
    *((_WORD *)result + 14) = 0;
    result[6] = 0;
    result[5] = 0;
    result[4] = 0;
    *((_BYTE *)result + 31) = 1;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0;
    dword_60C99D88 = (int)result;
  }
  return result;
}
