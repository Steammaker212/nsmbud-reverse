/* sub_60401938
 * address: 0x60401938   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60401938(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60C99E60;
  if ( !dword_60C99E60 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x2048u, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BF9A08;
    dword_60C99E5C = (int)v3;
    *v2 = off_60BF9A18;
    sub_60525608(v2 + 5);
    sub_6052AD14(v2 + 1177);
    dword_60C99E60 = (int)v2;
  }
  return v2;
}
