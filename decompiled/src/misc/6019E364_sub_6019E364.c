/* sub_6019E364
 * address: 0x6019E364   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6019E364(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C89DF8;
  if ( !dword_60C89DF8 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x228u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BD5E8C;
    dword_60C89DF4 = (int)v2;
    v2[4] = 0;
    v2[5] = 0;
    v2[6] = 0;
    sub_608DEB0C(v2 + 4, 128, (int)(v2 + 7));
    v2[135] = 0;
    v2[136] = 0;
    v2[137] = 0;
    dword_60C89DF8 = (int)v2;
  }
  return v2;
}
