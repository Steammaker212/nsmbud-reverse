/* sub_607188FC
 * address: 0x607188FC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607188FC(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CBD25C;
  if ( !dword_60CBD25C )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x44u, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C21C9C;
    dword_60CBD258 = (int)v3;
    *v2 = &off_60C21CAC;
    v2[11] = 0;
    v2[12] = 0;
    v2[13] = 0;
    v2[14] = 0;
    v2[15] = 0;
    v2[16] = 0;
    dword_60CBD25C = (int)v2;
  }
  return v2;
}
