/* sub_6075DD90
 * address: 0x6075DD90   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6075DD90(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60CBF354;
  if ( !dword_60CBF354 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x40u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C241F4;
    dword_60CBF350 = (int)result;
    result[7] = 0;
    result[6] = 0;
    result[5] = 0;
    result[4] = 0;
    result[8] = &dword_60B3B95C;
    result[9] = &dword_60B3B95C;
    result[10] = &dword_60B3B95C;
    result[11] = &dword_60B3B95C;
    result[12] = &dword_60B3B95C;
    result[13] = &dword_60B3B95C;
    result[14] = &dword_60B3B95C;
    result[15] = &dword_60B3B95C;
    dword_60CBF354 = (int)result;
  }
  return result;
}
