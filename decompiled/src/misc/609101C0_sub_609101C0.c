/* sub_609101C0
 * address: 0x609101C0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609101C0(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CCFAF4;
  if ( !dword_60CCFAF4 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x3Cu, (int)a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C5D290;
    dword_60CCFAF0 = (int)v3;
    *v2 = off_60C5D2A0;
    v2[11] = 0;
    v2[8] = 0;
    v2[7] = 0;
    v2[6] = 0;
    v2[5] = 0;
    v2[10] = v2 + 9;
    v2[9] = v2 + 9;
    v2[13] = 0;
    v2[14] = 0;
    v2[12] = 4;
    dword_60CCFAF4 = (int)v2;
  }
  return v2;
}
