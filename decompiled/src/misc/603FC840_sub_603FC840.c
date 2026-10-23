/* sub_603FC840
 * address: 0x603FC840   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FC840(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C99DEC;
  if ( !dword_60C99DEC )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x290u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BF96B0;
    dword_60C99DE8 = (int)v2;
    sub_603FC8C4(v2 + 4);
    dword_60C99DEC = (int)v2;
  }
  return v2;
}
