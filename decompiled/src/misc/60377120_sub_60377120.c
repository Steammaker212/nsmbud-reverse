/* sub_60377120
 * address: 0x60377120   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60377120(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C96478;
  if ( !dword_60C96478 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x198u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BF12D8;
    dword_60C96474 = (int)v2;
    v2[30] = 0;
    memset(v2 + 4, 0, 96);
    v2[31] = -1;
    sub_603E6320(v2 + 32);
    sub_603E75B8(v2 + 55);
    dword_60C96478 = (int)v2;
  }
  return v2;
}
